//Begin
//д����
//1.д����������main������
//100-500����
//���ִ���أ� -C���� �Ǵ��������ĵ�һ�п�ʼִ�е�
//����C���Դ����е���main����-���

//д�����룬����Ļ�ϴ�ӡ:����
//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
//printf��ʹ�ã�����ͷ�ļ�stdio.h)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	printf("��ɱ\n");
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

//��������ķ���
//int age = 150;
//float weight = 45.5f;
//char ch = 'w';

//�����ķ���
 //�ֲ�����-{}�ڲ������ ���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
 //ȫ�ֱ���

//дһ��������2�������ĺ�
//scanf���������뺯��

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