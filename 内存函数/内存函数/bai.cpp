#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
struct s
{
	char name[20];
	int age;
};
//自建memcoy函数
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	char* ret=(char*)dest;
	char* ret1 = (char*)src;
	while (num--)
	{
		*ret++ = *ret1++;
	}
	return ret;
 }
//自建memmove函数
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	char* ret = (char*)dest;
	char* ret1 = (char*)src;
	if (dest > src)//从后向前
	{
		while (num--)
		{
			char* ret = (char*)dest + num - 1;
			char* ret1 = (char*)src + num - 1;
			*ret-- = *ret1--;
		}
		return ret;
	}
	else
	{
		while (num--)
		{
			*ret++ = *ret1++;
		}
		return ret;
	}
}
int main()
{
//memcpy内存函数：处理不重叠的拷贝任意类型元素

	struct s arr[] = {{"小白",20},{"小宇",19}};
	struct s arr1[100] = { 0};
	/*memcpy(arr1, arr, sizeof(arr));
	struct s* p = arr1;
	for (p = arr1; p < &arr1[2]; p++)
	{
		printf("%s\n %d\n", (*p).name, (*p).age);
	}*///引用库函数拷贝打印
	my_memcpy(arr1, arr, sizeof(arr));
	struct s* p = arr1;
	for (p = arr1; p < &arr1[2]; p++)
	{
		printf("%s\n %d\n", (*p).name, (*p).age);
	}
	
 //memmove内存函数：处理重叠拷贝

	int arr2[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	//int j = 0;
	//for (j = 0; j < 20; j++)
	//{
	//	printf("%d ", arr2[j]);
	//}
	//printf("\n");
	//memmove(arr2+2, arr2+5,20);//20是你想要拷贝的长度
	//int i = 0;
	//for ( i = 0; i < 20; i++)
	//{
	//	printf("%d ", arr2[i]);
	//}
	//printf("\n");
	int j = 0;
	for (j = 0; j < 20; j++)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n");
	my_memmove(arr2 + 5, arr2 + 3, 20);
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

//memcmp内存函数：比较任意元素

	int arr3[] = { 1,2,3,4,5,6,7,3 };
	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00.......
	int arr4[] = { 1,2,3,6,3 };
	//01 00 00 00 02 00 00 00 03 00 00 00 01 00 00......
	int ret = memcmp(arr3, arr4, 20);//20表示比较20个字节，即5个int.
	printf("%d\n", ret);//0表示相等，1表示arr3大，-1表示arr4大

//memset内存函数：内存设置函数

	char arr5[10] = "";
	memset(arr5, '#', 10);//将arr内10个字节的内容全改成#

	return 0;
}

//text_momcpy

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int arr1[20] = { 0 };
//	my_memcpy(arr1, arr, sizeof(arr));
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	//char arr[10] = "anvqqnv";
//	//char arr1[20] = "0";
//	//memcpy(arr1, arr, sizeof(arr));
//	//printf("%s\n", arr1);
//	return 0;
//}