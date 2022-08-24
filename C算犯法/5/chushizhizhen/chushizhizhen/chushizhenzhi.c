#include <stdio.h>
//指针就是变量，用来存放地址的变量，（存放指针中的值都被当成地址处理


//指针和指针类型
//int main()
//{
//	int i = 0x11223344;
//	int* pc = &i;
//	*pc = 0;
//	printf("%p\n", pc);
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
////当我是 --int*pc能够访问4个字节当我是 char*pc 能够访问1个字节
////当我是double*pc的时候能够访问8个字节


//指针加减整数表示了:指针走一步走多远（指针的步长）
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);// int* pa+1跳了4个字节
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//int* pc+1跳了一个字节
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//可以改变arr的元素
//	char* p = arr;//不可以，只跳了一个字节
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}



//野指针
//概念：野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的)

//int mian()
//{
//	int a;//局部变量不初始化，默认为随机值
//	int *p;//局部的指针变量，就被初始化随机值
//	*p = 20; //非法的
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) //当*p跃出数组的内存也会变成野指针
//	{
//		p++;
//	}
//	return 0;
//}


//指针指向的空间被释放，
//int* test()
//{
//	int a = 10;
//	return &a;
//}//此处函数已结束空间就被还给计算机，下面的*p是接受到a的空间但也许不属于本程序

//int main()
//{
//	int *p = test();
//		*p = 20;
//		return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	//指针初始化
//
//	int* pa = NULL;
//	//当实在不知道该给指针初始化为什么的时候，赋予空值
//	return 0;
//}

//如何规避野指针
//指针初始化
//小心指针越界
//指针指向空间释放即使置NULL
//指针使用之前检查有效性



//指针的运算
//指针加减整数

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		*p = *p + 1;
//	}
//	return 0;
//}

//指针减去指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[0]);   //指针减去指针是得到中间的元素个数
//	 //指针加减指针必须指向同一块空间，或者是同一个数组
//	return 0;
//}

#include<string.h>

//int my_strlen(int* str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen  -- 求字符串长度
//	//递归
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



// 数组和指针

//int main()
//{
//	int arr[10] = { 0 ,2};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//得到的整个数组的地址
//	printf("%p\n", &arr + 1); //这里会加一个数组的地址
//	//1. &arr-&数组名--数组名不是首元素地址-数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	//2.sizeof(arr)  -sizeof(数组名）- 数组名表示的整个数组-sizeof(数组名）计算的整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0  };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
	//{
	//	printf(" %p=======      %p\n", p + i, &arr[i]);  //p+i 和 &arr 得到完全一样的地址
	//}
//	return 0;
//}



//二级指针
//
//int main()
//{
//	int a = 0;
//	int *pa = &a;
//	int * *ppa = &pa;    //ppa就是二级指针
//	int ***pppa = &ppa; //三级指针
//	printf("%d\n", ***pppa);
//	return 0;
//}



//指针数组 - 数组
//数组指针  -  指针


int main()
{
	int a = 20;
	int b = 30;
	int c = 30;
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	//整形数组 存放整形
	//字符数组 -存放数组 -存放指针
	//指针数组 - 存放指针
	int *arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}
}