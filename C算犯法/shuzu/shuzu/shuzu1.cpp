#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������ͬ����Ԫ�صļ��ϣ�
#include<string.h>
#include<math.h>
// 	//����һ������-�������ʮ��
	//��������10��Ԫ�أ�ֻ������4��
//	int arr[10] = {1,2,2.3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
//	char arr2[5] = {'a',95};//Ҳ�в���ȫ��ʼ����
//	char arr3[5] = { "ab" };
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//sizeof��ռ�ռ�Ĵ�С����\0
//	//sizeof ������������飬���͵Ĵ�С--��λ���ֽ�
//	printf("%d\n", strlen(arr4));//strlen���ַ�������--ֻ�����ַ����ĳ���
//	//strlen�ǿ⺯����������ͷ�ļ�
////	char ch[n];���������Ǵ����
//	return 0;
//}
//����Ĵ���[]��Ӧ���ǳ�������

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}


//һ�������ʹ��
 
//int main()
//{
	//char arr[] = "abcdef";
	////printf("%c\n", arr[2]);
	//int i = 0;
	//int len = strlen(arr);
	//for(i=0;i<len;i++)
	////for (i = 0; i < 6; i++)
	////for(i=0;i<(int)strlen(arr);i++) //�������int���ص����޷���
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


	// һά�������ڴ��еĴ洢---������ŵ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]); // --\%p��ӡ��ַ
//	}
//	return 0;
//
//}

	
//��������Ĵ���

//int main()
//{
//	       //�������е�����
//	//int arr1[3][4] = {1,2,3,4,5}; //����ά���鲻��ȫ��ʼ����ʱ�����Ҳ��0��һ��һ������
//	//int arr2[3][4] = { {1,2,3},{4,5} }; //��һ��1 2 3 0�ڶ���4 5 0 0
//	//  //int arr3[][] = { 1,2,3,4,5 };��������д
//	//int arr4[][4] = { {1,2,3,4},{5,6,7,8} };//��������д�п������ԣ��в�����ʡ��
//	
//	return 0;
//}
//
//

//��ά����Ķ�λ
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



// ��ά�������ڴ��еĴ洢

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
//}//��ά����Ĵ洢Ҳ��������һ�н���һ��




//������Ϊ��������
//
//#include<stdio.h>
//void bubble_sort(int arry[])
//{
//	//ȷ��ð�����������
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
//	//��arr���������ų�����
//	bubble_sort(arr);
//	for (i= 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//����
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
		//�����СԪ�ص��±겻�Ǻ���n-i+1��δ�������еĵ�һ��Ԫ��,����Ҫ������i��Ԫ�غͺ����ҵ�����СԪ�ص�λ��
		if (k != i)
		{
			tmp = arr[k];
			arr[k] = arr[i];
			arr[i] = tmp;
		}
	}
}

//����
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


