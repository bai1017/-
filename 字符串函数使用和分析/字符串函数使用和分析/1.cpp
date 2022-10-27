#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<errno.h>
//�Ա�strlen������ָ��
int my_strlen(const char* str)
{
	int i = 0;
	assert(str != NULL);
	while (str)
	{
		str++;
		i++;
	}
	return i;
}
//�Ա�strlen�������ݹ�
int my_strlen1(const char* str)
{
	assert(str != NULL);
	if (str != 0)
	{
		return 1 + my_strlen1(str + 1);
	}
}
//�Ա�strcpy����
char* my_strcpy(char* str,const char* str1)
{
	assert(str != NULL);
	assert(str1 != NULL);
	char* p = str;
	while (*str++ = *str1++) { ; }
	//while (str1)
	//{
	//	*str++ = *str1++;
	///*	*str = *str1;
	//	str++;
	//	str1++;*/
	//}
	return p;//����Ŀ�Ŀռ����ʼ��ַ
}
//�Ա�strcat����
char* my_strcat(char* aa1,const char* aa2)
{
	char* p = aa1;
	assert(aa1 != NULL);
	assert(aa2);
	while (*aa1 != '\0')
	{
		aa1++;
	}
	while (*aa1++ = *aa2++) { ; }
	return p;
}
//�Ա�strcmp����
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\n')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//�Ա�strstr����
char* my_strstr(const char* str1,const char* str2)
{
	assert(str1 && str2);
	char* s1 = (char*)str1;
	char* s2 = (char*)str2;
	char* s3 = (char*)str1;
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*s3)
	{
		s1 = s3;
		s2 = (char*)str2;
		while((*s1 !='\0')&&(*s2 != '\0')&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return s3;
		}
		if (*s1 == '\0')
		{
			return NULL;
		}
		s3++;
	}
	return NULL;
}
int main()
{
	//strlen����:���ַ�������
	char arr[] = { 'a','b','c','e' };
	int len = strlen("abcdrf");//strlen���ݵ����޷����������Ϊ����ʱҲ���޷�����
	int lenn = my_strlen("abcdefg");//�Լ������strlen����
	int mmn = strlen(arr);//�õ��������ֵ
	printf("%d\n", len);
	printf("%d\n", lenn);
	//strcpy�������ַ�������
	char arr1[] = "abcdefg";//Ŀ���ַ����Ŀռ�һ��Ҫ��Ԫ�ַ������ұ���ɱ�
	char arr2[] = "wd";//������ԭ�ַ������뺬��\0��
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	strcpy(arr1, arr2);//��arr2���ַ�������arr1�����\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	my_strcpy(arr1, arr2);//��arr2���ַ�������arr1�����\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strcat�������ַ�����׷��
	char a1[30] = "xiaobai,\0wfwgrg";//Ŀ���ַ������㹻�󣬴�\n��ʼ׷���滻
	char a2[] = "i love you";//strcat(a1, a2);//��a2׷�ӵ�a1���棬//printf("%s\n", a1);
	my_strcat(a1, a2);
	printf("%s\n", a1);
    //strcmp�������ַ����ıȽ�
	const char* b1 = "adijvejfq";
	const char* b2 = "jhfjeqqq";
	int nnn = strcmp(b1, b2);//�Ƚ��ַ������������ַ��Ĵ�С������ȣ��Ƚ���һλ����b1>b2,����һ������0������b1<b2������С��0����
	int mmm = my_strcmp(b1, b2);
	printf("%d\n", mmm);
	if (nnn > 0)
	{
		printf("b1>b2\n");
	}
	else if (nnn == 0)
	{
		printf("b1=b2\n");
	}
	else if (nnn < 0)
	{
		printf("b1<b2\n");
	}
	//strstr�����������ַ���
	const char *q1 = "fehghrenbbbcyhmnt";
	const char* q2 = "bbc";//const char* qf = strstr(q1, q2);//��q1������q2�ĵ�ַ
	char* qf = my_strstr(q1, q2);
	if (qf == NULL)
	{
		printf("�ִ�������\n");
	}
	else
	{
		printf("%s\n", qf);
	}
	//strtok�������и��ַ���
	char arr[] = "22264585@qq.com";
	const char* p = "@ .";
	char arr1[1017] = { 0 };
	strcpy(arr1, arr);
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) 
	{
		printf("%s\n", ret);
	}
	char* ret = strtok(arr, p);//��pΪ�������и�arr������strtok��ı��ԭ�ַ�����Ԫ�أ���p�ڷֽڷ��Ϳգ��ʽ�ԭ�ַ���������ʹ�ÿ������ַ���
	printf("%s\n", ret);
	ret = strtok(NULL, p);//�и�ڶ���ʱ����һ�������Ϳգ�����дarr����Ϊstrtok�����
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	//strerror���������󱨸溯��
	char* mko = strerror(errno);//0,no error//1,peration not permitted//2,No such file or directory//errno��һ�������ȫ�ֱ�������c������ִ�к����Ĺ����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
	printf("%s\n", mko);
	FILE* pf= fopen("text.txt","r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open");
	}
	return 0;
}