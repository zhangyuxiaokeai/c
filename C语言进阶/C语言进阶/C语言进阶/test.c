#define _CRT_SECRURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = -10;
//		;
//}

//第一种写一段代码告诉我们当前机器的字节序是什么
//int main()
//{
//	// 写一段代码告诉我们当前机器的字节序是什么
//	int a = 1;
//	char *p =(char *) &a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//第二种
//check_sys()
//{
//	int a = 10000;
//	char *p = (char *)&a;
//	if (*p == 1)
//
//		//return *p 返回1小端返回0大端
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//用函数实现大小段
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}

//int main()
//{
//	char i = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", i, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	char b = a + 1;
//	printf("%u", b);
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--);
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//
//

//指针详解





//int main()
//{
//	char arr[] = "abcdef";
//	char *pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n",pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abdcef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//www.stackoverflow.com
//.segmentfault  --段错误 
//www.segmentfault.com 


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char *p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");  //打印哈哈
//	}
//	else
//	{
//		printf("haha");
//	}
//	if (*p1==*p2)
//	{
//		printf("hehe\n");  //打印呵呵
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };  //整形数组
//	char ch[5] = { 0 };  //字符数组
//	int *parr[4];//存放整形指针的数组--指针数组
//	char *pch[5];//存放字符指针的数组 -指针数组
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int *arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*arr[i]));
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,4,3,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 }; 整形指针的数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针  --指针

//int main()
//{
//	int *p = NULL;//P是整形指针 - 指向整形的指针 --可以存放整形的地址
//	char* pc = NULL;//PC是字符指针  --指向字符的指针--存放字符的地址-可以存放字符的地址
//	                //数组指针  --指向数组的指针   -存放数组的地址
//	//int arr[10] = { 0 };
//	//arr -首元素地址
//	//&arr[0] -首元素的地址
//	// &arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //数组的地址要存起来  
//	int *p[10];//存放指针的数组
//	int(*p)[10] = &arr;// 数组指针
//	//上面的p就是数组指针
//	return 0;
//}


//int main()
//{
//	char * arr[5];
//	char* (*pa)[5] = &arr;//正确写法         //错误写法char (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",*(*pa + i));  // printf("%d", (*pa)[i]);//printf("%d",*(*pa+i);
//	}
//	return 0;
//}


//参数是数组的形式
//print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<x;i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf(" %d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的模式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//			for (j = 0; j < y; j++)
//			{
//				printf(" %d", *(*(p + i) + j));
               /* printf("%d", *(p[i] + j));
				printf("%d", *(*(p + i) + j));
				printf("%d", *(*(p + i)[j]);*/
//			}
//			printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5, }, { 2,3,4,5,6, }, { 3,4,5,6,7 } };
//	print1(arr,3,5);//arr --数组名 -数组名就是首元素地址
//	        //把arr想象成一维数组（把一行想象成一个元素）引出第二种写法print2
//
//	print2(arr, 3, 5);
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d", *(p + i));
//	   //printf("%d", *(arr + i));
//		//printf("%d", arr[i]);
//		//printf("%d", p[i]);
//		//注意 arr[i]==*(arr+i)==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}

//void test1(int arr[3][5])
//{}
//void test2(int arr[][5]) //行可以省略列不可以省略
//{}
//
//
//void test3(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//二维数组传参
//	test2(arr);
//
//	test3(arr); //指针传参
//	return 0;
//}


//void test1(int * p)
//{}//当你知道形参是一个指针的时候，你的实参可以怎么传，请看下面代码
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int **p)
//{}
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组
//	return 0;
//}

//数组指针 -是指向数组的指针

//函数指针 -是指向函数的指针--存放函数地址端点一个指针


//函数指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//&arr;
//	//arr;
//	//printf("%d\n", Add(a, b));
//	
//
//	// &函数名 和 函数名 都是函数的地址
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//
//	//将函数放入指针
//	int(*pa)(int , int) = Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}


//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}
////阴间代码，希望你下次能看懂老铁
//void(*signal(int, void(*)(int)))(int);
//



//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//指针数组
//	int *arr[5];
//	//需要一个数组，这个数组可以存放四个函数的地址 - 函数指针的数组
//	int(*pa)(int, int)=Add;
//	int(*parr[4])(int, int) = {Add,Mul,Sub,Div};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf,能够指向my_strcpy
////2.写一个函数指针数组，能够存放4个my_strcpy函数的地址
//
//char*(*pf)(char*, const char*)=my_strcpy;
//char*(*pff[4])(char*, const char*);


//实现计算器

//void menu()
//{
//	printf("***********************************\n");
//	printf("***1.add             2.sub*********\n");
//	printf("***3.mul             4.div*********\n");
//	printf("****         0.exit       *********\n");
//	printf("***********************************\n");
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//第一种
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("请输入两个数字\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Add(x, y));
//				break;
//			case 2:
//				printf("请输入两个数字\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Sub(x, y));
//				break;
//			case 3:
//				printf("请输入两个数字\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Mul(x, y));
//				break;
//			case 4:
//				printf("请输入两个数字\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Div(x, y));
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("输入错误请重新选择\n");
//				break;
//			}
//	} while (input);
//}



//第二种
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//（*pfArr[5](int,int) 函数指针数组    --转移表
//	int(*pfArr[5])(int, int) = { 0 ,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n",ret);
//		}
//		else if (input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}


//第三种
//void Calc(int(*pf)(int, int))   //回调函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字\n");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", (*pf)(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//			switch (input)
//			{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("输入错误请重新选择\n");
//				break;
//			}
//	} while (input);
//}
//
//
////指向函数指针数组的指针
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10]=&arr;//取出数组的地址
//	int(*pf)(int, int); //函数指针
//
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int, int)
//	return 0;
//}


//print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}




//回调函数


//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j ] = arr[j+1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}


//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//		  //比较两个整形值
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0  };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}



//int main()
//{
//	test1();
//	//int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//struct Stu s[3] = { {"zhangsan",20},{"lisi",15} ,{"wangsu",27} };
//	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	////bubble_sort(arr, sz);
//	//int i= 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf(" %d", arr[i]);
//	//}
//	return 0;
//}






//int main()
//{
//	int a = 20;
//	int *pa = &a;
//	char*pc = &a;
//	void* p = &a;  //无类型的指针
//	*p = 0;
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行加减整数的操作
//	return 0;
//}




//qsort //函数

//用法一
//cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//	//比较两个整形值
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//用法二 //浮点型

//int cmp_float(const void* e1, const void* e2)
//{
//	return  ((int)(*(float*)e1 == *(float*)e2));
//
//	//比较两个整形值
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i= 0;
//for (i = 0; i < sz; i++)
//{
//	printf(" %f", f[i]);
//}
//	}
//
//
//int main()
//{
//	test2();
//	return 0;
//}

// 比较结构体

//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//
//	//比较两个整形值
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//不能直接用大于小于等于，应该用strcmp函数
//	return strcmp (((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan", 20}, { "lisi",15 }, { "wangsu",27 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//第一个参数：等待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址 -这个函数使用者自己实现
	//             函数指针的两个参数是：待比较的两个元素的地址  
//}



//实现任意类型的冒泡排序




//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//不能直接用大于小于等于，应该用strcmp函数
//	return strcmp (((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//
//	//比较两个整形值
//}
//
//
//
//Swap(char* buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//	}
////实现bubble_sort函数的程序员，他是否知道未来排序的数据内型--不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void*base, int sz,int width,int(*cmp)(void*e1,void*e2) )
//{   //趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{    //两个元素的比较
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)(base)+(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)(base)+(j + 1)*width,width);
//			}
//		}
//	}
//
//}
//
//void test4()
//{
//	int arr[]= { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan", 20}, { "lisi",15 }, { "wangsu",27 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test4();
//	//test5();
//	return 0;
//}
//
//
//
























































//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int* arr[10];//整形指针数组
//	//int(*pAdd)[10] = &arr; //整形数组指针
//	//函数指针
//	int (*pAdd)(int, int) = &Add;
//	//调用函数指针
//	int sum =(*pAdd)(1, 2); //第一种
//	int sum1 = pAdd(1, 2); //第二种
//
//	//函数指针的数组
//	int(*paar[5])(int, int);
//
//	//指向函数指针数组的指针
//	int (*(*ppArr)[5])(int, int) = &arr;
//	return 0;
//
//}

//int main()
//{
//	char* p = "abcdef";
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[3]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n",strlen(&p));
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);//
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char *pcNume;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	printf("%d\n", sizeof(unsigned int *));
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(3,4) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

int main()
{
	char*a[] = { "work","at","alibaba" };
	char* *pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}