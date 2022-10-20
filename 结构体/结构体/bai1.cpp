#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef struct bai
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}bai;
//void print1(bai tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void print2(bai* qs)
//{
//	printf("name: %s\n", qs->name);
//	printf("age: %d\n", qs->age);
//	printf("tele: %s\n", qs->tele);
//	printf("sex: %s\n", qs->sex);
//}
//int main()//结构体传参
//{
//	bai s = { "小白",21,"14378782","女" };
//	print1(s);
//	printf("\n");
//	print2(&s);
//	//1好还是2好？：1上面传递的是形参，相当于再打印，浪费了空间和程序运行时间
//	return 0;
//}

//struct bai//bai结构体标签
//{
//	//成员变量
//	char name[10];
//	int age;
//	char tele[12];
//	int wei;
//}s1,s2,s3; //全局变量
//struct bai//前面加typedef重命名，这样下面就可以直接使用bai，不用打struct bai 。。。。
//{
//	//成员变量
//	char name[10];
//	int age;
//	char tele[12];
//	int wi;
//}; //类型
//struct b//
//{
//	//成员变量
//	int a;
//	struct bai zi;
//	char t[12];
//	char* p;
//};
//int main()//结构体的声明
//{
//	char wei[] = "woj";
//	struct b z = { 20,{"gfgc",2,"hrht",32},"hehe" ,wei};//局部变量
//	printf("%s\n", z.zi.tele);
//	printf("%d\n", z.zi.age);
//	printf("%s\n", z.t);
//	struct bai yan;
//	return 0;
//}