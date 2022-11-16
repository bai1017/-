#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"
//经典使用错误2（返回栈空间的地址的问题）
char* GetMemory(void)
{
	//char p[] = "hello world";//局部数组，出去已经消除(栈区
	//修改1
	static char p[] = "hello world";//静态区
	return p; 
	//修改2,malloc,堆区
}
void Test2(void)
{
	char* str=NULL;
	str =GetMemory();//地址传给str后内数据已经删除，故打印的随机值
	printf(str);
}