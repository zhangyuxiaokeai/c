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

// дһ�������������(����)��ʾ���м���һ
//��һ��
//int count_bit_one(unsigned int x) //�޷�֤ʵ����������Ҫ ��unsigned int�ø���ת��Ϊ�޷�����
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

//�ڶ���
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

//�����־����㷨
//int count_bit_one(int x)
//{
//int count = 0;
//while (x)
//{
//	x = x & (x - 1);  //ÿһ������ͻ�����ұߵ�1ȥ�����Լ�ȥ��
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
//	//дһ�������������(����)��ʾ���м���һ
//	int count=count_bit_one(a);//�˺����޷��ø���
//	printf("count = %d\n", count);
//	return 0;
//}

//�������������в�ͬλ���ĸ���
//��һ�ְ취-------��������е�����
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

//�ڶ��ַ���
//int count_bit_one(int x)
//{
//int count = 0;
//while (x)
//{
//	x = x & (x - 1);  //ÿһ������ͻ�����ұߵ�1ȥ�����Լ�ȥ��
//	count++;
//}
//   return count;
//}
//int different(int x, int y)
//{
//	int tmp = x ^ y;     ��ͬΪ0��ͬΪ1
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


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//void print(int x)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
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

//��������������������������
//int main()
//{
//	int a = 10;  
//	int b = 30;  
//	a = b-a;
//	b = b-a;
//	a = a + b;
//	return 0;
//}

//ʹ��ָ���ӡ��������
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

//��ӡ�˷��ھ���
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


//��дһ���������������ַ����е��ַ��������У�����ʹ��c�Ŀ⺯��
#include<string.h>
//��һ�ַ���
//ʹ��ָ��
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



//�ڶ��ַ����ݹ�
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



//дһ���ݹ麯��������һ���Ǹ���������������ɵ�����֮��
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



//��дһ������ʵ�� n��k�η�
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