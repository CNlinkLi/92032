/* ****************************************************
 * \copyright (C)2023,CETC。
 * \file b03rosinterface.cpp
 * \brief 运动控制软件配置项
 * \see R/RH170G001B03.SSD  软件概要设计说明 V0.0.0
 * \author Huanghao
 * \date 2023/12/16
 * \version 0.0.0 尚未正式提交
 * \history1
 * ***************************************************/
#include "b03_dawl_rosinterface.h"



//Temp Var
uint16_t rxLen=0;
float rxMsgs[10000];
uint32_t rxStamp[10000];

extern uint32_t loopStamp;
B03RosInterFace::B03RosInterFace(QObject *parent) : QObject(parent)
{

}

B03RosInterFace::~B03RosInterFace()
{

}

void B03RosInterFace::init()
{
    int argc=1;
    char argv[]="";

    rclcpp::init(argc,(char**)&argv);
    rosNode = std::make_shared<rclcpp::Node>("ROS_CAN");
    RCLCPP_INFO(rosNode->get_logger(), "ROSCAN_Node starts");
    motorTgt_sub = rosNode->create_subscription<rosmsg::msg::RosCanMotorTgt>("RosCanMotorTgt", 100, std::bind(&B03RosInterFace::rosMsgRxCallbackExSkeRobt, this, _1));
    // rclcpp::Rate loopRate(1);
    motorSta_pub = rosNode->create_publisher<rosmsg::msg::RosCanMotorSta>("RosCanMotorSta", 100);
    imuReg_pub = rosNode->create_publisher<rosmsg::msg::RosCanImuMsg>("RosCanImuMsg", 100);
    // ros::init(argc,(char**)&argv,"ROSCAN");
    // ros::NodeHandle m_hNOde;
    // m_hNOde=ros::NodeHandle("ExSkeRobt");

    // m_PublisherExSkeRobt=m_hNOde.advertise<ExSkeRobt::RosCanMotorTgt>(
    //             "/motion/RosCanMotorTarget",
    //             1);

    // m_PublisherExSkeRobt=m_hNOde.advertise<ExSkeRobt::RosCanMotorSta>(
    //             "/motion/RosCanMotorState",
    //             1);

    // m_SubscriberExSkeRobt=m_hNOde.subscribe<ExSkeRobt::RosCanMotorTgt>(
    //             "/motion/RosCanMotorTarget",
    //             1,
    //             &B03RosInterFace::rosMsgRxCallbackExSkeRobt,
    //             this);

    // pLogFile =new QFile(logFName);
    // if(pLogFile->open(QIODevice::WriteOnly)){
    //     QString t_head="Timestamp";
    //     QString t_str;

//        for(int i=0;i<TOTAL_JOINTCNT;i++){
//            t_str.sprintf(",J%dposref",i);
//            t_head.append(t_str);
//        }
//        for(int i=0;i<TOTAL_JOINTCNT;i++){
//            t_str.sprintf(",J%dtorqref",i);
//            t_head.append(t_str);
//        }
        // t_head.append("\n");
        // logBuf.append(t_head.toLocal8Bit());
        // pLogFile->write(logBuf);
        // pLogFile->flush();
        // logBuf.clear();
    }
// }

void B03RosInterFace::loop()
{
    rosMsgUpdate();
    rclcpp::spin_some(rosNode);
}

void B03RosInterFace::rosMsgTxIF023()
{

}

void B03RosInterFace::rosMsgTxIF021()
{
    motorSta_pub->publish(i_staMsg);
    imuReg_pub->publish(o_imuMsg);
}

bool B03RosInterFace::msg022online()
{

    return m_msg022offlineCnt<m_maxofflineCnt;
}

void B03RosInterFace::rosMsgRxCallbackExSkeRobt(const rosmsg::msg::RosCanMotorTgt::SharedPtr msg)
{

    o_tgtMsg=*msg;
}

//void B03RosInterFace::rosMsgRxCallbackIF022(const R_RH170G001::LegTarget::ConstPtr &msg)
//{
//    m_msg022offlineCnt=0;
//    o_motor_mode=msg->motor_mode;
//    for(int i=0;i<TOTAL_JOINTCNT;i++){
//        o_joint[i].kp=msg->joint[i].kp;
//        o_joint[i].kd=msg->joint[i].kd;
//        o_joint[i].pos=msg->joint[i].pos;
//        o_joint[i].vel=msg->joint[i].speed;
//        o_joint[i].torq=msg->joint[i].torq;
//    }

//    QString t_log;
//    QString t_str;
//    t_log.sprintf("%d",loopStamp);
//    for(int i=0;i<TOTAL_JOINTCNT;i++){
//        t_str.sprintf(",%4.4f",msg->joint[i].pos);
//        t_log.append(t_str);
//    }
//    for(int i=0;i<TOTAL_JOINTCNT;i++){
//        t_str.sprintf(",%4.4f",msg->joint[i].torq);
//        t_log.append(t_str);
//    }
//    t_log.append("\n");

//    logBuf.append(t_log.toLocal8Bit());
//    if(logBuf.length()>=8192){
//        if(pLogFile!=nullptr){
//            if(pLogFile->isOpen()){
//                pLogFile->write(logBuf);
//                logBuf.clear();
//                pLogFile->flush();
//            }
//        }
//    }
    //Temply check
//    rxMsgs[rxLen]=msg->joint[0].pos;
//    rxStamp[rxLen]=loopStamp;
    //    rxLen++;
//}

//void B03RosInterFace::rosMsgRxCallbackIF020(const R_RH170G001::HandTarget::ConstPtr &msg)
//{
//    for(int i=0;i<7;i++){
//        o_handJointCmdL[i]=msg->lJcmd[i];
//        o_handJointPosRefL[i]=msg->lJPosRef[i];

//        o_handJointCmdR[i]=msg->rJcmd[i];
//        o_handJointPosRefR[i]=msg->rJPosRef[i];
//    }
//    o_handCmdL=msg->lHandCmd;
//    o_handCmdR=msg->rHandCmd;
//    o_crawCmdL=msg->lCrawCmd;
//    o_crawCmdR=msg->rCrawCmd;
//    o_gpoutCmdL=msg->lGpout;
//    o_gpoutCmdR=msg->rGpout;
//    o_pumpCmdL=msg->lPumpCmd;
//    o_pumpCmdR=msg->rPumpCmd;
//}

bool B03RosInterFace::msg013online()
{
    return m_msg013offlineCnt<m_maxofflineCnt;
}

//void B03RosInterFace::rosMsgRxCallbackIF013(const R_RH170G001::devCtrl::ConstPtr &msg)
//{
//    m_msg013offlineCnt=0;
//    o_req_init_shot=msg->req_init?true:false;
//    o_req_selfCheck_shot=msg->req_selfDiagnose?true:false;
//    o_leg_drv_mode=msg->legMotorMode;
//    o_leg_drv_follow=msg->legMotionRefSel;
//    o_arm_drv_mode=msg->armMotroMode;
//    o_arm_drv_follow=msg->armMotionRefSel;
//}

void B03RosInterFace::rosMsgUpdate()
{
    rosMsgTxIF023();
    rosMsgTxIF021();
    m_msg013offlineCnt++;
    m_msg022offlineCnt++;
}

// void B03RosInterFace::timerEvent(QTimerEvent *event)
// {

// }
