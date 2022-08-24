#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



#define MAX 100;
//int main()
//{
	//printf("%s\n", __FILE__);//代码所位于的位置
	//printf("%d\n", __LINE__);//代码所位于的行号
	//printf("%s\n", __DATE__);//日期
	//printf("%s\n", __DATE__);//时间


//
//	//写日志文件
//
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file: %s line: %d data: %s time: %s i=%d\n",
//			__FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#define MAX 100
//#define TRE "HEHE"
//
//	int main()
//	{
//		printf("%s", TRE);
//		printf("%d", MAX);
//		return 0;
//	}
//
//

//union UN
//{
//	char a;
//	int b;
//}u;
//int main()
//{
//	/*u.b = 1;
//	if (u.a == 1)
//	{
//		printf("小段");
//	}
//	else
//	{
//		printf("大端");
//	}*/
//	int i = 1;
//	 int* ps= &i;
//	 char* ps2=(int*) ps;
//	 if (*ps2 == 1)
//	 {
//		 printf("xiao");
//	 }
//	 else
//	 {
//		 printf("da");
//	 }
//	return 0;
//}


//宏的定义方式--------->宏的传参方式是替换，所以不要吝啬括号
//#define DOUBLE(X) ((X)+(X))
//#define MAX 100
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("%d\n", ret);
//	return 0;
//}


//
//#define PRINT(X) printf("the value of "#X" is %d",X)
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("thr value of""a""is %d\n" ,a)
//	PRINT(b);
//	//printf("the value of""b""is %d\n, a)
//}

//
//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", class84);
//
//	printf("%d\n", CAT(Class, 84));//会被翻译成下面的样子
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0#
//#ifdef  DEBUG  //想让他编译就编译，不想让他编译就不编译
//		printf(" %d", arr[i]);
//#endif
//	}
//	return 0;
//}



//# if 1
//# endif
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1         //   1为真编译，0为假不编译       想让他编译就编译，不想让他编译就不编译
//		printf(" %d", arr[i]);
//#endif
//	}
//	return 0;
//}


//
//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//printf("嘿嘿\n");
//#endif	
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
////检查偏移量
//#define OFFSETOF(struct_name ,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S ,c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


int main()
{
	int nums[] = { 2,5,7,8,9,12,46,23 };
	int f = 15;
	int i = 0;
	int sz = sizeof(nums) / sizeof(nums[0]);
	for (i = 0; i < sz;i++)
	{
		int j = 1;
		while (j <= sz - i - 1)
		{
			if (f == nums[i] + nums[j])
			{
				printf("下标是 %d %d", i+1, j+1);
				j++;
			}
			else
			{
				j++;
			}
		}
	}

}