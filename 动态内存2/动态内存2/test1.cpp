#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//经典错误使用1非法访问内存

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄漏
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(str);//行参未传递,传值
//	strcpy(str, "hello world");
//	printf(str);
//}

//修改1

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传址
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//修改2

char* GetMemory(char* p)
{
	p = (char*)malloc(100);//内存泄漏
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
