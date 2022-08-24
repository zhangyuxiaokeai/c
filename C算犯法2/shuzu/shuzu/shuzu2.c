#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组是相同类型元素的集合，
#include<string.h>
#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz - 1 ; i++)//每一趟冒泡排序的
//	{
//		int flag = 1;//假设这一趟排序已经有序了
//		int j = 0;
//		for (j = 0; j < sz -1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr);//&arr--数组的地址
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//1.---sizeof(数组名）-数组名表示整个数组，sizeof(数组名）计算的是整个数组的大小,单位是字节
	//2.---&数组名，数组名代表整个数组，&数组名，取出的是整个数组端点地址
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/
	return 0;
}