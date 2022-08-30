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
//	//逆序函数
//	scanf_s("%s", arr);
//	revers(arr);
//	printf("逆序后字符串：》》》 %s\n", arr);
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


//水仙花数
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
//		//判断他为自幂数
//		//1计算i的位数
//		//2计算i的每一位的N次方之和
//		//比较
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	//打印上半部分
//	int i=0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j= 0; j < 2*i+1; j++)
//		{
//			//打印星号
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
//		//打印星号
//		for (j = 0; j <2*(line-1-i)-1; j++)
//		{
//			//打印星号
//			printf("x");
//		}
//		printf("\n");
//	}
//	
//	//打印下半部分
//	return 0;
//}


//喝汽水问题，一块钱可以买一瓶汽水，两个空瓶可以买一汽水，20可以买多少

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf_s("%d", &money);
//	//买回来的汽水喝掉
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



//数组的前面是奇数
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
//	//从左边找奇数
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

//实现一个函数，可以左旋字符串中的k个字符
//abcd  左旋一个字符===> bcda  
//adcd 左旋两个=====>cdab

//第一种暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
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


//2.三部翻转法
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
//	reverse(arr,arr+k-1); //逆序左边
//	reverse(arr+k,arr+len-1); //逆序右边
//	reverse(arr,arr+len-1); //逆序整体
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
//	reverse(arr,arr+k-1); //逆序左边
//	reverse(arr+k,arr+len-1); //逆序右边
//	reverse(arr,arr+len-1); //逆序整体
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


//第二种方法利用库函数
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//
// // 1.在s1字符串中追加一个s1的字符串
//	//strct  //后面追加字符串,不能自我追加
//	//strcat 可以自我追加
//	strncat(s1, s1,6);
//
//	//2.判断s2指向的字符串是否s1指向的字符串的子串
//	//strstr --找子串
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


//杨氏矩阵
// 要求时间复杂度小于 (O)N
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
	//找不到
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
		printf("找到了");
		printf("%d %d",x+1,y+1);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}