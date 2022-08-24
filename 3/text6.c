#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a , b);
//	printf("%d\n",sum);
//	return 0;
//}

#include<string.h>
//strlen -string length -求字符串长度
//strcpy -string copy  -字符串拷贝会拷贝--/0  //1
//memset  -memory内存-set设置 --//2
//int main()//1
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//
//}

//int main()//2
//{
//	char arr[] = "hell world";
//	memset(arr, '*', 5);//将arr前五个换成*号
//	printf("%s\n", arr);
//	return 0;
//}


//自定义函数
//写一个函数，可以找出两个整数的最大值
//zycjer(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用
//	//int max= zycjer(a, b);
//	printf("max=%d\n", max);
//	int max = zycjer(2100, 522);
//	printf("max=%d\n",max);
//	return 0;
//}

//void Swap(int x, int y) //void表示没有返回值
//{
//	int tmp = 0;
//	x = tmp;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	//
//	//tmp = a;
//	//a =b;
//	//b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;

//}//这种方法无法交换ab的值，只把数值传入函数让x y交换了值，实际上ab未发生变化


//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pb = &b;
//	int* pa = &a;//pa 指针变量
//	Swap2(&a, &b);
//	//*pa//解引用操作
//	printf("a= %d b= %d", a,b);
//	return 0;
//}//这种方法才可以利用函数交换两个函数的值，必须将地址指针用上去


//实际参数-- int a = 10 形式参数---Swap(int x, int y）括号内部为形参
//当实参传递给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改不会对实参产生影响


//传值调用 例如上面代码（求两个数的最大值）1当有返回值的时候传值
//传址调用 例如上面代码（交换两个数的值）1当没有返回值的时候传址
//当有可能改变函数外部变量的时候就用传址

//打印100到两百之间的素数
   //是素数返回1不是素数返回0
#include<math.h>
//is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <=200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}

//写一个函数判断是不是年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y%100!=0 ) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{ 
//		return 0;
//	}
//}
//
//int main()
//{
//	int year = 0;
//		for (year = 1000; year <= 2000; year++)
//		{
//			if (1==is_leap_year(year))
//			{
//				printf("%d ", year);
//			}
//		}
//	return 0;
//}                   
//                    //arr[]本质上这个arr[]是一个指针，所以不能用字符串长度求个数
//int binary_search(int arr[], int k,int sz)  //本质上这条语句应该是指针传递的地址
//{
//	int left = 0;
//	int right = sz - 1;
//	//int sz = sizeof(arr) / sizeof(arr[0]); 是无法在这里求元素个数的
//	while(left<=right)
//	{ 
//	int mid = (left + right) / 2;
//	if (k > arr[mid])
//	{
//		left = mid + 1;
//	}
//	else if (k < arr[mid])
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		return mid;
//	    }
//	}
//	return -1;
//}
//
//
//int main()
//{
////二分查找
////在有序数组中具体查找某个数字
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int ret=binary_search(arr, k); //无法直接传，这里传过去的是首元素的地址，
//	int ret = binary_search(arr, k,sz); //我们在这里就把元素个数直接传到函数里面
//	if(ret==-1)
//	{ 
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下表是： %d\n", ret);
//	}
//	return 0;
//}



//写一个函数，每调用一次这个函数，就会减num的值增加1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num= %d\n", num);//1
//	Add(&num);
//	printf("num= %d\n", num);//2
//	Add(&num);
//	printf("num= %d\n", num);//3
//	return 0;
//}

//函数的嵌套调用和链式访问

//链式访问--把一个函数的返回值作为另外一个函数的参数




//函数的声明

//写在主体代码后面的函数后面要声明函数
//这里包括源文件Add.c和头文件（自己创建的）Add.h
//#include "Add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


