#ifndef ROSCAN_APP_H
#define ROSCAN_APP_H
#include "b03_dawl_rosinterface.h"
#include "usbcandevs.h"
#include "socketcan.h"
#include <QObject>
#include "device_driver.h"
#include <stdio.h>
class RosCan_App : public QObject
{
    Q_OBJECT
public:
    explicit RosCan_App(QObject *parent = nullptr);
    /*!
     * \brief m_rosIf ROS通讯接口实例
     */
    B03RosInterFace m_rosIf;
    // /*!
    //  * \brief m_usbCanDev USBCAN设备接口实例
    //  */
    // UsbCanDevs m_usbCanDev;


    /*!
     * \brief m_motorDriver 电机设备接口实例
     */

    DeviceDriver m_deviceDriver;

    /*!
     * \brief init() 包括 socketcan初始化(配置can通信参数，启动can端口,创建socket 绑定端口),ros消息配置
     */
    void init();
    /*!
     * \brief preloop() CAN接收帧解码，ROS消息上发
     */
    void preloop();
    /*!
     * \brief afterloop()   ROS消息下发,CAN发送帧编码
     */
    void afterloop();

    void loop();

    void runTask();
};

#endif // ROSCAN_APP_H
