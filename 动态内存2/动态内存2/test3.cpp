#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//����3(�Ƿ������ڴ�
void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);//*p����str
}
void Test3(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");//�ڴ�й©
	printf(str);
	//�޸�
	free(str);
	str = NULL;
}