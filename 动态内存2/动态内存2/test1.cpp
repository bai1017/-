#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//�������ʹ��1�Ƿ������ڴ�

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//�ڴ�й©
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(str);//�в�δ����,��ֵ
//	strcpy(str, "hello world");
//	printf(str);
//}

//�޸�1

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��ַ
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//�޸�2

char* GetMemory(char* p)
{
	p = (char*)malloc(100);//�ڴ�й©
	return p;
}
void Test1(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
