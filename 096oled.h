#ifndef __096OLED_H
#define __096OLED_H

#define uchar 		unsigned char
#define uint		unsigned int
#define ulong		unsigned long

#define NUM_TO_CHAR				0x30			//�������Ӧ�ַ���ASCII���ֵ

#define OLED_CMD 	0	//д����
#define OLED_DATA 	1	//д����

/*SSD1306 ���������*/
#define SET_CONTRAST_CONTROL		0x81		//�Աȶ��������ȡֵ��Χ1-255����λֵ��0x7F
#define SET_DISPLAY_ON				0xAF		//����ʾ����
#define SET_DISPLAY_OFF				0xAE		//����ʾ����
#define ENTIRE_DISPLAY_ON_A4		0xA4		//ȫ����ʾ�ر�
#define ENTIRE_DISPLAY_ON_A5		0xA5		//ȫ����ʾ����
#define NORMAL_DISPLAY				0xA6		//��GDDRAMֵΪ0��Ϩ�����أ���GDDRAMֵΪ1����������
#define INVERSE_DISPLAY				0xA7		//��GDDRAMֵΪ0���������أ���GDDRAMֵΪ1��Ϩ������

/*SSD1306 ������ʾ�����*/
#define HORIZONTAL_SCROLL_SETUP_RIGHT	0x26	//����ˮƽ�ƶ�
#define HORIZONTAL_SCROLL_SETUP_LEFT	0x27	//����ˮƽ�ƶ�
#define HORIZONTAL_SCROLL_SETUP_AE		0x00	//����ˮƽ�ƶ�ʱ����Ҫ�������ֽ�
#define HORIZONTAL_SCROLL_SETUP_F		0xFF	//����ˮƽ�ƶ�ʱ����Ҫ�������ֽ�
#define ACTIVATE_SCROLL					0x2F	//����������ʾ����	
#define DEACTIVATE_SCROLL				0x2E	//�رչ�����ʾ����
#define SET_VERTICAL_SCROLL_AREA		0xA3	//���ô�ֱ������Χ����	
#define HV_SCROLL_SRTEP_RIGHT			0x29	//����ˮƽ�ƶ�
#define HV_SCROLL_SRTEP_LEFT			0x2A	//����ˮƽ�ƶ�

/*SSD1306 ��ַ���������*/
#define SET_MEMORY_ADDR_MODE			0x20	//���õ�ַģʽ��0x00,�е�ַģʽ��0x01,�е�ַģʽ��0x10��ҳ��ַģʽ

/*SSD1306 Ӳ�����������*/
#define SET_SEGMENT_REMAP_A0			0xA0	//�е�ַ0ӳ�䵽SEG0
#define SET_SEGMENT_REMAP_A1			0xA1	//�е�ַ0ӳ�䵽SEG127
#define SET_MULTIPLEX_RATIO				0xA8	//��������·��
#define SET_COM_SCAN_DIRECTION_C0		0xC0	//ɨ�跽���COM0-->COM[N-1]
#define SET_COM_SCAN_DIRECTION_C8		0xC8	//ɨ�跽���COM[N-1]-->COM0
#define SET_DISPLAY_OFFSET				0xD3	//��������ʾƫ��
#define SET_COM_PINS_CONFIG				0xDA	//����COMӲ��������������

/*SSD1306 ��ʾʱ�Ӻ�������������*/
#define SET_DISPLAY_CLOCK				0xD5	//����ʱ�ӷ�Ƶ���ӡ���Ƶ��
#define SET_PRECHARGE_PERIOD			0xD9	//����Ԥ�������
#define SET_VCOMH_DESELECT_L			0xDB	//����VCOMH��Դ����
#define CHARGE_PUMP_SET					0x8D	//��ɱ�����

/*��ʾ�ַ����Ͷ���*/
#define TYPE_12X06						0x01	//��ʾ12*06�ַ�
#define TYPE_16X08						0x02	//��ʾ16*08�ַ�
#define TYPE_16X16						0x03	//��ʾ16*16�ַ�

void Delay1000ms();
void Delay4000ms();
void Delay200ms();
void OledWriteByte(uchar wbyte,uchar cmd);
void OledClearn(void);
void OledInit(void);
void OledFullDisp(void);
void DisplayFont_16X16(uchar x,uchar y,uint len,uchar *dispdata);
void OledHorizontalDisplay(uchar direction,uchar startpage,uchar endpage,uchar interval);
void DisplayChar_12X06(uchar x,uchar y,uchar *dispdata);
void DisplayChar_16X08(uchar x,uchar y,uchar *dispdata);




#endif // __096OLED_H