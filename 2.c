#define _CRT_SECURE_NO_WARNINGS 1 
//#define MAX 10000
//#include <stdio.h>
//#include <string.h>

//ע��
// 1.�������в���Ҫ�Ĵ������ֱ��ɾ����Ҳ����ע�͵�
// 2.��������Щ����Ƚ��Ѷ������Լ�һЩע������

//#include <string.h>
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};

//int main()
//{
//	printf("hehe");
//	return 0;
//}

//��������:��������������ָ���Ǳ����Ĵ���������������֮���һ��ʱ���
//1.�ֲ�����������������:���������������ڿ�ʼ�����������������ڽ���
//2.ȫ�ֱ���������������:�����������������

//��ʶ����
//int main()
//{
	//1.���泣��
	//3.14;
	//10;
	//'a';
	//"abcdefg";

	//2.const���εĳ�����
	//const int num = 10;
	//num = 20;
	//printf("num = %d\n", num);

	//int arr1[10] = {0};
    //const int n = 10;
	//int arr2[n] = {0};

	//3.#define����ı�ʶ������
	//int n = MAX;
	//printf("n = %d\n", n);

	//4.ö�ٳ���
	//����һһ�оٵĳ���
	//enum Sex s = MALE;
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);

	//return 0;
//}

//��ʶ�ַ���
//��˫����(Double Quote)��������һ���ַ���Ϊ�ַ�������ֵ(String Literal),���߼���ַ�����
//ע:�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�

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
//%c�Ǵ�ӡ�ַ���%s�Ǵ�ӡ�ַ���

//��ʶת���ַ�
//int main()
//{
//	printf("(are you ok??)\n");//??) -- ]- ����ĸ��
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
//	printf("%c\n", '\130');//8���Ƶ�130��ʮ���ƵĶ����أ�
//	//x --ascll��ֵ��88
//	printf("%c\n", '\101');//a-65-8������:101
//  printf("%c\n",'\x30');//48-�ַ�0
//  printf("%d\n",strlen("abc"));//3
//  printf("%d\n",strlen("c:\test\328\test.c"));
//	return 0;
//}

//��ʶѡ�����
//int main()
//{
//	int input = 0;//�����ֵ
//	printf("�������:>");
//	printf("��Ҫ�ú�ѧϰ��(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("����é®\n");
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


//����-һ����ͬ���͵�Ԫ�صļ���
//10������1-10������
//���������±������ʵ�


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
//	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0
//	return 0;
//}

//������
//����������:+ - * / %
//��λ������:>> <<
//λ������:&��λ��;|��λ��;^��λ���
//��ֵ������
//��Ŀ������

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
//		printf("����");
//	}
//	if (!a)
//	{
//		printf("������");
//	}
//	return 0;
//}

//sizeof��һ��������
//���Ǻ���
//�������ͻ��߱�����С��

//int main()
//{
//	//10*4 =40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	printf("%d\n", sz);
//}