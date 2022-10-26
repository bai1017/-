#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指向函数指针数组的指针

//int add(int x, int y) 
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针
//	int (*pr[4])(int, int) = { add };//函数指针的数组
//	int (*(*prr)[4])(int, int) = &pr;//prr是一个数组指针，指向的数组有四个元素，每个元素都是函数指针int(*)()
//	return 0;
//}

//回调函数是指一个通过函数指针调用的函数

//void print(const char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*P)(const char*))
//{
//	printf("bai\n");
//	P("mi");
//}
//int main()
//{
//	test(print);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int Muv(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//void menu()
//{
//	printf("1,加 2，减 3，乘 4，除 0，退出\n");
//}
//void clca(int(*pf)(int,int))
//{ 
//	int x = 0;
//	int y = 0;
//	printf("请输入");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d\n", &input);
//		switch (input)
//		{
//		case 1:
//			clca(Add);
//			break;
//		case 2:
//			clca(Sub);
//			break;
//		case 3:
//			clca(Muv);
//			break;
//		case 4:
//			clca(Div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("重新输入");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//函数指针数组(转移表）

////计算器（函数指针数组的使用
////int Add(int x, int y)
////{
////	int z = 0;
////	z = x + y;
////	return z;
////}
////int Sub(int x, int y)
////{
////	int z = 0;
////	z = x - y;
////	return z;
////}
////int Muv(int x, int y)
////{
////	int z = 0;
////	z = x * y;
////	return z;
////}
////int Div(int x, int y)
////{
////	int z = 0;
////	z = x / y;
////	return z;
////}
////void menu()
////{
////	printf("1,加 2，减 3，乘 4，除 0，退出\n");
////}
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	int (*parr[5])(int, int) = { 0,Add,Sub,Muv,Div };
////	do
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d\n", &input);
////		if(input>=1 && input<=4)
////		{
////			printf("请输入");
////			scanf("%d %d", &x, &y);
////			int ret = parr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if(input==0)
////		{
////			printf("退出");
////		}
////		else
////		{
////			printf("重新输入");
////		}
////	} while (input);
////	return 0;
////}
////int main()
////{
////	int input = 0;
////	int x = 0;
////	int y = 0;
////	do
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d\n", &input);
////		printf("请输入");
////		switch (input)
////		{
////		case 1:
////			scanf("%d %d", &x, &y);
////			printf("%d\n",Add(x,y));
////			break;
////		case 2:
////			scanf("%d %d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			scanf("%d %d", &x, &y);
////			printf("%d\n", Muv(x, y));
////			break;
////		case 4:
////			scanf("%d %d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("退出");
////			break;
////		default:
////			printf("重新输入");
////			break;
////		}
////	} while (input);
////	return 0;
////}
//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
//// 写一个函数指针数组 pfArr，能够存放四个my_strcpy函数的地址
//int main()
//{
//	char* (*pf)(char*, const char*) = my_strcpy;
//	char* (*parr[4])(char*, const char*) = { my_strcpy,my_strcpy,my_strcpy,my_strcpy };
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int Muv(int x, int y)
//{
//	int z = 0;
//	z = x * y;
//	return z;
//}
//int Div(int x, int y)
//{
//	int z = 0;
//	z = x / y;
//	return z;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int (*pa)(int, int) = Add;//函数指针
//	int (*parr[4])(int, int) = {Add,Sub,Muv,Div};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](3,4));
//	}
//	return 0;
//}

//函数指针

//(*(void(*)())0)();//函数调用，void(*)()函数指针类型，把0强制转化成函数指针类型，0就是一个函数地址，再调用
//void(*signal(int,void(*)(int)))(int);//signal是一个函数，第一个参数是int，第二个参数是函数指针，返回类型是void（*）（int）一个函数指针
// 简化上句
// typedef void(* pfun_t )(int)//将函数指针类型重命名为pfun_t      typedef unsigned int uint//将unsigned int重命名为uint
// pfun_t signal(int,pfun_t);
//void print(const char*str) 
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(const char*) = print;//函数指针
//    (* p)("hollo");
//	return 0;
//}   
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&函数名 和 函数名 都是函数的地址
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	int (*pa)(int, int) = Add;//()表示函数内元素的类型
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", (pa)(2, 3));//当pa是函数指针时，pa就是add
//	return 0;
//}

//数组参数，指针参数

//void test(int** po)
//{
//	printf("%d\n", **po);
//}
//int main()//二级指针的传参
//{
//	int n = 10;
//	int* p = &n;
//	int** pi = &p;
//	test(pi);
//	test(&p);
//	int* arr[10];
//	test(arr);//指针数组可传
//	return 0;
//}
//void print(int *p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//void test(int *pi){}
//int main()//一级指针传参
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	test(arr);
//	test(p);
//	return 0;
//}
//void test(int arr[3][5]) {}
////void test(int arr[][5]){}行可以省略，列不行
//void test2(int (*arr)[5]) {}
////void test(int 
//int main()//二维数组传参
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test2(arr);
//	return 0;
//}
//void test(int arr[]) {}
////void test(int arr[10]{}
////void test(int *arr){}
//void test1(int *prr[20]) {}
////void test1(int **prr){}
//int main()//一维数组传参
//{
//	int arr[10] = { 0 };
//	int* prr[20] = { 0 };
//	test(arr);
//	test1(prr);
//	return 0;
//}

//数组指针，[]的优先级比（）高

//int arr[5];//整型数组，5个元素，每个元素是整型，、、、[]的优先级比（）高
// int *p[10];//指针数组，10个元素，每个元素是指针
// int(*p)[10];//数组指针，指向一个有10个元素的整型数组
// int (*p[10])[5];//指针数组，10个元素，每个元素都是数组指针，分别指向一个有5个元素的整型数组
//void print1(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++) {
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//			printf("%d ", *(*(p + i)+j));
//			printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);//*(p+i)==p[i]
//		}
//		printf("\n");
//	}
//}
//int main()//使用,多用于二维数组
//{
//	int arr[3][4] = { { 1,2,3,4 }, { 5, 6, 7, 8 } ,{ 9, 1, 1, 2} };//二维数组的首元素是第一行
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//	return 0;
//}
//int main()浅用
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(*p+i));
//
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d", (*p)[i]);
//
//	}*/
//	return 0;
//}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;//char*表示指针*pa指向的元素类型
//	return 0;
//}
//int main()
//{
//	int* p = NULL;//整形指针
//	char* p = NULL;//字符指针
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//数组指针
//	int(*p)[10] = &arr;//存放数组的指针
//	return 0;
//}

//指针数组

//int main()//指针数组的使用
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()//指针数组的介绍
//{
//	int a = 10;
//	int b = 20;
//	int c = 10;
//	int d = 20;
//	int* arr[4] = { &a,&b,&c,&d };//指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char arr1[5] = { 0 };//字符数组
//	int* prr[12];//指针数组
//	return 0;
//}
 
// 字符指针

//试题
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 =(char*) "abcdef";//
//	const char* p2 = (char*)"abcdef";//常量字符串，不能修改，在内存里只存了一份
//	if (arr1 == arr2)//arr1,arr2是地址所以不同
//	{
//		printf("相等\n");
//	}
//	else
//	{
//		printf("不等\n");
//	}
//	if (p1 == p2)//p1和p2指向的同一个地方的首地址
//	{
//		printf("相等\n");
//	}
//	else
//	{
//		printf("不等\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	printf("%s", ch);
//	printf("%s", p);
//	char arr[] = "abcdef";
//	char* pq = arr;
//	printf("%s", arr);
//	printf("%s", pq);
//	const char* pw =(char*) "abcdef";//常量字符串
//	printf(" % c\n", pw);
//	printf(" % s\n", pw);
//	return 0;
//}

//尾行