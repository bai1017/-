#define _CRT_SECURE_NO_WARNINGS 1
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest<src || dest>(char*)src + count)
//	{
//		前->后
//	}
//	else
//	{
//		后->前
//	}
//	
//	return ret;
//}
//
//
//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	arr1中的数字拷贝到arr2中
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	             1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	my_memmove(arr3, arr3+2, 20);
//
//
//	my_memcpy不能胜任重叠拷贝的
//	my_memcpy(arr3+2, arr3, 20);
//
//	memmove可以胜任内存的重叠拷贝
//	memmove(arr3+2, arr3, 20);
//	C语言标准说：memcpy函数可以拷贝不重叠的就可以了
//	当下发现：VS2013环境下的memcpy可以处理重叠拷贝
//	memcpy(arr3+2, arr3, 20);
//
//
//	return 0;
//}


//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	//01 00 00 00 02 00 00 00 05 00 00 00 ...
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset - 内存设置
//
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40 个字节
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...
//
//	memset(arr, 1, 10);
//
//	return 0;
//}