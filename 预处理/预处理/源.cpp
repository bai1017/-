#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
//预定义符号

//int main()
//{
//	//printf("%s\n", __file__);
//	//printf("%d\n", __line__);
//	//printf("%s\n", __date__);
//	//printf("%s\n", __time__);
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//		//printf("%d\n", __STDC__);//如果编译器遵循ANSI C，其值为1，否则未定义
//		//95% - VS    未定义
//        //99% - gcc
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//预处理指令#。。

//#define定义

//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	do_forever//for (;;);//死循环
//	return 0;//不加；return0；成为死循环内容，跳出循环，成空语句；
//	reg int a;
//	register int a;
//	int max = MAX;
//	int max = 100;
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	return 0;
//}

//define宏定义运算

//#define SQUARE(X) (X)*(X)
//int main()
//{
//	//int ret = SQUARE(5);
//	////int ret = 5* 5;
//	//printf("ret = %d\n", ret);
//	int ret = SQUARE(5 + 1);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("MAX = %d\n", MAX);
//	//int ret = 10* ((a)+(a));
//	printf("%d\n", ret);
//	return 0;
//}

//#和##

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("the value of a is %d\n", a);
//	print(a);
//	print(b);//函数解决不了打印出来的a固定的问题
//	return 0;
//}

//#的使用，将宏的参数传到字符串中

//#define PRINT(X) printf("the value of " #X " is %d\n", X)
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");//会自动连接。
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the calue of ""b"" is %d\n", b);
//	return 0;
//}

//##的使用，将x和y两个符号链接起来

//#define CAT(X, Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);//错误使用
//	return 0;
//}

//带有副作用的宏参数

//#define MAX(X, Y)     ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//	return 0;
//}

//函数与宏的区别

////函数
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
////宏
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数在调用的时候
//	//会有函数调用和返回的开销
//	float max = Max2(c, d);
//	printf("max = %d\n", max);
//	//预处理阶段就完成了替换
//	//没有函数的调用和返回的开销
//	max = MAX(c, d);
//	max = ((c) > (d) ? (c) : (d));
//	printf("max = %d\n", max);
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//条件编译

//单分支条件编译

//#define DEBUG
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG//如果定义了，则编译
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1+1//为真，编译，为假，不编译
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//多个分支的条件编译

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#if defined(DEBUG)
//	printf("hehe\n");
//#endif
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//#if !defined(DEBUG)
//	printf("hehe\n");
//#endif
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}

//自编写寻找结构体成员长度函数的代码

//#include <stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)
//int main()
//{
//	struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1) );
//	printf("%d\n", OFFSETOF(struct S, a) );
//	printf("%d\n", OFFSETOF(struct S, c2) );
//	return 0;
//}

//

int main()
{
	union
	{
		short k;
		char i[2];
	}*s, a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}