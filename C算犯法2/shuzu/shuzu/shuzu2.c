#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������ͬ����Ԫ�صļ��ϣ�
#include<string.h>
#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz - 1 ; i++)//ÿһ��ð�������
//	{
//		int flag = 1;//������һ�������Ѿ�������
//		int j = 0;
//		for (j = 0; j < sz -1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr���������ų�����
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
	printf("%p\n", &arr);//&arr--����ĵ�ַ
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//1.---sizeof(��������-��������ʾ�������飬sizeof(�����������������������Ĵ�С,��λ���ֽ�
	//2.---&�������������������������飬&��������ȡ��������������˵��ַ
	/*printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);*/
	return 0;
}