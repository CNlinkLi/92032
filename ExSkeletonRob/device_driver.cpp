#include "device_driver.h"

unsigned int Float_to_Uint(float _max, float _min, float value, unsigned int bits)
{
    float span = _max - _min;
    if(value < _min)
    {
        value = _min;
    }else if(value > _max)
    {
        value = _max;
    }
    return (unsigned int)(((value - _min)/span) * (1<<bits - 1));
}

float Uint_to_float(float _max, float _min, unsigned int value, unsigned int bits)
{
    float span = _max -_min;

    return (((float)value)/(1<<bits - 1) * span) + _min;
}

DeviceDriver::DeviceDriver() {}

void DeviceDriver::Init()
{
    memset(&m_socketCANIf.txCanMsg,0,sizeof(m_socketCANIf.txCanMsg));
    memset(&m_socketCANIf.rxCanMsg,0,sizeof(m_socketCANIf.rxCanMsg));
    m_socketCANIf.can_init_for_linux(&m_socketCANIf.fd);
}

void DeviceDriver::SetRCPMode()
{
    m_socketCANIf.txCanMsg.stdId =0x123;
    memset(m_socketCANIf.txCanMsg.data,0,sizeof(m_socketCANIf.txCanMsg.data));
    m_socketCANIf.txCanMsg.dlc = 1;
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,m_socketCANIf.txCanMsg.dlc);
}

// void DeviceDriver::MotorEncode(unsigned int can_id, unsigned char* data)
// {
//     unsigned char motor_id = can_id & 0xF;
//     unsigned short _pos =Float_to_Uint(maxPos, -maxPos, MotorInput[motor_id].pos, 16);
//     unsigned short _vel =Float_to_Uint(maxVel, -maxVel, MotorInput[motor_id].vel, 12);
//     unsigned short _curr =Float_to_Uint(maxCurr, -maxCurr, MotorInput[motor_id].curr, 12);
//     unsigned short _kp =Float_to_Uint(maxKp, -maxKp, MotorInput[motor_id].kp, 12);
//     unsigned short _kd =Float_to_Uint(maxKd, -maxKp, MotorInput[motor_id].kd, 12);

//     data[0] = _pos >> 8;
//     data[1] = _pos & 0xFF;
//     data[2] = _vel >> 8;
//     data[3] = _vel & 0xFF;
//     data[4] = 0;
//     data[5] = 0;
//     data[6] = 0;
//     data[7] = 0;

// }

// void DeviceDriver::MotorDecode(unsigned int can_id, unsigned char* data)
// {

//     unsigned char motor_id = can_id & 0xF;

//     MotorOutput[motor_id].pos = Uint_to_float(maxPos, -maxPos, data[0]<<8 | data[1], 16);
//     MotorOutput[motor_id].vel = Uint_to_float(maxVel, -maxVel, data[2]<<8 | data[3], 12);
//     MotorOutput[motor_id].curr = Uint_to_float(maxCurr, -maxCurr, data[4]<<8 | data[5], 12);
//     MotorOutput[motor_id].temp = Uint_to_float(maxCurr, -maxCurr, data[6] | data[7]<<8, 12);;
// }

void DeviceDriver::DeviceRead()
{   int readCnt = 0;
    int ret = 0;
    while(readCnt<20)
    {
      ret = m_socketCANIf.can_read_data(m_socketCANIf.fd,m_socketCANIf.rxCanMsg.stdId,m_socketCANIf.rxCanMsg.data);
      // if(ret = -1)
      // {
      //     perror("can read error");
      // }
      DeviceDecode(m_socketCANIf.rxCanMsg.stdId,m_socketCANIf.rxCanMsg.data);
      readCnt++;
    }

}
union CanFrameUnion
{
    float f32[2];
    unsigned char byte[8];
    short s16[4];
};

void DeviceDriver::DeviceDecode(unsigned int can_id, unsigned char *data)
{
    CanFrameUnion tempData;
    memcpy(tempData.byte,data,sizeof(tempData.byte));
    switch(can_id)
    {
    case 0x80://四元数qurdx
    //tempData为raw_data
    imuOutputReg.qurd_x = tempData.s16[0]*gyro_qurd_arg;
    imuOutputReg.qurd_y= tempData.s16[1]*gyro_qurd_arg;
    imuOutputReg.qurd_z= tempData.s16[2]*gyro_qurd_arg;
    imuOutputReg.qurd_w = tempData.s16[3]*gyro_qurd_arg;
    break;

    case 0x81://加速度 g
    imuOutputReg.gravity_x = tempData.s16[0]*gyro_gravity_arg;
    imuOutputReg.gravity_y = tempData.s16[1]*gyro_gravity_arg;
    imuOutputReg.gravity_z= tempData.s16[2]*gyro_gravity_arg;
    break;

    case 0x82://欧拉角 rad
    imuOutputReg.ang_roll = tempData.s16[0]*gyro_angle_arg;
    imuOutputReg.ang_pitch = tempData.s16[1]*gyro_angle_arg;
    imuOutputReg.ang_yaw  = tempData.s16[2]*gyro_angle_arg;
    break;

    case 0x111://电机力矩 Nm
    MotorOutput[0].currTorq = tempData.f32[0];
    MotorOutput[1].currTorq = tempData.f32[1];
    break;

    case 0x112://电机速度 rad/s
    MotorOutput[0].currSpeed = tempData.f32[0]*angle_to_rad;
    MotorOutput[1].currSpeed = tempData.f32[1]*angle_to_rad;
    break;

    case 0x113://电机角度 rad
    MotorOutput[0].currPos = tempData.f32[0]*angle_to_rad;
    MotorOutput[1].currPos = tempData.f32[1]*angle_to_rad;
    break;

    case 0x114://kp  Nm/rad
    MotorOutput[0].currKp = tempData.f32[0];
    MotorOutput[1].currKp = tempData.f32[1];
    break;

    case 0x115://kd Nm/(rad/s)
    MotorOutput[0].currKd = tempData.f32[0];
    MotorOutput[1].currKd = tempData.f32[1];
    break;

    case 0x116:

    break;

    case 0x120:
    break;
    }
}


void DeviceDriver::DeviceWrite()
{
    SetRCPMode();

    m_socketCANIf.txCanMsg.stdId = 0x341;//torque
    DeviceEncode(m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data);
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,8);

    m_socketCANIf.txCanMsg.stdId = 0x342;//pos
    DeviceEncode(m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data);
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,8);

    m_socketCANIf.txCanMsg.stdId = 0x343;//speed
    DeviceEncode(m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data);
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,8);

    m_socketCANIf.txCanMsg.stdId = 0x344;//kp
    DeviceEncode(m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data);
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,8);

    m_socketCANIf.txCanMsg.stdId = 0x345;//kd
    DeviceEncode(m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data);
    m_socketCANIf.can_write_data(m_socketCANIf.fd,m_socketCANIf.txCanMsg.stdId,m_socketCANIf.txCanMsg.data,8);


}

void DeviceDriver::DeviceEncode(unsigned int can_id, unsigned char *data)
{
    CanFrameUnion tempData;

    switch(can_id)
    {
     case 0x341://torque
        tempData.f32[0] = MotorInput[0].tgtTorq;
        tempData.f32[1] = MotorInput[1].tgtTorq;
         break;
     case 0x342://pos rad
        tempData.f32[0] = MotorInput[0].tgtPos*(1/angle_to_rad);
        tempData.f32[1] = MotorInput[1].tgtPos*(1/angle_to_rad);
         break;
     case 0x343://speed rad
        tempData.f32[0] = MotorInput[0].tgtSpeed*(1/angle_to_rad);
        tempData.f32[1] = MotorInput[1].tgtSpeed*(1/angle_to_rad);
         break;
     case 0x344://Kp
        tempData.f32[0] = MotorInput[0].tgtKp;
        tempData.f32[1] = MotorInput[1].tgtKp;
         break;
     case 0x345://Kd
        tempData.f32[0] = MotorInput[0].tgtKd;
        tempData.f32[1] = MotorInput[1].tgtKd;
         break;
    }
     memcpy(data,tempData.f32,sizeof(tempData.f32));
}
