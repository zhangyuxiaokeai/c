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

//函数递归

//--两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件

//__下面这个简单的递归
//常见错误---stack overflow  栈溢出 ---指内存中栈区被耗干
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//输入一个数字让他顺序输出例如;1234----》1 2 3 4

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
//	unsigned int num = 0; //unsigend --无符号
//	scanf_s("%d", &num);//1234
//	//递归方法
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 2 3
//	//print(1) 2 3 4 
//	return 0;
//}
#include<string.h>

  //函数
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
//递归
//



//求阶乘


//循环
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

//递归

//int Fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac1(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int ret = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	ret = Fac1(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//斐波那契数列
//
//int count = 0;
//int fbnq(int x)
//{
//	if (x == 3)//测试第三个斐波那契的计算次数
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