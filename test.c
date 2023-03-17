//Begin
//写代码
//1.写出主函数（main函数）
//100-500代码
//如何执行呢？ -C语言 是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//写个代码，在屏幕上打印:比特
//printf - 库函数 - 在屏幕上打印信息的
//printf的使用，引用头文件stdio.h)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	printf("七杀\n");
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}

//定义变量的方法
//int age = 150;
//float weight = 45.5f;
//char ch = 'w';

//变量的分类
 //局部变量-{}内部定义的 当局部变量和全局变量名字冲突的情况下，局部优先
 //全局变量

//写一个代码求2个整数的和
//scanf函数是输入函数

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;
}