#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//����ʹ�ô���2������ջ�ռ�ĵ�ַ�����⣩
char* GetMemory(void)
{
	//char p[] = "hello world";//�ֲ����飬��ȥ�Ѿ�����(ջ��
	//�޸�1
	static char p[] = "hello world";//��̬��
	return p; 
	//�޸�2,malloc,����
}
void Test2(void)
{
	char* str=NULL;
	str =GetMemory();//��ַ����str���������Ѿ�ɾ�����ʴ�ӡ�����ֵ
	printf(str);
}