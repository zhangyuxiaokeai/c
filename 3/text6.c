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
//strlen -string length -���ַ�������
//strcpy -string copy  -�ַ��������´��--/0  //1
//memset  -memory�ڴ�-set���� --//2
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
//	memset(arr, '*', 5);//��arrǰ�������*��
//	printf("%s\n", arr);
//	return 0;
//}


//�Զ��庯��
//дһ�������������ҳ��������������ֵ
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
//	//������ʹ��
//	//int max= zycjer(a, b);
//	printf("max=%d\n", max);
//	int max = zycjer(2100, 522);
//	printf("max=%d\n",max);
//	return 0;
//}

//void Swap(int x, int y) //void��ʾû�з���ֵ
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

//}//���ַ����޷�����ab��ֵ��ֻ����ֵ���뺯����x y������ֵ��ʵ����abδ�����仯


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
//	int* pa = &a;//pa ָ�����
//	Swap2(&a, &b);
//	//*pa//�����ò���
//	printf("a= %d b= %d", a,b);
//	return 0;
//}//���ַ����ſ������ú�����������������ֵ�����뽫��ַָ������ȥ


//ʵ�ʲ���-- int a = 10 ��ʽ����---Swap(int x, int y�������ڲ�Ϊ�β�
//��ʵ�δ��ݸ��βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ����ʵ�β���Ӱ��


//��ֵ���� ����������루�������������ֵ��1���з���ֵ��ʱ��ֵ
//��ַ���� ����������루������������ֵ��1��û�з���ֵ��ʱ��ַ
//���п��ܸı亯���ⲿ������ʱ����ô�ַ

//��ӡ100������֮�������
   //����������1������������0
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

//дһ�������ж��ǲ�����
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
//                    //arr[]���������arr[]��һ��ָ�룬���Բ������ַ������������
//int binary_search(int arr[], int k,int sz)  //�������������Ӧ����ָ�봫�ݵĵ�ַ
//{
//	int left = 0;
//	int right = sz - 1;
//	//int sz = sizeof(arr) / sizeof(arr[0]); ���޷���������Ԫ�ظ�����
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
////���ֲ���
////�����������о������ĳ������
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int ret=binary_search(arr, k); //�޷�ֱ�Ӵ������ﴫ��ȥ������Ԫ�صĵ�ַ��
//	int ret = binary_search(arr, k,sz); //����������Ͱ�Ԫ�ظ���ֱ�Ӵ�����������
//	if(ret==-1)
//	{ 
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ� %d\n", ret);
//	}
//	return 0;
//}



//дһ��������ÿ����һ������������ͻ��num��ֵ����1
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

//������Ƕ�׵��ú���ʽ����

//��ʽ����--��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���




//����������

//д������������ĺ�������Ҫ��������
//�������Դ�ļ�Add.c��ͷ�ļ����Լ������ģ�Add.h
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


