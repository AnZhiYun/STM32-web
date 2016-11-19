#ifndef _AOI_IO_H
#define _AOI_IO_H


#define ServoMotorPowerON()  ShowStatus(6,0);                            //打开伺服电源
#define ServoMotorPowerOFF() ShowStatus(6,1);                            //关闭伺服电源

#define TranMotorRUN()  PWM_OUT(0,50)
#define TranMotorSTOP() PWM_OUT(0,0)

#define Camera_ON()                 //相机打开
#define Camera_OFF()                //相机关闭

#define PCB_Hold()                  //挡住PCB
#define PCB_Through()               //让PCB通过

#define PCB_Press()                 //压住PCB
#define PCB_Release()               //松开PCB 

#define PcbTranIdle                0
#define PcbTranSTART               1

typedef struct _PCB_TRAN
{
    unsigned char State;
    unsigned char Limit1;
    unsigned char Limit2;
    unsigned char Limit3;
  
}PCB_TRAN;

extern PCB_TRAN PcbTran;
#endif