#define _CRT_SECURE_NO_WARNINGS 1
#include <errno.h>
#include <string.h>
#include<stdio.h>

//字符输入、输出函数

//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("../../test.txt", "r")
//	//fopen("test.txt", "r");
//	//绝对路径的写法
//	//fopen("C:\\..\\..\\..\\..\\test.txt", "r");
//	FILE* pf = fopen("test.txt", "w");//打开成功
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pf);//写文件,字符
//	fputc('z', pf);
//	fputc('t', pf);
//	printf("%c", fgetc(pf));//读文件，字符
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, pf);//读取一行
//	printf("%s\n", buf);//打印的时候有换行，自带
//	fclose(pf);//关闭文件
//	pf = NULL;
//    //从键盘输入
//    //输出到屏幕.
//    //键盘&屏幕都是外部设备
//    //键盘-标准输入设备- stdin
//    //屏幕-标准输出设备- stdout
//    //是一个程序默认打开的两个流设备
//    //stdin FILE*
//    //stdout FILE*
//    //stderr FILE*
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);//键盘到屏幕
//	return 0;
//}

//文本行输入输出函数

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
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
//	//读文件
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
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()//
//{
//	//从键盘读取一行文本信息
//	//char buf[1024] = {0};
//	////fgets(buf, 1024, stdin);//从标准输入流读取
//	////fputs(buf, stdout);//输出到标准输出流
//
//	//gets(buf);
//	//puts(buf);
//
//	return 0;
//}

//格式化输入输出函数

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
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);//格式化的形式写文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//格式化的输入数据
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
//	//格式化的输入数据
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
 
 //输入输出函数sprintf、sscanf,将格式化的数据转移到字符串里，读的时候，在字符串中读出格式化的内容
 
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
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//二进制输入输出函数

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三", 20, 55.6 };
//	FILE* pf = fopen("test1.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
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
//	//struct S s = { "张三", 20, 55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
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
//	//1.定位文件指针
//	fseek(pf, 2, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//修改文件指针指向函数

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
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

//文件结束函数//perror错误函数的使用

//int main()
//{
//	//EOF
//	//feof();//EOF - end of file - 文件结束标志
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
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//	//perror：打印函数后的字符串，然后把错误码对应的错误信息的字符串地址返回
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
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
	//读文件
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