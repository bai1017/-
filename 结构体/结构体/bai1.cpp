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
//int main()//�ṹ�崫��
//{
//	bai s = { "С��",21,"14378782","Ů" };
//	print1(s);
//	printf("\n");
//	print2(&s);
//	//1�û���2�ã���1���洫�ݵ����βΣ��൱���ٴ�ӡ���˷��˿ռ�ͳ�������ʱ��
//	return 0;
//}

//struct bai//bai�ṹ���ǩ
//{
//	//��Ա����
//	char name[10];
//	int age;
//	char tele[12];
//	int wei;
//}s1,s2,s3; //ȫ�ֱ���
//struct bai//ǰ���typedef����������������Ϳ���ֱ��ʹ��bai�����ô�struct bai ��������
//{
//	//��Ա����
//	char name[10];
//	int age;
//	char tele[12];
//	int wi;
//}; //����
//struct b//
//{
//	//��Ա����
//	int a;
//	struct bai zi;
//	char t[12];
//	char* p;
//};
//int main()//�ṹ�������
//{
//	char wei[] = "woj";
//	struct b z = { 20,{"gfgc",2,"hrht",32},"hehe" ,wei};//�ֲ�����
//	printf("%s\n", z.zi.tele);
//	printf("%d\n", z.zi.age);
//	printf("%s\n", z.t);
//	struct bai yan;
//	return 0;
//}