#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
struct s
{
	char name[20];
	int age;
};
//�Խ�memcoy����
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
//�Խ�memmove����
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	char* ret = (char*)dest;
	char* ret1 = (char*)src;
	if (dest > src)//�Ӻ���ǰ
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
//memcpy�ڴ溯���������ص��Ŀ�����������Ԫ��

	struct s arr[] = {{"С��",20},{"С��",19}};
	struct s arr1[100] = { 0};
	/*memcpy(arr1, arr, sizeof(arr));
	struct s* p = arr1;
	for (p = arr1; p < &arr1[2]; p++)
	{
		printf("%s\n %d\n", (*p).name, (*p).age);
	}*///���ÿ⺯��������ӡ
	my_memcpy(arr1, arr, sizeof(arr));
	struct s* p = arr1;
	for (p = arr1; p < &arr1[2]; p++)
	{
		printf("%s\n %d\n", (*p).name, (*p).age);
	}
	
 //memmove�ڴ溯���������ص�����

	int arr2[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	//int j = 0;
	//for (j = 0; j < 20; j++)
	//{
	//	printf("%d ", arr2[j]);
	//}
	//printf("\n");
	//memmove(arr2+2, arr2+5,20);//20������Ҫ�����ĳ���
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

//memcmp�ڴ溯�����Ƚ�����Ԫ��

	int arr3[] = { 1,2,3,4,5,6,7,3 };
	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00.......
	int arr4[] = { 1,2,3,6,3 };
	//01 00 00 00 02 00 00 00 03 00 00 00 01 00 00......
	int ret = memcmp(arr3, arr4, 20);//20��ʾ�Ƚ�20���ֽڣ���5��int.
	printf("%d\n", ret);//0��ʾ��ȣ�1��ʾarr3��-1��ʾarr4��

//memset�ڴ溯�����ڴ����ú���

	char arr5[10] = "";
	memset(arr5, '#', 10);//��arr��10���ֽڵ�����ȫ�ĳ�#

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