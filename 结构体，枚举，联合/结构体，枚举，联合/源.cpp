#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stddef.h>
struct Stu
{
	char name[20];//����
	char tele[12];//�绰
	char sex[10];//�Ա�
	int age;
} s4,s5,s6;//����һ���ṹ����������һ��ѧ�����ͣ������ѧ������������ѧ����������������ѧ�������� - ���� + �绰 + �Ա� + ����
struct Stu s3;//ȫ�ֱ���
//�����ṹ�����
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
//�ṹ���������
typedef struct Node
{
	double d;
	int data;//4
	struct Node* next;//4/8
}Node;//��Ӧ�ò��������ṹ���������׺��������
//�ṹ������ĳ�ʼ�� 
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
//�ṹ���ڴ����
struct S1
{
	char c1;//1(234�˷�
	int a;//5-8��ƫ����4/8ȡ4��
	char c2;//9(10,11,12�˷�
};
struct S2
{
	char c1;//1
	char c2;//2(3,4�˷�
	int a;//5-8��ƫ����4/8ȡ4,��4�ı�����ʼ
};
struct S3
{
	double d;//1-8
	char c;//9
	int i;//(4/8ȡ4��10��11��12��13λ��4�ı�����13-16
};
struct S4
{
	char c;//1
	struct S3 s3;//8,2-8�˷ѣ�{c��9��10-16�˷ѣ�17-24}
	double d;//25-32
};
//����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S6
//{
//	char c1;//1
//	double d;//8/4ȡ4��2��3��4�˷ѣ�5-12
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����,,,,,,,,����Ĭ�϶�����λ1
#pragma pack(1)//����Ĭ�϶�����
struct S6
{
	char c1;//1
	double d;//1/8ȡ1��2-9
};
#pragma pack()//ȡ�����õ�Ĭ�϶�����
//ƫ��������
struct S5
{
	char c;//0
	int i;//1-3�˷ѣ�4-7
	double d;//8-15
};
//�ṹ�崫��
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
}//1ռ�ڴ棬����ת��ַ�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ�
//�½���
int main()
{
	//�����Ľṹ�����
	/*struct Stu s1;
	struct Stu s2;*/
    //psa = &sa;//����������������������������ȫ��ͬ����������,�����ǷǷ��ġ�
	//�����õĵ���
	struct Node n1;
	Node n2;
	//�ṹ��ĳ�ʼ��
	struct T w = {'c', 100, 3.14, "hello bit"};
	struct S s = { 'c', {55.6, 30}, 100, 3.14, "hello bit" };
	printf("%c %d %lf %s\n", w.c, w.a, w.d, w.arr);
	printf("%lf\n", s.st.arr);
	//�ṹ���ڴ����
	struct S1 s1 = {0};
	printf("%d\n", sizeof(s1));//12
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8
	struct S3 s3;
	printf("%d\n", sizeof(s3));//16
	struct S4 s4;
	printf("%d\n", sizeof(s4));//32
	struct S6 sm;
	printf("%d\n", sizeof(sm));//12,��ʼֵΪ4
	//offsetof();ƫ����
	printf("%d\n", offsetof(struct S5, c));//0
	printf("%d\n", offsetof(struct S5, i));//4
	printf("%d\n", offsetof(struct S5, d));//8
	//�ṹ�崫��
	struct s7 spp = { 0 };
	init(&spp);
	print1(spp);
	print2(&spp);
	return 0;
}