#include "socketcan.h"

SocketCAN::SocketCAN()
{

}
/**
  * @brief  Linux socket can通信初始化
  * @param  fd：CAN通信文件描述符
  * @retval 成功返回0，失败返回-1
  */
int SocketCAN::can_init_for_linux(int* fd)
{
    //0、设置can通信波特率
    system("sudo ip link set can0 down");
    // //波特率设置为1000Kbps
    system("sudo ip link set can0 type can bitrate 1000000");
    // //设置为队列长度为500字节
    system("sudo ifconfig can0 txqueuelen 1000");
    system("sudo ip link set can0 up");
    system("ip link show can0");
    int ret = 0;
    //1、创建socket can套接字
    *fd = socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if(*fd == -1)
    {
        perror("create socket can failed");
        return -1;
    }

    //2、套接子绑定到can0端口
    struct sockaddr_can addr;
    struct ifreq ifr;
    strcpy(ifr.ifr_name, "can0");
    ioctl(*fd, SIOCGIFINDEX, &ifr);
    memset(&addr, 0, sizeof(addr));
    addr.can_family = AF_CAN;
    addr.can_ifindex = ifr.ifr_ifindex;
    ret = bind(*fd, (struct sockaddr *)&addr, sizeof(addr));
    if(ret < 0)
    {
        perror("bind can0 error");
        return -1;
    }

    //4、设置CAN过滤规则
    #if 0
    struct can_filter recv_filter;
    recv_filter.can_id = 0x201;
    recv_filter.can_mask = CAN_SFF_MASK;
    setsockopt(fd, SOL_CAN_RAW, CAN_RAW_FILTER, &recv_filter, sizeof(recv_filter));
    #endif

    //5、设置read、write为非堵塞方式
    int flags;
    flags = fcntl(*fd, F_GETFL);
    flags |= O_NONBLOCK;
    fcntl(*fd, F_SETFL, flags);

    return 0;
}

/**
  * @brief  关闭CAN通信文件描述符
  * @param  fd：CAN通信文件描述符
  * @retval void
  */
void SocketCAN::can_close(int& fd)
{
    close(fd);
}

/**
  * @brief  CAN发送数据
  * @param  fd：CAN通信文件描述符
  * @param  can_id：can设备id
  * @param  data：需要发送的数据（一次最大8字节）
  * @param  data_len：需要发送数据长度(Byte)
  * @retval 成功返回0，失败返回-1
  */
int SocketCAN::can_write_data(int& fd, unsigned int can_id, unsigned char data[8],unsigned int data_len)
{
    int ret = 0;
    _CanRxMsg msg;
    struct can_frame send_data;
    if(fd == -1)
    {
        // perror("can write data failed!");
        return -1;
    }
    send_data.can_dlc = data_len;
    send_data.can_id = can_id;
    memcpy(&send_data.data[0], data, data_len);
    ret = write(fd, &send_data, sizeof(struct can_frame));
    if(ret == -1)
    {
        // perror("can write data failed!");
        return -1;
    }else{
        // printf("ID=%03X, DLC=%d, data=%02X %02X %02X %02X %02X %02X %02X %02X \n",  \
        // send_data.can_id, send_data.can_dlc,  \
        // send_data.data[0],\
        // send_data.data[1],\
        // send_data.data[2],\
        // send_data.data[3],\
        // send_data.data[4],\
        // send_data.data[5],\
        // send_data.data[6],\
        // send_data.data[7] );
    }

    return 0;
}

/**
  * @brief  CAN发送数据
  * @param  fd：CAN通信文件描述符
  * @param  can_id：can设备id
  * @param  data：存储CAN接收的8字节数据
  * @retval 成功返回0，失败返回-1
  */
int SocketCAN::can_read_data(int& fd, unsigned int& can_id, unsigned char data[8])
{
    if(fd == -1)
    {
        // perror("can read data failed!");
        return -1;
    }
    int ret = 0;
    struct can_frame recv_data;
    recv_data.can_dlc = 8;

    ret = read(fd, &recv_data,sizeof(struct can_frame));
    if(ret == -1)
    {
        // perror("can read data failed!");
        return -1;
    }else{
        memcpy(data, &recv_data.data[0], recv_data.can_dlc);
        // if(recv_data.can_id != can_id)
        // {
        //     printf("recv other can id data\n");

        //     return -1;
        // }
        can_id = recv_data.can_id;
        // printf("ID=%03X, DLC=%d, data=%02X %02X %02X %02X %02X %02X %02X %02X \n",  \
        //     recv_data.can_id, recv_data.can_dlc,  \
        //     recv_data.data[0],\
        //     recv_data.data[1],\
        //     recv_data.data[2],\
        //     recv_data.data[3],\
        //     recv_data.data[4],\
        //     recv_data.data[5],\
        //     recv_data.data[6],\
        //     recv_data.data[7] );
    }

    return 0;
}

/**
  * @brief  can run
  * @param  NONE
  * @retval 成功返回0，失败返回-1
  */
// int SocketCAN::can_run()
// {
//     int fdcan;
//     uint id=0x01;
//     int ret = 0;
//     ret = can_init_for_linux(&fdcan);
//     if(ret == -1)
//     {
//         perror("can init failed!\n");
//         return -1;
//     }
//     unsigned char data[8] = {0};
//     while (1)
//     {
//         sleep(2);
//         can_read_data(fdcan, id, data);
//     }

//     printf("hello world!\n");
//     return 0;
// }
