/* ****************************************************
 * \copyright (C)2023,CETC。
 * \file usbcandevs.h
 * \brief USB转CAN设备上所挂载设备的接口实现，包含颈部电机、腿部加速度计
 * \see R/RH170G001B03.SSD  软件概要设计说明 V0.0.0
 * \author Huanghao
 * \date 2023/12/16
 * \version 0.0.0 尚未正式提交
 * \history1
 * ***************************************************/
#ifndef USBCANDEVS_H
#define USBCANDEVS_H

#include <QObject>
// #include <QCanBusFrame>
#include <QVector>
//#include "platformDefine.h"
// #include <qcanbusdevice.h>
#include "socketcan.h"
/*!
 * \brief UsbCanDevs类实现USB转CAN设备上所挂载设备的接口
 */
class UsbCanDevs : public QObject
{
    Q_OBJECT
public:
    explicit UsbCanDevs(QObject *parent = nullptr);

    /*!
     * \brief UsbCanDevsInput结构体表示该模块的输出信息，下标表示颈部关节编号.\n
     * 关节编号详见platformDefine.h
     */
    struct UsbCanDevsInput{
//        QVector<QCanBusFrame> frames;
        QVector<SocketCAN::_CanRxMsg> frames;
    };
    /*!
    * \brief UsbCanDevOutput结构体表示该模块的输出信息，下标表示颈部关节编号.\n
    * 关节编号详见platformDefine.h
    */
    struct UsbCanDevOutput{
//        QVector<QCanBusFrame> framse;
    QVector<SocketCAN::_CanTxMsg> frames;
    };
    /*!
     * \brief UsbCanDevConfig结构体表示该模块的配置信息
     */
    struct UsbCanDevConfig{
    };
    /*!
     * \brief input输入缓冲区实例
     */
    UsbCanDevsInput input;
    /*!
     * \brief output输出缓冲区实例
     */
    UsbCanDevOutput output;
    /*!
     * \brief init初始化
     * \return true - 成功 ，false - 失败
     */
    bool init();
    /*!
     * \brief loop轮询
     */
//    void loop();
    void preLoop();
    void aftLoop();

private:
/*!
 * \def MAX_CANRXBUF_SIZE CAN报文接收缓冲区大小
 */
#define MAX_CANRXBUF_SIZE (512)
    /*!
     * \brief m_rxLine CAN总线接收缓冲区，下标表示不同的序号
     */
//    VCI_CAN_OBJ m_rxLine[2][MAX_CANRXBUF_SIZE];
    /*!
     * \brief m_legAccCanSta腿部加速度计所在CAN总线的状态
     */
    /*!
     * \brief m_cfg配置参数实例
     */
    UsbCanDevConfig m_cfg;

    //    /*!
    //     * \brief loopLegAcc轮询腿部加速度计
    //     */
    //    void loopLegAcc();
    //    /*!
    //     * \brief loopNeckMot轮询颈部关节
    //     */
    //    void loopNeckMot();
    //    /*!
    //     * \brief decodeAccData解析加速度计数据
    //     * \param ind加速度计序号
    //     * \param pdata指向CAN总线报文数据域，最大长度8
    //     */
    //    void decodeAccData(uint8_t ind,uint8_t *pdata);
    //    /*!
    //     * \brief decodeMotData解析颈部关节数据
    //     * \param ind关节编号
    //     * \param pdata指向CAN总线报文数据域，最大长度8
    //     */
    //    void decodeMotData(uint8_t ind,uint8_t *pdata);
    //    /*!
    //     * \brief transmitMotData发送颈部关节数据
    //     */
    //    void transmitMotData();
    /*!
     * \brief decodeMotData解析关节数据
     * \param ind关节编号
     * \param pdata指向CAN总线报文数据域，最大长度8
     */
    void decodeMotData(uint8_t ind,uint8_t *pdata);
    /*!
     * \brief decodeMotData解析关节数据
     * \param ind关节编号
     * \param pdata指向CAN总线报文数据域，最大长度8
     */
    void codeMotData(uint8_t ind,uint8_t *pdata);




signals:

};

#endif // USBCANDEVS_H
