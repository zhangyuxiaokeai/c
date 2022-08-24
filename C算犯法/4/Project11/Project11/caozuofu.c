#define _CRT_SECURE_NOWARNINGS
#include<stdio.h>



//int main()
//{
//	int a = 16;
//	// --右移操作符
//	//移动的是二进制位
//	//算术右移，左边补原符号位
//	//逻辑移位，左边补0
//	int b = a >> 1;
//	printf("%d\n", b);//这是算术右移
//	return 0;
//
//}

//int main()
//{
//	int a = -1;
//
//	//整数的二进制表示有：原码，反码，补码，
//	//存储到内存中的是补码
//	int b = a >> 1;
//	printf("%d\n", b);//这是算术右移
//	return 0;
//
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//左移操作符，左边抛弃右边补0
//	return 0;
//}


//位操作符 - 只能用于整数》 & 按位与 》 |按位或 》 ^ 按位操作符 

//int main()
//{
//	//&-按位与
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//不创建第三个变量，交换两个数字的值。
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a +b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\n b=%d\n", a, b); *///此方法可能会溢出
//	int a = 3;//0011
//	int b = 5;//0101
//	a = a ^ b;//0110
//	b = a ^ b;//0101^0110=0011
//	a = a ^ b;//0110^0011=0101
//	printf("a=%d\n b=%d\n", a, b);//没有溢出问题，but可读性差
//	return 0;
//}


//编写代码实现;求一个整数存储在内存中二进制中1的个数
//int main()
//{
//
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	//统计num的补码中有几个1
//	while(num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);    //无法统计负数
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	for (i = 0; i <32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	a = a + 2;
//	a += 2;//复合赋值付       //两种方法相等
//}

//单目操作符  
//---!非
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a)
//	{
//		printf("去你妈的狗东西\n");
//	}
//	if (!a)
//	{
//		printf("呵呵呵\n");
//	}
//	return 0;
//}


//取地址操作符
//int main()
//{
//	int a = 10;
//	int* p=&a;//取地址操作符     
//	*p = 20;//*p//接引用操作符
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算的变量所占空间的大小，单位是字节
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 5;
//	char b = 'w';   //char 占一个字节
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(s = a + 5)); //当int +short类型会依照短的那个
//	printf("%d\n",s);
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// ～按二进制取反
//	printf("%d\n", ~a);
//	return 0;
//}


//000000000000000000000000000000001011将倒数第四位1变为0
//int main()
//{
//	int a = 11;
//	a=a | (1 << 2);//1向左移动两位（000000000000000000000000000000000100）在与a相或
//	printf("%d\n",a);
//	//将a还原
//	a=a&(~(1 << 2));
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14; //强制类型转换
//	return 0;
//}


//逻辑操作符
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	c = a && b;
//	printf("%d\n", c);
//	return 0;
//}


//此处的逻辑运算符与按位逻辑符存在差别，是对于数字不是对于二进制
//&&  ||  
//int main()
//{
//	int i = 0, a = 1, b = 2,c=3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a= %d\n b= %d\n c= %d\n d= %d\n", a, b, c, d);
//	return 0;
//}



//条件操作符
//exp1 ? exp2 :exp3

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//
//	//三目操作符实现上述操作
//	//b = (a > 5 ? 3: -3);
//}
//



//逗号表达式

//exp1 , exp2 , exp3 ,....expn
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//从左往右依次计算，（中间的依然计算）只出最后（最左边的）结果
//}
  
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//创建的一个结构体类型
//struct student
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct student 这个类型创建了一个学生对象s1,并初始化
//	struct student s1 = { "张三",20,"20190101" };
//	struct student* ps = &s1;
//	//结构体指针操作符
//	//第一种操作符
//	printf("%s\n", ps->name);
//	//第二种种用指针打印结构体成员
//	printf("%s\n", (*ps).name);
//
//	//第三种方法
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//结构体变量，成员名
//	return 0;
//}



//表达式求值
//隐式类型转换  短整型在计算时会被转换为普通整形，然后被截断
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//}

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}