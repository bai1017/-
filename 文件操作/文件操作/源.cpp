#define _CRT_SECURE_NO_WARNINGS 1
#include <errno.h>
#include <string.h>
#include<stdio.h>

//�ַ����롢�������

//int main()
//{
//	//���ļ�test.txt
//	//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	//����·����д��
//	//fopen("C:\\..\\..\\..\\..\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");//�򿪳ɹ�
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pf);//д�ļ�,�ַ�
//	fputc('z', pf);
//	fputc('t', pf);
//	printf("%c", fgetc(pf));//���ļ����ַ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, pf);//��ȡһ��
//	printf("%s\n", buf);//��ӡ��ʱ���л��У��Դ�
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//    //�Ӽ�������
//    //�������Ļ.
//    //����&��Ļ�����ⲿ�豸
//    //����-��׼�����豸- stdin
//    //��Ļ-��׼����豸- stdout
//    //��һ������Ĭ�ϴ򿪵��������豸
//    //stdin FILE*
//    //stdout FILE*
//    //stderr FILE*
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);//���̵���Ļ
//	return 0;
//}

//�ı��������������

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()//
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	//char buf[1024] = {0};
//	////fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	////fputs(buf, stdout);//�������׼�����
//
//	//gets(buf);
//	//puts(buf);
//
//	return 0;
//}

//��ʽ�������������

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f, "bit" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//��ʽ������ʽд�ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//��ʽ������������
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}
 
 //�����������sprintf��sscanf,����ʽ��������ת�Ƶ��ַ��������ʱ�����ַ����ж�����ʽ��������
 
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = { 100, 3.14f, "abcdef" };
//	struct S tmp = {0};
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//�����������������

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "����", 20, 55.6 };
//	FILE* pf = fopen("test1.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 
// 
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	//struct S s = { "����", 20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
// 
// 
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 2, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�޸��ļ�ָ��ָ����

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);//
//	//printf("%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ���������//perror��������ʹ��

//int main()
//{
//	//EOF
//	//feof();//EOF - end of file - �ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//	//perror����ӡ��������ַ�����Ȼ��Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("open file test2.txt");
		return 0;
	}
	//���ļ�
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;

	return 0;
}