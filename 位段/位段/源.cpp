#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//λ�� - ������λ
struct S
{
	int a : 2;//ָռ����bitλ
	int b : 5;
	int c : 10;//4���ֽڣ�������15��
	int d : 30;//4���ֽڣ�������2����47bit - 6���ֽ�*8 = 48bit
};
struct ss//λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//ö������
enum sex
{
	//ö�ٵĿ���ȡֵ-����
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
//����-������-������
union Un//�ڳ�Ա��ͬʱʹ��
{
	char c;//1
	int i; //4
};
//�жϴ�С�˵ĺ���
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
	printf("%d\n", sizeof(s));//8���ֽ�
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
	printf("%d\n", sizeof(u));//4,����ͬһ��ռ�
	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	printf("%p\n", &u);
	//�жϴ�С��
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