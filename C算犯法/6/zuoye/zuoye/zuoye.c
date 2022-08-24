#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//	{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i <9; i++)
//	{
//		for (j = 0; j < 10-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//					arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//	}
//
//int Chushihua(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		arr[a] = 0;
//	}
//}
//void Reverce(int arr[],int sz )
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right > left)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	//Chushihua(arr, sz);
//	Reverce(arr, sz);
//	for (a = 0; a < 10; a++)
//	{
//		printf(" %d", arr[a]);
//	}
//	return 0;
//}

//void function_exchange(int arr1[], int arr2[], int sz1, int sz2)
//{
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	function_exchange(arr1, arr2, sz1, sz2);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr1 %d --- arr2 %d\n", arr1[i],arr2[i]);
//	}
//	return 0;
//}
#include<stdlib.h>

// 写一个函数求二进制(补码)表示中有几个一
//第一种
//int count_bit_one(unsigned int x) //无法证实负数所以需要 加unsigned int让负数转换为无符号数
//{
//	int count = 0;
//	while (x)
//	{
//		if ((x % 2) == 1)
//		{
//			count++;
//		}
//	x = x / 2;
//	}
//     return count;
//}

//第二种
//int count_bit_one(int x)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) ==1 )
//		{
//			count++;
//		}
//	}
//	return count;
//}

//第三种经典算法
//int count_bit_one(int x)
//{
//int count = 0;
//while (x)
//{
//	x = x & (x - 1);  //每一次相与就会把最右边的1去掉；自己去试
//	count++;
//}
//
//}
//
//int main()
//{
//	int a = 0;
//	int c = 0;
//	scanf_s("%d", &a);
//	//写一个函数求二进制(补码)表示中有几个一
//	int count=count_bit_one(a);//此函数无法用负数
//	printf("count = %d\n", count);
//	return 0;
//}

//求两个二进制中不同位数的个数
//第一种办法-------这个方法有点问题
//int different(int x, int y)
//{
//	int i = 1;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == (y >> i) & 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//第二种方法
//int count_bit_one(int x)
//{
//int count = 0;
//while (x)
//{
//	x = x & (x - 1);  //每一次相与就会把最右边的1去掉；自己去试
//	count++;
//}
//   return count;
//}
//int different(int x, int y)
//{
//	int tmp = x ^ y;     相同为0不同为1
//	return count_bit_one(tmp);
//}

//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int count=different(a, b);
//	printf("%d\n",32- count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void print(int x)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf(" %d", (x >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a= 0;
//	scanf_s("%d", &a);
//	print(a);
//	return 0;
//}

//不创建第三个变量交换两个数
//int main()
//{
//	int a = 10;  
//	int b = 30;  
//	a = b-a;
//	b = b-a;
//	a = a + b;
//	return 0;
//}

//使用指针打印数组内容
//void printer(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printer(arr, sz);
//	return 0;
//}

//打印乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	print_table(n);
//	return 0;
//}


//编写一个函数，将参数字符串中的字符反向排列，不能使用c的库函数
#include<string.h>
//第一种方法
//使用指针
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* arr)
//{
//	int tmp = 0;
//	int i = 0;
//	int left = 0;
//	int right =my_strlen(arr) - 1;
//	while(right>left)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}



//第二种方法递归
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}



//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}



//写一个递归函数，输入一个非负整数，返回他组成的数字之和
//int Digsum(unsigned int num)
//{
//	if (num > 9)
//	{
//	return Digsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1729
//	int ret = Digsum(num);
//	printf("ret= %d\n", ret);
//	return 0;
//}



//编写一个程序实现 n的k次方
//double Pow(int n, int k)
//{
//	//n^k=n*n^(k-1)
//	if (k < 0)
//		return (1.0 / Pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d%d", &n, &k);
//	double ret = Pow(n, k);
//		printf("ret= %lf\n", ret);
//	return 0;
//}