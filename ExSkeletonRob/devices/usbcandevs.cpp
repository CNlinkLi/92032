/* ****************************************************
 * \copyright (C)2023,CETC。
 * \file usbcandevs.cpp
 * \brief 运动控制软件配置项
 * \see R/RH170G001B03.SSD  软件概要设计说明 V0.0.0
 * \author Huanghao
 * \date 2023/12/16
 * \version 0.0.0 尚未正式提交
 * \history1
 * ***************************************************/
#include "usbcandevs.h"


UsbCanDevs::UsbCanDevs(QObject *parent) : QObject(parent)
{

}

#define CAN_BAUD_1MBPS ((uint16_t)0x1400)

bool UsbCanDevs::init()
{
//    m_cfg.enable_legAcc_Can=true;
//    m_cfg.enable_neckMot_Can=false;
//    m_cfg.legAcc_CanInd=0;
//    m_cfg.neckMot_CanInd=1;

    input.frames.resize(256);
    output.frames.resize(256);

//    VCI_INIT_CONFIG config;
//    config.AccCode = 0;
//    config.AccMask = 0xffffffff;
//    config.Filter = 1;
//    config.Mode = 0;
//    config.Timing0 = CAN_BAUD_1MBPS & 0xff;
//    config.Timing1 = CAN_BAUD_1MBPS >> 8;

//    if (!VCI_InitCAN(VCI_USBCAN1, 0,0, &config)){
//        qDebug("VCI_InitCAN(%d) failed\n", 0);
//    }
//    printf("VCI_InitCAN(%d) succeeded\n", 0);

//    if (!VCI_StartCAN(VCI_USBCAN1, 0,0)){
//        qDebug("VCI_StartCAN(%d) failed\n", 0);
//    }
//    printf("VCI_StartCAN(%d) succeeded\n", 0);
////    if(m_cfg.enable_neckMot_Can){
////        if (!VCI_InitCAN(VCI_USBCAN1, m_cfg.neckMot_CanInd,0, &config)){
////            qDebug("VCI_InitCAN(%d) failed\n", 0);
////        }
////        printf("VCI_InitCAN(%d) succeeded\n", 0);

////        if (!VCI_StartCAN(VCI_USBCAN1, m_cfg.neckMot_CanInd,0)){
////            qDebug("VCI_StartCAN(%d) failed\n", 0);
////        }
////        printf("VCI_StartCAN(%d) succeeded\n", 0);
////    }
//    //        startTimer(5);
}

void UsbCanDevs::preLoop()
{
//    int cnt =VCI_Receive(VCI_USBCAN1, 0, 0, &(m_rxLine[0][0]), MAX_CANRXBUF_SIZE, 0);
//    output.framse.clear();
//    for(int i=0;i<cnt;i++){
//        QCanBusFrame t_frame;
//        t_frame.setPayload(QByteArray((char*)(m_rxLine[0][i].Data),m_rxLine[0][i].DataLen));
//        t_frame.setFrameId(m_rxLine[0][i].ID);
//    }
}

void UsbCanDevs::aftLoop()
{
//    for(int i=0;i<input.frames.count();i++){
//        VCI_CAN_OBJ canObj;
//        canObj.ID=input.frames.at(i).frameId();
//        canObj.DataLen=input.frames.at(i).payload().length();
//        canObj.SendType=0;
//        canObj.ExternFlag=0;
//        canObj.RemoteFlag=0;
////        uint16_t pDataRaw,vDataRaw,tDataRaw,kpDataRaw,kdDataRaw;
//        memcpy(canObj.Data,input.frames.at(i).payload().constData(),canObj.DataLen);
////        canObj.Data[0]=pDataRaw>>16;
////        canObj.Data[1]=pDataRaw&0xFF;
////        canObj.Data[2]=(vDataRaw>>4)&0xFF;
////        canObj.Data[3]=((vDataRaw&0xF)<<4)|((kpDataRaw>>8)&0xF);
////        canObj.Data[4]=kpDataRaw&0xF;
////        canObj.Data[5]=(kdDataRaw>>4)&0xFF;
////        canObj.Data[6]=((kdDataRaw&0xF)<<4)|((tDataRaw>>8)&0xF);
////        canObj.Data[7]=tDataRaw&0xFF;
//        VCI_Transmit(VCI_USBCAN1,0,0,&canObj,1);
//    }
//    input.frames.clear();
}

//void UsbCanDevs::loop()
//{



//}

//void UsbCanDevs::loopLegAcc()
//{
//    //Check RX frames
//    int cnt =VCI_Receive(VCI_USBCAN1, m_cfg.legAcc_CanInd, 0, &(m_rxLine[0][0]), MAX_CANRXBUF_SIZE, 0);
//    for(int i=0;i<cnt;i++){
//        //Decode data
//        switch(m_rxLine[0][i].ID){
//        case 0x611:
//        case 0x612:
//        case 0x613:
//        case 0x614:
//        case 0x615:
//        case 0x616:
//            decodeAccData(m_rxLine[0][i].ID-0x611,&(m_rxLine[0][i].Data[0]));
//            break;
//        default:
//            //Unknown data
//            continue;
//            break;
//        };
//    }
//}

//void UsbCanDevs::loopNeckMot()
//{
//    int cnt =VCI_Receive(VCI_USBCAN1, m_cfg.legAcc_CanInd, 0, &(m_rxLine[0][0]), MAX_CANRXBUF_SIZE, 0);
////    VCI_ReadCANStatus(VCI_USBCAN1,m_cfg.legAcc_CanInd,0,&m_legAccCanSta);
////    if(m_legAccCanSta.regStatus){

////    }
//    for(int i=0;i<cnt;i++){
//        //Decode data
//        switch(m_rxLine[0][i].ID){
//        case 0x11:
//        case 0x12:
//            decodeAccData(m_rxLine[0][i].ID-0x11,&(m_rxLine[0][i].Data[0]));
//            break;
//        default:
//            //Unknown data
//            continue;
//            break;
//        };
//    }
//    for(int i=0;i<2;i++){
//        VCI_CAN_OBJ canObj;
//        canObj.ID=i;
//        canObj.DataLen=8;
//        canObj.SendType=0;
//        canObj.ExternFlag=0;
//        canObj.RemoteFlag=0;
//        uint16_t pDataRaw,vDataRaw,tDataRaw,kpDataRaw,kdDataRaw;
//        pDataRaw=input.neckMot_p[i]*32767.0f/m_cfg.neckMot_MaxPos-m_cfg.neckMot_MaxPos;
//        vDataRaw=input.neckMot_v[i]*2047.0f/m_cfg.neckMot_MaxVel-m_cfg.neckMot_MaxVel;
//        tDataRaw=input.neckMot_t[i]*2047.0f/m_cfg.neckMot_MaxTorq-m_cfg.neckMot_MaxTorq;
//        kpDataRaw=input.neckMot_kp[i]*2047.0f/m_cfg.neckMot_MaxKp-m_cfg.neckMot_MaxKp;
//        kdDataRaw=input.neckMot_kd[i]*2047.0f/m_cfg.neckMOt_MaxKd-m_cfg.neckMOt_MaxKd;
//        canObj.Data[0]=pDataRaw>>16;
//        canObj.Data[1]=pDataRaw&0xFF;
//        canObj.Data[2]=(vDataRaw>>4)&0xFF;
//        canObj.Data[3]=((vDataRaw&0xF)<<4)|((kpDataRaw>>8)&0xF);
//        canObj.Data[4]=kpDataRaw&0xF;
//        canObj.Data[5]=(kdDataRaw>>4)&0xFF;
//        canObj.Data[6]=((kdDataRaw&0xF)<<4)|((tDataRaw>>8)&0xF);
//        canObj.Data[7]=tDataRaw&0xFF;
//        VCI_Transmit(VCI_USBCAN1,m_cfg.legAcc_CanInd,0,&canObj,1);
//    }
//}

//void UsbCanDevs::decodeAccData(uint8_t ind, uint8_t *pdata)
//{
////    output.legAcc[ind][0]=*((int16_t*)pdata+0)/32767.0f*20.0f;
////    output.legAcc[ind][1]=*((int16_t*)pdata+1)/32767.0f*20.0f;
////    output.legAcc[ind][2]=*((int16_t*)pdata+2)/32767.0f*20.0f;
//}

//void UsbCanDevs::decodeMotData(uint8_t ind, uint8_t *pdata)
//{
////    uint16_t pDataRaw=*(pdata+0)*0x100+*(pdata+1);
////    uint16_t vDataRaw=(*(pdata+2)*0x10+(*(pdata+3)))>>8;
////    uint16_t tDataRaw=((*(pdata+3))&0x0F)*0x100+*(pdata+4);
////    output.neckMot_p[ind]=pDataRaw/32767.0f*m_cfg.neckMot_MaxPos-m_cfg.neckMot_MaxPos;
////    output.neckMot_v[ind]=vDataRaw/2047.0f*m_cfg.neckMot_MaxVel-m_cfg.neckMot_MaxVel;
////    output.neckMot_t[ind]=tDataRaw/2047.0f*m_cfg.neckMot_MaxTorq-m_cfg.neckMot_MaxTorq;

//}

