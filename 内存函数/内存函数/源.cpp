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
//		ǰ->��
//	}
//	else
//	{
//		��->ǰ
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
//		ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		��->ǰ
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
//	arr1�е����ֿ�����arr2��
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	             1  2  1  2  3  4  5  8  9  10
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	my_memmove(arr3, arr3+2, 20);
//
//
//	my_memcpy����ʤ���ص�������
//	my_memcpy(arr3+2, arr3, 20);
//
//	memmove����ʤ���ڴ���ص�����
//	memmove(arr3+2, arr3, 20);
//	C���Ա�׼˵��memcpy�������Կ������ص��ľͿ�����
//	���·��֣�VS2013�����µ�memcpy���Դ����ص�����
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

//memset - �ڴ�����
//
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	//40 ���ֽ�
//	//01 01 01 01 01 01 01 01 01 01 00 00 00 00 00 ...
//
//	memset(arr, 1, 10);
//
//	return 0;
//}