#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	
//	return 0;
//}

//�������ڴ��д���ǲ���
//һ�������Ķ����Ʊ�ʾ��3��:
//ԭ�룬���룬����
//-1:10000000000000000000000000000001(ԭ��)
//	 11111111111111111111111111111110(���룩
//	 11111111111111111111111111111111(���룩

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

//��ϵ������
//�߼������� && ||
//���������� exp1 ? exp2 : exp3\���ű��ʽ

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

//�±����ò����� ��������arr[5]��� []Ϊ�±�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[5]);
//	return 0;
//}

//�������ò����� ͬ��printf()��� ()Ϊ��������

//C�����ṩ�Ĺؼ���
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�����������ǹؼ���

//int main()
//{
//	{
//		int a = 10;//auto ���Զ���-ÿ���ֲ���������auto���ε�
//	}
//}
//
//int main()
//{
//	register int num = 100;//�Ĵ����ؼ���
//	return 0;
//}

//����������ݿ��Դ洢�������أ�
//�Ĵ���(��С)�����ٻ���(��ʮMB)���ڴ�(8G-16G)��Ӳ��(500G-���)������(2T-��ѵ�)
//������Ƶ����ʹ�õ����ݣ����ڼĴ��������Ч�� 

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 1;
//	u_int num2 = 2;
//    return 0;
//
//}

//static ��̬��

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

//static���ξֲ��������ı��˾ֲ���������������(�������Ǹı��˱����Ĵ洢���ͣ�
//ջ��:�ֲ������������Ĳ���������:��̬�ڴ����ģ���̬��:ȫ�ֱ��� static���εľ�̬����
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

//#define ���峣���ͺ�
//��
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n",4*ADD(2, 3));//4*2+3
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p ר��������ӡ��ַ��
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C������paΪָ�����
//	//* ˵��pa��ָ�����
//	//int˵��paִ�еĶ�����int���͵�
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//

//ָ��-��ַ
//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//*�����ò��� | *pa����ͨ��pa ��ߵĵ�ַ���ҵ�a
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

//�ṹ�������C���Դ����µ����ͳ���
//����һ��ѧ��
struct Stu
{
	char name[20];
	int age;
	double score;
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����", 20, 85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

		return 0;
}