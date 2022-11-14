#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//位段 - 二进制位
struct S
{
	int a : 2;//指占两个bit位
	int b : 5;
	int c : 10;//4个字节，丢掉了15个
	int d : 30;//4个字节，丢掉了2个，47bit - 6个字节*8 = 48bit
};
struct ss//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//枚举类型
enum sex
{
	//枚举的可能取值-常量
	man,
	kun=10,
	woman
};
enum Color
{
	RED,//0
	GREEN,//1
	BLUE//2
	//#define RED 0
    //#define GREEN 1
    //#define BLUE 2
};
//联合-联合体-共用体
union Un//内成员不同时使用
{
	char c;//1
	int i; //4
};
//判断大小端的函数
int qqq()
{
	union
	{
		char c;
		int a;
	}u;
	u.a = 1;
	return u.c;
}
int main()
{
	struct S s;
	struct ss sa = { 0 };
	union Un u;
	printf("%d\n", sizeof(s));//8个字节
	sa.a = 10;
	sa.b = 20;
	sa.c = 3;
	sa.d = 4;
	printf("%d\n", sizeof(ss));
	enum sex x = man;
    enum Color c = BLUE;//int
    int color = RED;
	printf("%d\n", sizeof(man));
    printf("%d %d %d\n", RED, GREEN, BLUE);
    printf("%d %d %d\n", man,woman,kun);
	printf("%d\n", sizeof(u));//4,共用同一块空间
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	printf("%p\n", &u);
	//判断大小端
	int ret = qqq();
	if (1 == ret)
	{
		printf("xiaoduan");
	}
	else
	{
		printf("daduan");
	}
	return 0;
}