#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//经典4非法访问内存
void Test4(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//释放后，并不会把指针置空
	//修改
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
	else
	{
		printf("已释放");
	}
	//修改
}