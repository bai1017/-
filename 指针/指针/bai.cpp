#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define bai 1017
int main()//指针数组
{
	int a = 10;
	int b=20;
	int c=30;
	/*int* a = &a;
	int* b = &b;
	int* c = &c;*/
	int* arr[3] = { &a,&b,&c };//指针数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}

//int main()//二级指针
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//此时，ppa就是二级指针
//	int*** pppa = &ppa;//三级指针
//	return 0;
//}

//int main()//数组指针，本质上是指针
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

//int main()//指针的关系运算，比较大小
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

//int main()//指针减去指针，得到指针间元素数
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6,  7, 8, 9, 10 };
//	char ch[] = { 0 };
//	printf( "%d", &arr[9] - &arr[0]);//同一个人空间才能比较
//	printf("%d", &arr[9] - &ch[0]);//无意义的随机值
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
//	//strlen求字符串长度
//	//递归，计数器，指针减去指针
//	char arr[] = "bit";
//	int len = ma_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//int main()//指针的整数运算
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//arr是数组首元素地址
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