#include "roscan_app.h"

RosCan_App::RosCan_App(QObject *parent) : QObject(parent)
{

}

void RosCan_App::init()
{
    m_rosIf.init();
    m_deviceDriver.Init();
}

void RosCan_App::preloop()
{
    m_deviceDriver.DeviceRead();
}

void RosCan_App::afterloop()
{
    m_deviceDriver.DeviceWrite();
}

void RosCan_App::loop()
{
    preloop();

    for(int i= 0;i<MOTORNUM;i++)
    {
        m_rosIf.i_staMsg.motor[i].curr_pos = m_deviceDriver.MotorOutput[i].currPos;
        m_rosIf.i_staMsg.motor[i].curr_speed = m_deviceDriver.MotorOutput[i].currSpeed;
        m_rosIf.i_staMsg.motor[i].curr_torq = m_deviceDriver.MotorOutput[i].currTorq;
        m_rosIf.i_staMsg.motor[i].curr_kp = m_deviceDriver.MotorOutput[i].currKp;
        m_rosIf.i_staMsg.motor[i].curr_kd = m_deviceDriver.MotorOutput[i].currKd;


        m_rosIf.o_imuMsg.qurd_x  = m_deviceDriver.imuOutputReg.qurd_x;
        m_rosIf.o_imuMsg.qurd_y  = m_deviceDriver.imuOutputReg.qurd_y;
        m_rosIf.o_imuMsg.qurd_z  = m_deviceDriver.imuOutputReg.qurd_z;
        m_rosIf.o_imuMsg.qurd_w  = m_deviceDriver.imuOutputReg.qurd_w;
        m_rosIf.o_imuMsg.gravity_x  = m_deviceDriver.imuOutputReg.gravity_x;
        m_rosIf.o_imuMsg.gravity_y  = m_deviceDriver.imuOutputReg.gravity_y;
        m_rosIf.o_imuMsg.gravity_z  = m_deviceDriver.imuOutputReg.gravity_z;
        m_rosIf.o_imuMsg.ang_roll  = m_deviceDriver.imuOutputReg.ang_roll;
        m_rosIf.o_imuMsg.ang_pitch  = m_deviceDriver.imuOutputReg.ang_pitch;
        m_rosIf.o_imuMsg.ang_yaw  = m_deviceDriver.imuOutputReg.ang_yaw;
    }

    m_rosIf.loop();

    for(int i= 0;i<MOTORNUM;i++)
    {
        m_deviceDriver.MotorInput[i].tgtPos = m_rosIf.o_tgtMsg.motor[i].tgt_pos;
        m_deviceDriver.MotorInput[i].tgtSpeed = m_rosIf.o_tgtMsg.motor[i].tgt_speed;
        m_deviceDriver.MotorInput[i].tgtTorq = m_rosIf.o_tgtMsg.motor[i].tgt_torq;
        m_deviceDriver.MotorInput[i].tgtKp = m_rosIf.o_tgtMsg.motor[i].tgt_kp;
        m_deviceDriver.MotorInput[i].tgtKd = m_rosIf.o_tgtMsg.motor[i].tgt_kd;


        // m_deviceDriver.MotorInput[i].tgtPos = 1.2;
        // m_deviceDriver.MotorInput[i].tgtSpeed = 1.3;
        // m_deviceDriver.MotorInput[i].tgtTorq = 4;
        // m_deviceDriver.MotorInput[i].tgtKp = 0;
        // m_deviceDriver.MotorInput[i].tgtKd = 0;
    }
    afterloop();
}


void RosCan_App::runTask()
{
    timespec res;

    init();

    timespec wakeupTime;
    timespec sleepTime;
    timespec sleepDur;
    uint64_t sleepNsec;
    timespec tmpTime;
    uint64_t wakeupStamp,sleepStamp;
    static uint64_t wakeupCnt;
    static uint64_t lastWakeupStamp;
    static uint64_t firstStamp;
    static uint32_t loopCnt;
    static uint32_t loopFreq;
    static uint32_t maxStamp;
    static uint32_t minStamp;

    clock_gettime(CLOCK_REALTIME,&wakeupTime);
    wakeupStamp=wakeupTime.tv_sec*1000000000+wakeupTime.tv_nsec;
    lastWakeupStamp=wakeupStamp;
    loopCnt=0;
    minStamp=2000000;
    maxStamp=0;
    clock_gettime(CLOCK_REALTIME,&tmpTime);
    firstStamp=tmpTime.tv_sec*1000000000+tmpTime.tv_nsec;
    wakeupCnt=0;

    while(1)
    {
        loop();
        clock_gettime(CLOCK_REALTIME,&sleepTime);
        sleepStamp=sleepTime.tv_sec*1000000000+sleepTime.tv_nsec;
        wakeupCnt++;

//        uint64_t sleepNsec=firstStamp+1000000*wakeupCnt-sleepStamp+500;
        sleepNsec=firstStamp+5000000*wakeupCnt-sleepStamp+500;
        sleepDur.tv_sec=0;
        sleepDur.tv_nsec=sleepNsec;
        int s=clock_nanosleep(CLOCK_REALTIME,0,&sleepDur,NULL);

        loopCnt++;
        clock_gettime(CLOCK_REALTIME,&wakeupTime);
        wakeupStamp=wakeupTime.tv_sec*1000000000+wakeupTime.tv_nsec;
        uint32_t sleepTimens=wakeupStamp-sleepStamp;


        if(sleepTimens>maxStamp){maxStamp=sleepTimens;}
        if(sleepTimens<minStamp){minStamp=sleepTimens;}
        if((wakeupStamp-lastWakeupStamp)>=1000000000){
            loopFreq=loopCnt;
        // printf("loop rate is %d,sleeptime %d,max %d ,min %d\n",
        //                    loopFreq,int(wakeupStamp-sleepStamp),maxStamp,minStamp);
        // printf("wakeupStamp is %ld ,lastWakeupStamp is %ld\n",
        //                    wakeupStamp,lastWakeupStamp);
        loopCnt=0;
        minStamp=2000000;
        maxStamp=0;
        lastWakeupStamp=wakeupStamp;
    }

    }
    rclcpp::shutdown();
}

