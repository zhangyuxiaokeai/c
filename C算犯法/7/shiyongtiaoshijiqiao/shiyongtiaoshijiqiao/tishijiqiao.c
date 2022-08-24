#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//结构体 
//结构体类型的声明
//结构体初始化
//结构体成员的访问
//结构体的传参


//结构体的申明
//   结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//描述一个学生，一些数据、
//名字
//年龄
//电话
//性别
//struct  - 结构体关键字  student -结构体标签  struct stu -结构体类型

//    结构体
//struct tag
//{
//member - list;
//}variable-list

//第一种写法
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//};
//
////第二种写法
//typedef struct Stu //typedef --可以将结构体重新起个名字 --如下代码 将她改为stu，则在主函数中可以使用stu直接使用
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}stu;         //结构体中分号不可少
//
//int main()
//{                 //s局部变量
//	struct Stu s ;//创建结构体变量
//	stu s2;//第二种写法中使用typedef 重命名



//结构体成员的类型可以是标量，数组，指针，甚至是其他结构体

//结构体变量的定义和初始化

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}Stu;
//
//
//int main()
//{
//	Stu s1 = { "张三",20,"15870561651","男" };
//	Stu s2 = { "王二",20,"1245678912","女" }; //初始化
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
// struct T
//{
//	char ch[10];
//	struct  S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//		struct T t = { "hheh",{100,'w',"hello world",3.14}, arr };
//		printf("%s\n", t.ch);
//		printf("%s\n", t.s.arr);
//		printf("%lf\n", t.s.d);
//		printf("%s\n", t.pc);
//		return 0;
//}



//typedef struct Student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print(struct Student tmp) // 括号里面可以写（stu tmp）
//{
//	printf("name: %s\n", tmp.name);
//	printf("年龄: %d\n", tmp.age);
//	printf("手机: %s\n", tmp.tele);
//	printf("性别: %s\n", tmp.sex);
//	printf("\n");
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("年龄: %d\n", ps->age);
//	printf("手机: %s\n", ps->tele);
//	printf("性别: %s\n", ps->sex);
//	printf("\n");
//}
//int main()
//{
//	Stu s = { "李四",40,"15875626","男" };
//	Print(s);
//	//Print1(s);
//	Print2(&s);    //如果传递的结构体参数过大，优选指针
//	printf("name: %s\n", s.name);
//	printf("年龄: %d\n", s.age);
//	printf("手机: %s\n", s.tele);
//	printf("性别: %s\n", s.sex);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//// 内存中的栈区 ：1局部变量 2函数的形式参数 3函数调用也开辟空间
////内存的堆区：动态内存分配 例如 malloc/free  realloc  callor
////静态区  全局变量   静态变量
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//数据结构：
//-- 线性数据结构
//顺序表
//链表
//栈
//队列
//---树形数据结构
//二叉树
//----图

#include<windows.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//F5:启动调试 - 和F9配合使用
//F5 启动调试，经常用来直接调试到下一个断点处
//F9设置断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d",i);
//	}
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d", 10-i);
//	}
//	return 0;
//}

//f10逐过程
//f11逐语句
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}



//strcpy函数实现
//第一种
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;  //可以优化 *dest++ = *src++;不要后面那两步
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//第二种
//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL || *src != NULL)
//	{
//		while (*dest++ = *src++) //此处判断条件是当读到*src='\0'时判断条件为假，跳出循环
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//
//什么情况下用const？  让值不可以被修改
////char* my_strcpy(char* dest, const char* src)
////{
////	char* ret = dest;
////	assert(dest != NULL);//断言
////	assert(src != NULL);//断言
////	把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
////	while (*dest++=*src++)
////	{
////		;
////	}
////	return ret;
////}
////
////int main()
////{
////	strcpy
////	字符串拷贝
////	char arr1[] = "#################";
////	char arr2[] = "bit";
////	my_strcpy(arr1, arr2);
////	printf("%s\n", my_strcpy(arr1,arr2));
////	return 0;
////}


//int main()
//{
//	 int num = 10;
//	 const int *p = &num;   //放在这里是不可以被修改的
//	//*p = 20; //err const放在指针变量的*左边，修饰的是*p,也就是说：不能通过p来改变*p(num)的值
//	 //              const放在指针变量的*右边是，修饰的是指针变量p本身，p不能被改变
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	return 0;
//}
//
//

//实现strlen函数,求字符串长度
//my_strlen(const char *str)
//{
//	int count=0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
