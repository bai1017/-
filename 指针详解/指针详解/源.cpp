#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//复习

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//			//Add(1, 2);
//	//printf("sum = %d\n", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	
//	return 0;
//}

//void*的使用，泛指针，可以指向任意类型

//void*
//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行+-整数的操作
//
//	return 0;
//}

//qsort快排库函数的详解

//库函数qsort的使用格式，按qsort函数的模式传参，
//void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//函数返回值，当第一个元素小于第二个返回值<0,当第一个元素等于第二个返回值=0,当第一个元素大于第二个返回值>0,

//整型冒泡排序

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//构架结构体

//函数指针回调的引用讲解实例，qsort快排使用

//struct Stu
//{
//	char name[20];
//	int age;
//};
////整型值的比较的函数
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 -*(int*)e2;//强制转换比较输出
//}
////整型值的比较
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////浮点值的比较的函数
//int cmp_float(const void*e1, const void*e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return ((int)(*(float*)e1 - *(float*)e2));//两次强制转换
//}
////浮点值的比较
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
////用年龄排序结构体的函数
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////用名字排序结构体的函数
//int cmp_stu_by_name(const void*e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
////结构体的比较
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现函数指针的两个参数是：待比较的两个元素的地址
//}
////若大于，就交换
//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////自定义元素类型的冒泡排序函数，提供一种比较方法
//void bubble_sort(void*base, int sz, int width, int (*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz - 1; i++)//每一趟比较的对数
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)//两个元素的比较
//		{
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)//强制转换成第一个元素，+宽度就是，跳一个宽度的字节
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//交换
//			}
//		}
//	}
//}
////自定义元素类型的比较（整型
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据，就应该知道如何比较待排序数组中的元素，下面的比较函数用哪个
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
////同test4，不过比较的是结构体
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
////比较主函数
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	test5();
////	bubble_sort(arr, sz);
////	bubble_sort(f, sz);
//	return 0;
//}

//

int main()
{
	//数组名是首元素的地址
	//1. sizeof(数组名) - 数组名表示整个数组
	//2. &数组名 - 数组名表示整个数组
	//一维数组
	int a[] = { 1, 2, 3, 4 };//4*4 = 16
	printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
	printf("%d\n", sizeof(a + 0));//4/8 - 数组名这里表示收元素的值，a+0 还是首元素地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
	printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
	printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址
	//字符数组
	const char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//strlen读的是地址
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
	printf("%d\n", sizeof(arr));//sizeof计算机的是数组大小，6*1 = 6字节
	printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
	printf("%d\n", sizeof(*arr));   //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
	printf("%d\n", sizeof(arr[1])); //1
	printf("%d\n", sizeof(&arr));   //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
	return 0;
}