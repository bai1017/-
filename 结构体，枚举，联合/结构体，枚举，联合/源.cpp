#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stddef.h>
struct Stu
{
	char name[20];//名字
	char tele[12];//电话
	char sex[10];//性别
	int age;
} s4,s5,s6;//声明一个结构体类型声明一个学生类型，是想过学生类型来创建学生变量（对象）描述学生：属性 - 名字 + 电话 + 性别 + 年龄
struct Stu s3;//全局变量
//匿名结构体变量
struct
{
	int a;
	char c;
}sa;
struct
{
	int a;
	char c;
}* psa;
//结构体的自引用
typedef struct Node
{
	double d;
	int data;//4
	struct Node* next;//4/8
}Node;//自应用不能匿名结构体变量，后缀是重命名
//结构体变量的初始化 
struct T
{
	char c;
	int a;
	double d;
	char arr[20];
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};
//结构体内存对齐
struct S1
{
	char c1;//1(234浪费
	int a;//5-8，偏移量4/8取4，
	char c2;//9(10,11,12浪费
};
struct S2
{
	char c1;//1
	char c2;//2(3,4浪费
	int a;//5-8，偏移量4/8取4,从4的倍数开始
};
struct S3
{
	double d;//1-8
	char c;//9
	int i;//(4/8取4，10，11，12，13位是4的倍数，13-16
};
struct S4
{
	char c;//1
	struct S3 s3;//8,2-8浪费，{c，9，10-16浪费，17-24}
	double d;//25-32
};
//设置默认对齐数位4
//#pragma pack(4)
//struct S6
//{
//	char c1;//1
//	double d;//8/4取4，2，3，4浪费，5-12
//};
//#pragma pack()//取消设置的默认对齐数,,,,,,,,设置默认对齐数位1
#pragma pack(1)//设置默认对齐数
struct S6
{
	char c1;//1
	double d;//1/8取1，2-9
};
#pragma pack()//取消设置的默认对齐数
//偏移量函数
struct S5
{
	char c;//0
	int i;//1-3浪费（4-7
	double d;//8-15
};
//结构体传参
struct s7
{
	int a;
	char c;
	double d;
};
void init(struct s7*pa)
{
	pa->a = 100;
	pa->c = 'w';
	pa->d = 3.14;
}
void print1(struct s7 tmp)
{
	printf("%d %c %lf", tmp.a, tmp.c, tmp.d);
}
void print2(const struct s7*pa)
{
	printf("%d %c %lf", pa->a,pa->c,pa->d);
}//1占内存，优先转地址函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的
//下降。
int main()
{
	//创建的结构体变量
	/*struct Stu s1;
	struct Stu s2;*/
    //psa = &sa;//编译器会把上面的两个声明当成完全不同的两个类型,所以是非法的。
	//自引用的调用
	struct Node n1;
	Node n2;
	//结构体的初始化
	struct T w = {'c', 100, 3.14, "hello bit"};
	struct S s = { 'c', {55.6, 30}, 100, 3.14, "hello bit" };
	printf("%c %d %lf %s\n", w.c, w.a, w.d, w.arr);
	printf("%lf\n", s.st.arr);
	//结构体内存对齐
	struct S1 s1 = {0};
	printf("%d\n", sizeof(s1));//12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8
	struct S3 s3;
	printf("%d\n", sizeof(s3));//16
	struct S4 s4;
	printf("%d\n", sizeof(s4));//32
	struct S6 sm;
	printf("%d\n", sizeof(sm));//12,初始值为4
	//offsetof();偏移量
	printf("%d\n", offsetof(struct S5, c));//0
	printf("%d\n", offsetof(struct S5, i));//4
	printf("%d\n", offsetof(struct S5, d));//8
	//结构体传参
	struct s7 spp = { 0 };
	init(&spp);
	print1(spp);
	print2(&spp);
	return 0;
}