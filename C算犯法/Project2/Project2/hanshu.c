#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include "Add.h"
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//�����ݹ�

//--������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//__��������򵥵ĵݹ�
//��������---stack overflow  ջ��� ---ָ�ڴ���ջ�����ĸ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//����һ����������˳���������;1234----��1 2 3 4

//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf(" %d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0; //unsigend --�޷���
//	scanf_s("%d", &num);//1234
//	//�ݹ鷽��
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 2 3
//	//print(1) 2 3 4 
//	return 0;
//}
#include<string.h>

  //����
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!= '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//



//��׳�


//ѭ��
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = i*ret;
//	}
//	return ret;
//}

//�ݹ�

//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac1(n - 1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int ret = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}

//쳲���������
//
//int count = 0;
//int fbnq(int x)
//{
//	if (x == 3)//���Ե�����쳲������ļ������
//	{
//		count++;
//	}
//	if (x <= 2)
//		return 1;
//	else
//		return fbnq(x - 1) + fbnq(x-2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fbnq(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}
//int fbnq(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(x>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fbnq(n);
//	printf("%d\n", ret);
//	return 0;
//}

void text(int n)
{
	if (n < 10000)
	{
		text(n + 1);
	}
}
int main()
{
	text(1);
	return 0;
}