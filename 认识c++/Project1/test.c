#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//����һ������stdio.h���ļ���std��׼i����o���
#include<string.h>

//int MAX(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////����
//#define MAX(X,Y) (X>Y?X:Y)
////#define�����
//int main() {
//	int a = 10;
//	int b = 100;
//	int max=MAX(a,b);
//	printf("max=%d\n",max);
//	//����
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	//#define�����
//	return 0;
//}
//void test() {
//	//int a = 1;�����22222���ֲ�����һ�γ�ȥֱ�����٣�ԭa��ʧ����䲻��Ч
//	static int a = 1;//static�����þ�̬���������ξֲ�������ʹ�ֲ������������ڼӳ�
//	a++;
//	printf("a=%d\n",a);
//}
//int main() {
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}
//int main() {
//	int a=0;
//	printf("���Ǹ�������1��0���ǡ�");
//	scanf("%d",&a);
//	if (a == 1) {
//		printf("�������ƽ�ȸ�");
//	}
//	else {
//		printf("��Ҫ����һ����Ϊ�����Լ�������ƽ�ȸ�");
//	}
//	return 0;
//
//int main() {
//	int b = 0;
//	
//	while (b<100) {
//			printf("��û�н�\n");
//			b++;
//	}
//	if(b>=100){
//		printf("���н�����");
//	}
//	return 0;
//}