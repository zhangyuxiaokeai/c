#define _CRT_SECRURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>


//void  revers(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//		while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = "abcdefg";
//	//������
//	scanf_s("%s", arr);
//	revers(arr);
//	printf("������ַ����������� %s\n", arr);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + 2;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//ˮ�ɻ���
#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp/= 10)
//		{
//			n++;
//			
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//		//�ж���Ϊ������
//		//1����i��λ��
//		//2����i��ÿһλ��N�η�֮��
//		//�Ƚ�
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	//��ӡ�ϰ벿��
//	int i=0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (j= 0; j < 2*i+1; j++)
//		{
//			//��ӡ�Ǻ�
//			printf("x");
//		}
//		printf("\n");
//	}
//	for (i=0;i<line-1;i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			//��ӡ�Ǻ�
//			printf("x");
//		}
//		printf("\n");
//	}
//	
//	//��ӡ�°벿��
//	return 0;
//}


//����ˮ���⣬һ��Ǯ������һƿ��ˮ��������ƿ������һ��ˮ��20���������

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	//���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	while (empty>=2)
//	{
//	total+=	empty / 2;
//	empty=empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	if (money == 0)
//		total = 0;
//	else
//	total = 2 * money - 1;
//	printf("%d\n", total);
//	return 0;
//}



//�����ǰ��������
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//�����������
//	while (left<right )
//	{
//		while (left < right && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd')+ (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�
//abcd  ����һ���ַ�===> bcda  
//adcd ��������=====>cdab

//��һ�ֱ�����ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����һ���ַ�
//		 int tmp = *arr;
//		 int j = 0;
//		 for (j = 0; j < len-1; j++)
//		 {
//			 *(arr + j) = *(arr + j + 1);
//		 }
//		 *(arr + len - 1) = tmp;
//	}
//}
//


//2.������ת��
//abcdef
//bafedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	assert(arr);
//	assert(k < len);
//	reverse(arr,arr+k-1); //�������
//	reverse(arr+k,arr+len-1); //�����ұ�
//	reverse(arr,arr+len-1); //��������
// }
//
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//}
//


//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k < len);
//
//	reverse(arr,arr+k-1); //�������
//	reverse(arr+k,arr+len-1); //�����ұ�
//	reverse(arr,arr+len-1); //��������
// }
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1,1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//
//	}
//
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//�ڶ��ַ������ÿ⺯��
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//
// // 1.��s1�ַ�����׷��һ��s1���ַ���
//	//strct  //����׷���ַ���,��������׷��
//	//strcat ��������׷��
//	strncat(s1, s1,6);
//
//	//2.�ж�s2ָ����ַ����Ƿ�s1ָ����ַ������Ӵ�
//	//strstr --���Ӵ�
//	 char* ret= strstr(s1, s2);
//	 if (ret == NULL)
//	 {
//		 return 0;
//	 }
//	 else
//	 {
//		 return 1;
//	 }
//}
//
//
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//
//	}
//
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//���Ͼ���
// Ҫ��ʱ�临�Ӷ�С�� (O)N
//1 2 3   1 2 3
//4 5 6   2 3 4
//7 8 9   4 5 6

int FindNum(int arr[3][3], int k, int* px, int*py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k) 
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else 
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//�Ҳ���
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int x = 3;
	int y = 3;
	int k = 7;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���");
		printf("%d %d",x+1,y+1);
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
}