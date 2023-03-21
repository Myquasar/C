#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	
//	return 0;
//}

//整数在内存中存的是补码
//一个整数的二进制表示有3种:
//原码，反码，补码
//-1:10000000000000000000000000000001(原码)
//	 11111111111111111111111111111110(反码）
//	 11111111111111111111111111111111(补码）

//
//int main()
//{
//	int a = 1;
//	//int b = ++a;
//	//int b = a++;
//	int b = (++a) + (++a) + (++a);
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0; 
//}

//关系操作符
//逻辑操作符 && ||
//条件操作符 exp1 ? exp2 : exp3\逗号表达式

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//下标引用操作符 下面程序的arr[5]里的 []为下标引用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[5]);
//	return 0;
//}

//函数调用操作符 同理printf()里的 ()为函数调用

//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字

//int main()
//{
//	{
//		int a = 10;//auto 是自动的-每个局部变量都是auto修饰的
//	}
//}
//
//int main()
//{
//	register int num = 100;//寄存器关键字
//	return 0;
//}

//计算机中数据可以存储到哪里呢？
//寄存器(更小)、高速缓存(几十MB)、内存(8G-16G)、硬盘(500G-买的)、网盘(2T-免费的)
//大量、频繁被使用的数据，放在寄存器，提高效率 

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 1;
//	u_int num2 = 2;
//    return 0;
//
//}

//static 静态的

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static修饰局部变量，改变了局部变量的生命周期(本质上是改变了变量的存储类型）
//栈区:局部变量、函数的参数；堆区:动态内存分配的；静态区:全局变量 static修饰的静态变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//#define 定义常量和宏
//宏
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n",4*ADD(2, 3));//4*2+3
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p 专门用来打印地址的
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa为指针变量
//	//* 说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//

//指针-地址
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作 | *pa就是通过pa 里边的地址，找到a
//	
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}

//结构体可以让C语言创建新的类型出来
//创建一个学生
struct Stu
{
	char name[20];
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

		return 0;
}