#ifndef DEVICE_DRIVER_H
#define DEVICE_DRIVER_H
#include "socketcan.h"


#define MOTORNUM 2
class DeviceDriver
{
public:
    explicit DeviceDriver();

    /*!
     * \brief m_socketCANIf  socketCAN接口实例
     */
    SocketCAN m_socketCANIf;

    void Init();

    void DeviceDecode(unsigned int can_id, unsigned char *data);

    void DeviceEncode(unsigned int can_id, unsigned char *data);

    void MotorEncode(unsigned int can_id, unsigned char* data);

    void MotorDecode(unsigned int can_id, unsigned char* data);

    void SetRCPMode();

    void DeviceRead();

    void DeviceWrite();

    struct _MotorOutput
    {
        float currPos;
        float currSpeed;
        float currTorq;
        float currKp;
        float currKd;
    };

    struct _MotorInput
    {
        float tgtPos;
        float tgtSpeed;
        float tgtTorq;
        float tgtKp;
        float tgtKd;
    };
    _MotorOutput MotorOutput[MOTORNUM] ={0};
    _MotorInput MotorInput[MOTORNUM] = {0};

    // float maxPos = 12.5f;
    // float maxVel = 30.0f;
    // float maxCurr = 18.0f;
    // float minKp = 0;
    // float maxKp = 500.0f;
    // float minKd = 0;
    // float maxKd = 5.0f;


    struct ImuOutputReg
    {
        float qurd_x;
        float qurd_y;
        float qurd_z;
        float qurd_w;
        float gravity_x;
        float gravity_y;
        float gravity_z;
        float ang_roll;
        float ang_pitch;
        float ang_yaw;
    };
    ImuOutputReg imuOutputReg ={0};
private:
    float gyro_gravity_arg = 0.00048828f; //单位：g(=9.8m/s^2)
    float gyro_angle_arg = 0.0000958738f; //单位：rad
    float gyro_qurd_arg = 0.0000305176f; //

    float angle_to_rad = 3.14/180.0;
};

#endif // DEVICE_DRIVER_H
