#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//经典3(非法访问内存
void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);//*p就是str
}
void Test3(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");//内存泄漏
	printf(str);
	//修改
	free(str);
	str = NULL;
}