#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//����4�Ƿ������ڴ�
void Test4(void)
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//�ͷź󣬲������ָ���ÿ�
	//�޸�
	str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
	else
	{
		printf("���ͷ�");
	}
	//�޸�
}