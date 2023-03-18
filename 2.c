#define _CRT_SECURE_NO_WARNINGS 1 
//#define MAX 10000
//#include <stdio.h>
//#include <string.h>

//注释
// 1.代码中有不需要的代码可以直接删除，也可以注释掉
// 2.代码中有些代码比较难懂，可以加一些注释文字

//#include <string.h>
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	printf("hehe");
//	return 0;
//}

//生命周期:变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
//1.局部变量的生命周期是:进作用域生命周期开始，出作用域生命周期结束
//2.全局变量的生命周期是:整个程序的生命周期

//初识常量
//int main()
//{
	//1.字面常量
	//3.14;
	//10;
	//'a';
	//"abcdefg";

	//2.const修饰的常变量
	//const int num = 10;
	//num = 20;
	//printf("num = %d\n", num);

	//int arr1[10] = {0};
    //const int n = 10;
	//int arr2[n] = {0};

	//3.#define定义的标识符常量
	//int n = MAX;
	//printf("n = %d\n", n);

	//4.枚举常量
	//可以一一列举的常量
	//enum Sex s = MALE;
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);

	//return 0;
//}

//初识字符串
//由双引号(Double Quote)引起来的一串字符称为字符串字面值(String Literal),或者简称字符串。
//注:字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志，不算做字符串内容。

//int main()
//{
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	int len = strlen("abc");
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", len);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//%c是打印字符，%s是打印字符串

//初识转义字符
//int main()
//{
//	printf("(are you ok??)\n");//??) -- ]- 三字母词
//	//(are you ok]
//	//
//	printf("%c\n",'\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\test\test.c");
//	printf("\a\a\a");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\130');//8进制的130是十进制的多少呢？
//	//x --ascll码值是88
//	printf("%c\n", '\101');//a-65-8进制是:101
//  printf("%c\n",'\x30');//48-字符0
//  printf("%d\n",strlen("abc"));//3
//  printf("%d\n",strlen("c:\test\328\test.c"));
//	return 0;
//}

//初识选择语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特:>");
//	printf("你要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("初出茅庐\n");
//	}
//	return 0;
//}

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//数组-一组相同类型的元素的集合
//10个整形1-10存起来
//数组是用下标来访问的


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	return 0;
//}

//操作符
//算术操作符:+ - * / %
//移位操作符:>> <<
//位操作符:&按位与;|按位或;^按位异或
//赋值操作符
//单目操作符

//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//
//	if (a)
//	{
//		printf("可以");
//	}
//	if (!a)
//	{
//		printf("不可以");
//	}
//	return 0;
//}

//sizeof是一个操作符
//不是函数
//计算类型或者变量大小的

//int main()
//{
//	//10*4 =40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	printf("%d\n", sz);
//}