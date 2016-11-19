#ifndef _AOI_IO_H
#define _AOI_IO_H


#define ServoMotorPowerON()  ShowStatus(6,0);                            //���ŷ���Դ
#define ServoMotorPowerOFF() ShowStatus(6,1);                            //�ر��ŷ���Դ

#define TranMotorRUN()  PWM_OUT(0,50)
#define TranMotorSTOP() PWM_OUT(0,0)

#define Camera_ON()                 //�����
#define Camera_OFF()                //����ر�

#define PCB_Hold()                  //��סPCB
#define PCB_Through()               //��PCBͨ��

#define PCB_Press()                 //ѹסPCB
#define PCB_Release()               //�ɿ�PCB 

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