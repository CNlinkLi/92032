/* ****************************************************
 * \copyright (C)2023,CETC。
 * \file b03rosinterface.h
 * \brief 运动控制软件配置项
 * \see R/RH170G001B03.SSD  软件概要设计说明 V0.0.0
 * \author Huanghao
 * \date 2023/12/16
 * \version 0.0.0 尚未正式提交
 * \history1
 * ***************************************************/

#ifndef B03ROSINTERFACE_H
#define B03ROSINTERFACE_H

#include <QObject>
#include <QFile>

/*!  ros1
// #include "ros/publisher.h"
// #include "ros/subscriber.h"
// #include "ros/ros.h"
// #include <ros/message.h>
// #include "ExSkeRobt/RosCanMotorSta.h"
// #include "ExSkeRobt/RosCanMotorTgt.h"
*/

#include "rosmsg/msg/ros_can_motor_sta.hpp"
#include "rosmsg/msg/ros_can_motor_tgt.hpp"
#include "rosmsg/msg/ros_can_imu_msg.hpp"
#include "std_msgs/msg/int32.hpp"
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;

/*!
 * \brief B03RosInterFace 类实现外部ROS接口
 */
class B03RosInterFace : public QObject
{
    Q_OBJECT

public:
    explicit B03RosInterFace(QObject *parent = nullptr);
    ~B03RosInterFace();

    /*!
     * \brief init初始化
     */
    void init();
    /*!
     * \brief loop轮询
     */
    void loop();
    /*!
     * \brief JointDat 关节数据
     */
    struct JointDat{
        float pos; /*! 位置 rad */
        float vel; /*! 速度 rad/s */
        float torq;/*! 力矩 Nm */
        float kp;  /*! 刚度系数 Nm/rad */
        float kd;  /*! 阻尼系数 Nm/(rad/s) */
    };

    /*!
     * \brief ds402 wheel 实例化
     */
//    DS402Joint lWheel,rWheel;

    /* B03RosInterFace 的外部数据接口 begin*/
//    int8_t   i_motor_mode[TOTAL_JOINTCNT];///< \brief i_motor_mode 输入，关节目标模式
//    uint16_t i_motor_sta[TOTAL_JOINTCNT];///< \brief i_motor_sta 输入，关节状态字
//    JointDat i_joint[TOTAL_JOINTCNT];///< \brief i_joint 输入，关节当前位置速度力矩
//    int8_t i_dev_online;///< \brief i_dev_online 输入，设备在线标记
//    float i_bodyImuQ4[4];///< \brief i_bodyImuQ4 输入，躯干IMU四元数
//    float i_bodyImuAcc[3];///< \brief i_bodyImuAcc 输入，躯干IMU加速度计值
//    float i_bodyImuDv[3];///< \brief i_bodyImuDv 输入，躯干IMU速度值
//    float i_bodyImuDq[3];///< \brief i_bodyImuDq 输入，躯干IMU角速度值
//    float i_bodyImuROT[3];///< \brief i_bodyImuROT 输入，躯干IMU转角速度
//    float i_legAcc[6][3];///< \brief i_legAcc 输入，腿部加速度计值
//    bool i_isMotionPwrOn;///< \brief i_isMotionPwrOn 输入，电源板已打开动力电源
//    bool i_isCtrlPwrOn;///< \brief i_isCtrlPwrOn 输入，电源板已打开控制电源
//    bool i_isPwrErr;///< \brief i_isPwrErr 输入，电源板报错标记
//    bool i_isPwrCharging;///< \brief i_isPwrCharging 输入，电源板充电标记
//    float i_pwrCurrent;///< \brief i_pwrCurrent 输入，电源板电流（A）
//    float i_pwrVoltage;///< \brief i_pwrVoltage 输入，电源板电压（V）
//    float i_pwrSocVolume;///< \brief i_pwrSocVolume 输入，电源板估计电池荷电状态，百分比

//    float i_handJointPosL[7];///< \brief i_handJointPos 左手臂关节当前角度，单位rad
//    float o_handJointPosRefL[7]; ///< \brief o_handJointPosRef 左手臂关节角度参考,单位rad
//    float i_handJointVelL[7];///< \brief i_handJointVel 左手臂关节角速度,单位rad/s
//    float i_handJointCurrentL[7];///< \brief i_handJointCurrent 左手臂关节转矩，单位Nm
//    float i_forceTorqueSensorL[6];///< \brief i_forceTorqueSensor 左手部六维力传感器数据，单位N和Nm
//    uint16_t i_handJointErrL[7];///< \brief i_handJointErr 左手臂关节报错代码
//    uint16_t i_handJointStaL[7];
//    uint16_t o_handJointCmdL[7];///< \brief o_handJointCmd 左手臂关节指令字
//    uint16_t i_handStaL;///< \brief i_handSta 左灵巧手状态字
//    uint16_t i_crawStaL;///< \brief i_crawSta 左夹爪状态字
//    uint16_t i_pumpStaL;///< \brief i_pumpSta 左气泵状态字
//    uint16_t i_gpinStaL;///< \brief i_gpinSta 左手腕GPIO输入状态字
//    uint16_t o_handCmdL;///< \brief o_handCmd 左灵巧手控制字
//    uint16_t o_crawCmdL;///< \brief o_crawCmd 左夹爪控制字
//    uint16_t o_pumpCmdL;///< \brief o_pumpCmd 左气泵控制字
//    uint16_t o_gpoutCmdL;///< \brief o_gpoutCmd 左手腕GPIO控制字

//    float i_handJointPosR[7];///< \brief i_handJointPos 右手臂关节当前角度，单位rad
//    float o_handJointPosRefR[7]; ///< \brief o_handJointPosRef 右手臂关节角度参考,单位rad
//    float i_handJointVelR[7];///< \brief i_handJointVel 右手臂关节角速度,单位rad/s
//    float i_handJointCurrentR[7];///< \brief i_handJointCurrent 右手臂关节转矩，单位Nm
//    float i_forceTorqueSensorR[6];///< \brief i_forceTorqueSensor 右手部六维力传感器数据，单位N和Nm
//    uint16_t i_handJointStaR[7];
//    uint16_t i_handJointErrR[7];///< \brief i_handJointErr 右手臂关节报错代码
//    uint16_t o_handJointCmdR[7];///< \brief o_handJointCmd 右手臂关节指令字
//    uint16_t i_handStaR;///< \brief i_handSta 右灵巧手状态字
//    uint16_t i_crawStaR;///< \brief i_crawSta 右夹爪状态字
//    uint16_t i_pumpStaR;///< \brief i_pumpSta 右气泵状态字
//    uint16_t i_gpinStaR;///< \brief i_gpinSta 右手腕GPIO输入状态字
//    uint16_t o_handCmdR;///< \brief o_handCmd 右灵巧手控制字
//    uint16_t o_crawCmdR;///< \brief o_crawCmd 右夹爪控制字
//    uint16_t o_pumpCmdR;///< \brief o_pumpCmd 右气泵控制字
//    uint16_t o_gpoutCmdR;///< \brief o_gpoutCmd 右手腕GPIO控制字

//    /*!
//     * \brief i_ftSenL 输入，左足六维力传感器数值，单位为N和Nm\n
//     * 下标0 - Fx ,单位N\n
//     * 下标1 - Fy ,单位N\n
//     * 下标2 - Fz ,单位N\n
//     * 下标3 - Mx ,单位Nm\n
//     * 下标4 - My ,单位Nm\n
//     * 下标5 - Mz ,单位Nm
//     */
//    float i_ftSenL[6];
//    /*!
//     * \brief i_ftSenL 输入，右足六维力传感器数值，单位为N和Nm\n
//     * 下标0 - Fx ,单位N\n
//     * 下标1 - Fy ,单位N\n
//     * 下标2 - Fz ,单位N\n
//     * 下标3 - Mx ,单位Nm\n
//     * 下标4 - My ,单位Nm\n
//     * 下标5 - Mz ,单位Nm
//     */
//    float i_ftSenR[6];

    rclcpp::Node::SharedPtr rosNode;

    rosmsg::msg::RosCanMotorSta i_staMsg;
    rosmsg::msg::RosCanMotorTgt o_tgtMsg;
    rosmsg::msg::RosCanImuMsg o_imuMsg;
    rclcpp::Subscription<rosmsg::msg::RosCanMotorTgt>::SharedPtr motorTgt_sub;
    rclcpp::Publisher<rosmsg::msg::RosCanMotorSta>::SharedPtr motorSta_pub;
    rclcpp::Publisher<rosmsg::msg::RosCanImuMsg>::SharedPtr imuReg_pub;
    /* B03RosInterFace 的外部数据接口 end*/

    /*!
     * \brief rosMsgTxIF023 R/RH170G003 IF023接口发送ROS消息
     */
    void rosMsgTxIF023();

    /*!
     * \brief rosMsgTxIF021 R/RH170G003 IF021接口发送ROS消息
     */
    void rosMsgTxIF021();

    //Output data
    //Subscribe message:If022
//    /*!
//     * \brief o_motor_mode 输出，关节目标工作模式
//     */
//    int8_t o_motor_mode;
//    /*!
//     * \brief o_joint 输出，关节目标位置/速度/力矩/KP/KD等值
//     */
//    JointDat o_joint[TOTAL_JOINTCNT];

//    /*!
//     * \brief i_joint 输入，关节目标位置/速度/力矩/KP/KD等值
//     */

//    JointDat i_joint[TOTAL_FORCECNT];
    /*!
     * \brief msg022online R/RH170G003 IF022接口消息在线标记
     * \return true - 在线 ，false - 离线
     */
    bool msg022online();
    /*!
     * \brief rosMsgRxCallbackIF022 R/RH170G003 IF022接口消息接收回调
     * \param msg 接收到的ROS消息
     */
//    void rosMsgRxCallbackIF022(const R_RH170G001::LegTarget::ConstPtr &msg);
    /*!
     * \brief rosMsgRxCallbackIF020 R/RH170G003 IF020接口消息接收回调
     * \param msg 接收到的ROS消息
     */
//    void rosMsgRxCallbackIF020(const R_RH170G001::HandTarget::ConstPtr &msg);

    void rosMsgRxCallbackExSkeRobt(const rosmsg::msg::RosCanMotorTgt::SharedPtr msg);
    //Subscribe message:IF013
    /*!
     * \brief o_req_init_shot 输出，请求初始化标记
     */
    bool o_req_init_shot;//One shot
    /*!
     * \brief o_req_selfCheck_shot 输出，请求自检标记
     */
    bool o_req_selfCheck_shot;
    /*!
     * \brief o_leg_drv_mode 输出，腿部驱动器目标工作模式
     */
    int8_t o_leg_drv_mode;
    /*!
     * \brief o_arm_drv_mode 输出，手部驱动器目标工作模式
     */
    int8_t o_arm_drv_mode;
    /*!
     * \brief o_arm_drv_follow 输出，手部驱动器跟随源选择
     */
    int8_t o_arm_drv_follow;
    /*!
     * \brief o_leg_drv_follow 输出，腿部驱动器跟随源选择
     */
    int8_t o_leg_drv_follow;
    /*!
     * \brief msg013online R/RH170G003 IF013消息在线标记
     * \return true - 在线， flase - 离线
     */
    bool msg013online();
    /*!
     * \brief rosMsgRxCallbackIF013 R/RH170G003 IF013 ROS消息接收回调
     * \param msg ROS消息
     */
//    void rosMsgRxCallbackIF013(const ExSkeRobt::RosCanMotorTgt::ConstPtr &msg);
    //State

    // QString logFName="./rosiflog.csv";
    // QFile *pLogFile=nullptr;
    // QByteArray logBuf;
private:
    uint32_t m_msgTxIF023seq=0;
    /*!
     * \brief m_msg022offlineCnt R/RH170G003 IF022 消息离线计数器
     */
    int m_msg022offlineCnt=0;
    /*!
     * \brief m_msg013offlineCnt R/RH170G003 IF013 消息离线计数器
     */
    int m_msg013offlineCnt=0;
    /*!
     * \brief m_maxofflineCnt ROS消息离线判定时间
     */
    int m_maxofflineCnt=100;//100ms
    /*!
     * \brief m_PublisherIF023 R/RH170G003 IF023 ROS消息发布实例
     */
    // ros::Publisher m_PublisherIF023,m_PublisherIF021;
    // ros::Publisher m_PublisherExSkeRobt;

    /*!
     * \brief m_SubscriberIF022，m_SubscriberIF013 ROS消息订阅实例
     */
    // ros::Subscriber m_SubscriberIF022,m_SubscriberIF013,m_SubscriberIF020;
    // ros::Subscriber m_SubscriberExSkeRobt;
    /*!
     * \brief rosMsgUpdate 刷新所有发布消息
     */
    void rosMsgUpdate();
    /*!
     * \brief timerEvent QObject内置定时器事件回调函数，通过startTimer()启动定时器
     * \param event 事件信息
     */
    // void timerEvent(QTimerEvent *event) override;

signals:

};

#endif // B03ROSINTERFACE_H
