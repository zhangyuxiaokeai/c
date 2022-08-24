#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在数组中出现了几次
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//
//		}
//		if (count == 1)
//		{
//			printf("单身狗就是%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//	
//}

#include<stdlib.h>  //strcmp
#include<string.h> //system
#include<limits.h>
//int main()
//{
//	char input[20] = { 0 };//存储数据
//	//关机
//	//system() -专门用来执行系统命令的
//	system("ping 192.168.100.1");//关机
//	again:
//	printf("请注意，你的电脑将在一分钟内关机，如果输入:我是猪，就取消关机\n");
//	scanf("%s,input");//            %s-字符串
//	if (strcmp(input, "我是猪")==0)//判断input中存放的是不是我是猪 -strcmp -string compare
//	{
//		system("去你妈的");
//	}
//	else
//	{
//		goto again;
//	}
//	
//	return 0;
//}

#include <stdio.h>
//int main()
//{
	//字符串的结束标志：  \0
	//"a,b,c,d";
	//'\0' -转义字符-0
	// 0 数字0
	////////’0 ->
	//a',b','c','d'
	//EOF -end of file 文件结束标志
	//return 0;
//}
//比较两个值的大小
//int MAX(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 99999999;
//	int num2 = 147895454;
//	int max;
//		max = MAX(num1, num2);
//		printf("这个最大值就是 %d",max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//先使用值在++
//	printf("a=%d b=%d\n", a, b);
//	printf("%d", sizeof(int));
	//printf("%d\n", b);
	
	//
	//int a = 10;
	//int arr[] = { 1,2,3,4,5,6, };
	//printf("%d\n",sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (int));
	//printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
	//printf("%d\n", sizeof(arr)/sizeof(arr[0])); //6
//	return 0;
//}

//逻辑语句
//int main()
//{
//	//  &&与 
//	// ||或
//	return 0
//}

//条件操作符
//exp1 ? exp2: exp3;    也叫三木操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ?  a : b); //三木操作符
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	
//	return 0;
//}


//	int arr[10] = { 0 };
//	arr[4];//[]下标引用操作符



//int Add(int x, int y)  //-----设计函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}出
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//()---函数调用操作符
//	return 0;
//}

//int main()
//{
//	register int a = 10;//将变量放入寄存器中---register
//	printf("%d\n", a);
//	return 0;
//}
//int定义的是有符号的===signed int  
//unsignd 无符号的

// typedef---类型定义 --类型重定义 
//张三 ---小三
//int main()
//{
//	typedef unsigned int u_int ;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//static  修饰局部变量
//局部变量的生命周期边长
// void test()
//{
//	static int a = 1; //static int a =1   静态局部变量   使用后不在销毁 
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//

//static修饰全局变量
//static改变了变量的作用域 --让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就无法使用
//int main()
//{
//	//extern --声明外部符号的
//	extern int g_val;  //g_val是另一个源文件 ADD.C 
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//声明外部函数-extern

//static修饰函数的作用域  --不准确
//static修饰函数改变了函数的链接熟悉               外部函数在Add中
//外部连接属性 -》内部链接属性
//extern int Add(int , int );  
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("a+b= %d", sum);
//	return 0;
//}

//#difine 定义常量和宏
#include<stdio.h>
//#difine定义的标识符常量
//#difine可以定义宏——带参数
//#define MAX 100
//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义方式#define
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//
//int a = 10;
//int b = 20;
////函数的定义方式
//int max = MAX(a, b); 
//printf("max=%d", max);
////宏的定义方式
////max = (a>b?a:b):
//printf("max= %d\n", max);
//return 0;
//}

//int main()
//{
//	int a = 10; //申请4个字节
//	//取地址操作符 &a 取出a的地址
//	int* p = &a; 
//	//printf("%p\n", &a);
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", p);
//	//*p://*--解引用操作符
//	*p = 20;
//	printf("a= %d\n", a);
//
//		return 0;
//}
//int main()
//{
//	char ch = 'w'; 
//	int* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//*pc = 'a';
//	//printf("%c\n", ch);  //%c打印字符
//	return 0;
//}


//打印double类型---%lf


//结构体
//char int double 
//书--复杂对象
//名字+身高+年龄+身份证号码+
//复杂对象 ---结构体---我们自己创造初来的一种类型
//创造结构体类型  struct --结构体关键字
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55定价
//}; //分号不可缺少
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct  Book b1 = { "C语言程序设计",55 };
//	struct Book* pb = &b1;
//
//	//利用Pb打印出我的署名和价格
//	// 利用指针打印出书名和价格
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//  .利用结构体变量.成员
//	 // ->利用结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	//printf("书名:%s\n",b1.name);//字符串用%s
//	//printf("价格:%d元\n", b1.price);
//	//b1.price = 15;    //修改价格
//	//printf("修改后的价格:%d元\n", b1.price);
//  strcpy(b1.name,"C++");  修改书名  //strcpy-strcpy copy  -字符串拷贝-库函数，需要引用头文件<-string.h>
//	   //利用普通方式打印出书名和价格
//	return 0;
//}

struct Bello
{
	char name[100];
	short price;
};
int main()
{
	struct Bello b1 = { "C语言程序设计",55 };
	struct Bello b2 = { "java程序设计",33 };
	strcpy(b1.name, "C++");
	printf("书名%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	printf("书名%s\n", b2.name);
	printf("价格:%d元\n", b2.price);
	return;

}

