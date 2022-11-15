#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
void use_malloc(int m)
{
	//想内存申请10个整型的空间
	int* p = (int*)malloc(m * sizeof(int));//申请动态空间
	if (p == NULL)
	{
		//没有内存了，申请错误，打印
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		for (int i = 0; i < m; i++)
		{
			*(p + i) = i;
			printf("%d  ", *(p + i));
		}
	}
	//当动态空间不再使用，需要释放
	free(p);//p后内存释放了，p依旧指向原地址，很危险
	p = NULL;
}
void use_calloc(int n)
{
	int* p = (int*)calloc(n, sizeof(int));
	if (p == NULL)
	{
		//没有内存了，申请错误，打印
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		for (int i = 0; i < n; i++)
		{
			printf("%d  ", *(p + i));
		}
	}
	free(p);
	p = NULL;
}
void use_realloc(int m,int q)
{
	int* p = (int*)malloc(m * sizeof(int));//申请动态空间
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			*(p + i) = i;
		}
	}
	//当原来的设计数不足以满足，需要开辟更大的空间时，使用realloc函数修改动态内存的函数
	int * pi= (int*)realloc(p, q);
	if (pi == NULL)
	{
		//没有内存了，申请错误，打印
		printf("%s\n", strerror(errno));
	}
	else
	{
		for (int i = 0; i < q; i++)
		{
			*(pi + i) = i;
			printf("%d  ", *(pi + i));
		}
	}
	free(pi);
	pi = NULL;
}
int main()
{
	int m = 0;
	scanf("%d\n ", &m);
	use_malloc(m);
	int n = 0;
	scanf("%d\n", &n);
	use_calloc(n);
	int q = 0;
	scanf("%d\n", &q);
	use_realloc(m, q);
	return 0;
}
