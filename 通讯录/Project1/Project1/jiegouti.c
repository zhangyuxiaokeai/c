#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>


//声明一个结构体类型
// 声明一个学生类型，是想通过学生类型来创建学生变量
//描述学生：属性 -名字 +电话+性别
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//} s4,s5,s6;
// //s3 s4 s5 都是全局变量
//struct Stu s3;  //全局变量
//int main()
//{  //创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//
//
////匿名结构体类型
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//typedef struct node  //重命名为node 大括号外面的
//{
//	int data;
//	struct node * next
//}node;



//结构体的初始化

//struct T
//{
//	double weight;
//	int age;
//};
//
//struct S
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s={'c',100,3.14,"hello bit" };
//	struct S s = { 'b',100,{55.6,10},3.14,"hello bit" }; //初数化中结构体中含有结构体
//	printf("%d %lf %c %d %lf %s\n",s.st.age ,s.st.weight,s.c,s.a,s.d,s.arr);
//	return 0;
//}


//结构体内存对齐

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void init(struct S* ps)
//{
//	ps->a=100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//print2(struct S* ps3)
//{
//	printf("%d %c %lf\n",ps3->a,ps3->c,ps3->d);
//	
//}
//
//int main()
//{
//	struct S s;
//	init(&s);
//	print1(s);
//	print2(&s);
//	print3(&s);
//	return 0;
//}
//
//

//位段----二进制位  类型都一样
// 不具有跨平台性

//struct S
//{
//	int a : 2;
//	int b : 3;
//	int c : 5;
//	int d : 29;
//};
//
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
//	return 0;
//}

//struct S
//{
//	char a : 3;//3表示需要的bit位
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
// int main()
//{
//	 struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d %d %d %d", s.a, s.b, s.c, s.d);
//	return 0;
//}


//枚举


//enum Sex
//{
//	//枚举的可能取值
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color//可以自己赋值
//{
//	red=2,
//	yello=3,
//	blue=4
//};
//
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = blue;*/
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	printf("%d %d %d", red, blue, yello);
//	return 0;
//}

//结构体
//struct ST
//{
//
//};
//
//
//
////枚举
//enum mm
//{
//
//};

//联合  ---共用体

//union Un
//{
//	char c;  //i和c不能同时使用
//	int i;
//};
//
//int main()
//{
//	union  Un n;
//	printf("%d\n", sizeof(n));
//	printf("%p\n", &(n.c));
//	printf("%p\n", &(n.c));
//	printf("%p\n", &n);
//		return 0;
//}



//判断大小端
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}


//利用 联合体
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.i;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//左边低地址-------------->高地址
//	//讨论一个数据，放在内存中的存放的字节顺序
//	 int a = 2;
//    // char* p=&a;
//     //printf("%d", *p);
//	// if (1 == *(char*)&a)
//	 //{
//		// printf("小段");
//	 //}
//	 //else
//	 //{
//		// printf("大端");
//	 //}
//	 int ret = check_sys();
//	 printf("%d", ret);
//	 return 0;
//}

//联合体大小
union Un 
{
	int a;
	char arr[5];
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
}