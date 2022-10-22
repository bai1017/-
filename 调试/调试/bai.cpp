#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	for (int i = 0; i < 100; i++) 
	{
		printf("%d\n", i);
	}
	for (int j = 0; j < 100; j++)
	{
		printf("%d\n", 10-j);
	}
	return 0;
}
//f5,启动调试，和f9配合使用