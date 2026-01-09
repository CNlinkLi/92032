#ifndef SOCKETCAN_H
#define SOCKETCAN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

#include <linux/can.h>
#include <linux/if.h>
#include <linux/can/raw.h>
#define CAN_IND_NUM 1

class SocketCAN
{
public:
    SocketCAN();
    struct _CanTxMsg
    {
      unsigned int stdId;    /* CAN标准帧ID，占11bit，范围：0~0x7FF */
      unsigned int extId;    /* CAN扩展帧ID，占29bit，范围：0~0x1FFFFFFF */
      unsigned char ide;     /* CAN报文ID类型，CAN_ID_STD 或 CAN_ID_EXT */
      unsigned char rtr;     /* CAN报文类型，CAN_RTR_DATA 或 CAN_RTR_REMOTE */
      unsigned char dlc;     /* CAN报文数据长度， 范围：0~8  */
      unsigned char data[8]; /* CAN报文数据内容，每个字节范围：0~0xFF*/
    };

    struct _CanRxMsg
    {
      unsigned int stdId;    /* CAN标准帧ID，范围：0~0x7FF */
      unsigned int extId;    /* CAN扩展帧ID，范围：0~0x1FFFFFFF */
      unsigned char ide;     /* CAN报文ID类型，CAN_ID_STD 或 CAN_ID_EXT */
      unsigned char rtr;     /* CAN报文类型，CAN_RTR_DATA 或 CAN_RTR_REMOTE */
      unsigned char dlc;     /* CAN报文数据长度， 范围：0~8  */
      unsigned char data[8]; /* CAN报文数据内容，每个字节范围：0~0xFF*/
      unsigned char fmi;     /* 过滤模式，总共有14中，定义有宏，其值依次为0x1,0x2,0x4,0x8,0x10,0x20,0x40……,此处可以不考虑，忽略*/
    } ;

    _CanTxMsg txCanMsg;
    _CanRxMsg rxCanMsg;

    int fd=0;

    /**
      * @brief  Linux socket can通信初始化
      * @param  fd：CAN通信文件描述符
      * @retval 成功返回0，失败返回-1
      */
    int can_init_for_linux(int* fd);
    /**
      * @brief  关闭CAN通信文件描述符
      * @param  fd：CAN通信文件描述符
      * @retval void
      */
    void can_close(int& fd);
    /**
      * @brief  CAN发送数据
      * @param  fd：CAN通信文件描述符
      * @param  can_id：can设备id
      * @param  data：需要发送的数据（一次最大8字节）
      * @param  data_len：需要发送数据长度(Byte)
      * @retval 成功返回0，失败返回-1
      */
    int can_write_data(int& fd, unsigned int can_id,unsigned char data[8],unsigned int data_len);
    /**
      * @brief  CAN发送数据
      * @param  fd：CAN通信文件描述符
      * @param  can_id：can设备id
      * @param  data：存储CAN接收的8字节数据
      * @retval 成功返回0，失败返回-1
      */
    int can_read_data(int& fd, unsigned int& can_id, unsigned char data[8]);

    /**
      * @brief  can loop
      * @param  NONE
      * @retval 成功返回0，失败返回-1
      */
    int can_run();

};





#endif // SOCKETCAN_H
