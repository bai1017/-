#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define bai 1017
int main()//ָ������
{
	int a = 10;
	int b=20;
	int c=30;
	/*int* a = &a;
	int* b = &b;
	int* c = &c;*/
	int* arr[3] = { &a,&b,&c };//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}

//int main()//����ָ��
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//��ʱ��ppa���Ƕ���ָ��
//	int*** pppa = &ppa;//����ָ��
//	return 0;
//}

//int main()//����ָ�룬��������ָ��
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ========== %p\n", p + i, &arr[i]);
//	}*/
//	/*printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr[1]);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);*/
//	return 0;
//}

//int main()//ָ��Ĺ�ϵ���㣬�Ƚϴ�С
//{
//	float valus[bai];
//	float* vp;
//	/*for (vp = &valus[bai]; vp > &valus[0];)
//	{
//		*--vp=0;
//	}*/
//	for (vp = &valus[bai-1]; vp >= &valus[0];vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//int main()//ָ���ȥָ�룬�õ�ָ���Ԫ����
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6,  7, 8, 9, 10 };
//	char ch[] = { 0 };
//	printf( "%d", &arr[9] - &arr[0]);//ͬһ���˿ռ���ܱȽ�
//	printf("%d", &arr[9] - &ch[0]);//����������ֵ
//	return 0;
//}
//int ma_strlen(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen���ַ�������
//	//�ݹ飬��������ָ���ȥָ��
//	char arr[] = "bit";
//	int len = ma_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int main()//ָ�����������
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//arr��������Ԫ�ص�ַ
//	//for (i = 0;i < sz; i++)
//	//{
//	//	printf("%d", *p);
//	//	p = p + 1;//p++;
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *p);
//		p = p +2 ;//p+=2;
//	}
//	return 0;
//}