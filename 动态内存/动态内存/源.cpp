#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
void use_malloc(int m)
{
	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)malloc(m * sizeof(int));//���붯̬�ռ�
	if (p == NULL)
	{
		//û���ڴ��ˣ�������󣬴�ӡ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		for (int i = 0; i < m; i++)
		{
			*(p + i) = i;
			printf("%d  ", *(p + i));
		}
	}
	//����̬�ռ䲻��ʹ�ã���Ҫ�ͷ�
	free(p);//p���ڴ��ͷ��ˣ�p����ָ��ԭ��ַ����Σ��
	p = NULL;
}
void use_calloc(int n)
{
	int* p = (int*)calloc(n, sizeof(int));
	if (p == NULL)
	{
		//û���ڴ��ˣ�������󣬴�ӡ
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
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
	int* p = (int*)malloc(m * sizeof(int));//���붯̬�ռ�
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
	//��ԭ������������������㣬��Ҫ���ٸ���Ŀռ�ʱ��ʹ��realloc�����޸Ķ�̬�ڴ�ĺ���
	int * pi= (int*)realloc(p, q);
	if (pi == NULL)
	{
		//û���ڴ��ˣ�������󣬴�ӡ
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
