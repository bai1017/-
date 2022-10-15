#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//包含一个叫是stdio.h的文件，std标准i输入o输出
#include<string.h>

//int MAX(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////函数
//#define MAX(X,Y) (X>Y?X:Y)
////#define定义宏
//int main() {
//	int a = 10;
//	int b = 100;
//	int max=MAX(a,b);
//	printf("max=%d\n",max);
//	//函数
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//	//#define定义宏
//	return 0;
//}
//void test() {
//	//int a = 1;结果是22222，局部变量一次出去直接销毁，原a消失，语句不生效
//	static int a = 1;//static是设置静态变量，修饰局部变量，使局部变量生命周期加长
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
//	printf("你是富二代吗？1是0不是。");
//	scanf("%d",&a);
//	if (a == 1) {
//		printf("你可以躺平等噶");
//	}
//	else {
//		printf("你要加油一辈子为了让自己孩子躺平等噶");
//	}
//	return 0;
//
//int main() {
//	int b = 0;
//	
//	while (b<100) {
//			printf("你没中奖\n");
//			b++;
//	}
//	if(b>=100){
//		printf("你中奖啦！");
//	}
//	return 0;
//}