#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ����ָ�������ָ��

//int add(int x, int y) 
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//����ָ��
//	int (*pr[4])(int, int) = { add };//����ָ�������
//	int (*(*prr)[4])(int, int) = &pr;//prr��һ������ָ�룬ָ����������ĸ�Ԫ�أ�ÿ��Ԫ�ض��Ǻ���ָ��int(*)()
//	return 0;
//}

//�ص�������ָһ��ͨ������ָ����õĺ���

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
//	printf("1,�� 2���� 3���� 4���� 0���˳�\n");
//}
//void clca(int(*pf)(int,int))
//{ 
//	int x = 0;
//	int y = 0;
//	printf("������");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
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
//			printf("�˳�");
//			break;
//		default:
//			printf("��������");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//����ָ������(ת�Ʊ�

////������������ָ�������ʹ��
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
////	printf("1,�� 2���� 3���� 4���� 0���˳�\n");
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
////		printf("��ѡ��>");
////		scanf("%d\n", &input);
////		if(input>=1 && input<=4)
////		{
////			printf("������");
////			scanf("%d %d", &x, &y);
////			int ret = parr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if(input==0)
////		{
////			printf("�˳�");
////		}
////		else
////		{
////			printf("��������");
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
////		printf("��ѡ��>");
////		scanf("%d\n", &input);
////		printf("������");
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
////			printf("�˳�");
////			break;
////		default:
////			printf("��������");
////			break;
////		}
////	} while (input);
////	return 0;
////}
//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
//// дһ������ָ������ pfArr���ܹ�����ĸ�my_strcpy�����ĵ�ַ
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
//	int* arr[5];//ָ������
//	int (*pa)(int, int) = Add;//����ָ��
//	int (*parr[4])(int, int) = {Add,Sub,Muv,Div};//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](3,4));
//	}
//	return 0;
//}

//����ָ��

//(*(void(*)())0)();//�������ã�void(*)()����ָ�����ͣ���0ǿ��ת���ɺ���ָ�����ͣ�0����һ��������ַ���ٵ���
//void(*signal(int,void(*)(int)))(int);//signal��һ����������һ��������int���ڶ��������Ǻ���ָ�룬����������void��*����int��һ������ָ��
// ���Ͼ�
// typedef void(* pfun_t )(int)//������ָ������������Ϊpfun_t      typedef unsigned int uint//��unsigned int������Ϊuint
// pfun_t signal(int,pfun_t);
//void print(const char*str) 
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(const char*) = print;//����ָ��
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
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	int (*pa)(int, int) = Add;//()��ʾ������Ԫ�ص�����
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", (pa)(2, 3));//��pa�Ǻ���ָ��ʱ��pa����add
//	return 0;
//}

//���������ָ�����

//void test(int** po)
//{
//	printf("%d\n", **po);
//}
//int main()//����ָ��Ĵ���
//{
//	int n = 10;
//	int* p = &n;
//	int** pi = &p;
//	test(pi);
//	test(&p);
//	int* arr[10];
//	test(arr);//ָ������ɴ�
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
//int main()//һ��ָ�봫��
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
////void test(int arr[][5]){}�п���ʡ�ԣ��в���
//void test2(int (*arr)[5]) {}
////void test(int 
//int main()//��ά���鴫��
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
//int main()//һά���鴫��
//{
//	int arr[10] = { 0 };
//	int* prr[20] = { 0 };
//	test(arr);
//	test1(prr);
//	return 0;
//}

//����ָ�룬[]�����ȼ��ȣ�����

//int arr[5];//�������飬5��Ԫ�أ�ÿ��Ԫ�������ͣ�������[]�����ȼ��ȣ�����
// int *p[10];//ָ�����飬10��Ԫ�أ�ÿ��Ԫ����ָ��
// int(*p)[10];//����ָ�룬ָ��һ����10��Ԫ�ص���������
// int (*p[10])[5];//ָ�����飬10��Ԫ�أ�ÿ��Ԫ�ض�������ָ�룬�ֱ�ָ��һ����5��Ԫ�ص���������
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
//int main()//ʹ��,�����ڶ�ά����
//{
//	int arr[3][4] = { { 1,2,3,4 }, { 5, 6, 7, 8 } ,{ 9, 1, 1, 2} };//��ά�������Ԫ���ǵ�һ��
//	print1(arr, 3, 4);
//	print2(arr, 3, 4);
//	return 0;
//}
//int main()ǳ��
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
//	char* (*pa)[5] = &arr;//char*��ʾָ��*paָ���Ԫ������
//	return 0;
//}
//int main()
//{
//	int* p = NULL;//����ָ��
//	char* p = NULL;//�ַ�ָ��
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//����ָ��
//	int(*p)[10] = &arr;//��������ָ��
//	return 0;
//}

//ָ������

//int main()//ָ�������ʹ��
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
//int main()//ָ������Ľ���
//{
//	int a = 10;
//	int b = 20;
//	int c = 10;
//	int d = 20;
//	int* arr[4] = { &a,&b,&c,&d };//ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char arr1[5] = { 0 };//�ַ�����
//	int* prr[12];//ָ������
//	return 0;
//}
 
// �ַ�ָ��

//����
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 =(char*) "abcdef";//
//	const char* p2 = (char*)"abcdef";//�����ַ����������޸ģ����ڴ���ֻ����һ��
//	if (arr1 == arr2)//arr1,arr2�ǵ�ַ���Բ�ͬ
//	{
//		printf("���\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	if (p1 == p2)//p1��p2ָ���ͬһ���ط����׵�ַ
//	{
//		printf("���\n");
//	}
//	else
//	{
//		printf("����\n");
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
//	const char* pw =(char*) "abcdef";//�����ַ���
//	printf(" % c\n", pw);
//	printf(" % s\n", pw);
//	return 0;
//}

//β��