#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组是相同类型元素的集合，
#include<string.h>
#include<math.h>
// 	//创建一个数组-存放整形十个
	//创建的有10个元素，只输入了4个
//	int arr[10] = {1,2,2.3};//不完全初始化，剩下的元素默认为0
//	char arr2[5] = {'a',95};//也叫不完全初始化，
//	char arr3[5] = { "ab" };
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof所占空间的大小包括\0
//	//sizeof 计算变量，数组，类型的大小--单位是字节
//	printf("%d\n", strlen(arr4));//strlen求字符串长度--只能求字符串的长度
//	//strlen是库函数，得引用头文件
////	char ch[n];这样输入是错误的
//	return 0;
//}
//数组的创建[]中应该是常量才行

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}


//一堆数组的使用
 
//int main()
//{
	//char arr[] = "abcdef";
	////printf("%c\n", arr[2]);
	//int i = 0;
	//int len = strlen(arr);
	//for(i=0;i<len;i++)
	////for (i = 0; i < 6; i++)
	////for(i=0;i<(int)strlen(arr);i++) //如果不加int返回的是无符号
	//{
	//	printf("%c\n", arr[i]);
	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//	return 0;
//}


	// 一维数组在内存中的存储---连续存放的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]); // --\%p打印地址
//	}
//	return 0;
//
//}

	
//二外数组的创建

//int main()
//{
//	       //三行四列的数组
//	//int arr1[3][4] = {1,2,3,4,5}; //当二维数组不完全初始化的时候后面也是0（一行一行来）
//	//int arr2[3][4] = { {1,2,3},{4,5} }; //第一行1 2 3 0第二行4 5 0 0
//	//  //int arr3[][] = { 1,2,3,4,5 };不能这样写
//	//int arr4[][4] = { {1,2,3,4},{5,6,7,8} };//可以这样写行可以沈略，列不可以省略
//	
//	return 0;
//}
//
//

//二维数组的定位
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



// 二维数组在内存中的存储

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n ",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}//二维数组的存储也是连续的一行接着一行




//数组作为函数参数
//
//#include<stdio.h>
//void bubble_sort(int arry[])
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	int temp = 0;
//	int j = 0;
//	//for (i = 0; i < sz; i++)
	//{
	//	/*for (j = 0; j < sz - 1; j++)
	//	{
	//		if (arry[j + 1] < arry[j])
	//		{
	//			temp = arry[j];
	//			arry[j] = arry[j + 1];
	//			arry[j + 1] = temp;
	//		}
	//	}*/

	//}


//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr);
//	for (i= 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//排序
void sort(int *arr, int n)
{
	int i, j, k;
	int tmp;
	for (i = 0; i < n - 1; i++)
	{
		k = i; 
		for (j = i + 1; j < n; j++)
		{
			if (arr[k] > arr[j])
				k = j;
		}
		//如果最小元素的下标不是后面n-i+1的未排序序列的第一个元素,则需要交换第i个元素和后面找到的最小元素的位置
		if (k != i)
		{
			tmp = arr[k];
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	}
}

//质数
int zhishu(int x) {
	int i = 2;
	while (i<x)
	{
		if (x % i == 0) {
			return 0;
	}
		i++;
	}
	return 1;
}

//int main() {
//	int a = 2;
//	int q = 1;
//	q=zhishu(a);
//	printf("%d ",q);
//	return 0;
//}


