#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>

//1.计数器的方法
//2.递归
//3.指针-指针

//size_t=unsigned int
//my_strlen(char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0') //while('*str')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////递归算法求长度
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return (1 + my_strlen(++str));
//	}
//}
//
//
//int main()
//{
//	//int len = strlen("abcdefg");
//	//char arr[] = { 'a','b','c','d','e','f','g' };
//	//int len=my_strlen("abcdefg");
//	//printf("%d\n", len);
//	return 0;
//}


//strcpy 字符串拷贝

//my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;

//	while (*dest = &src)
//	{
//	}
//}

//追加字符串
//my_strcat(char* dest, const char *src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.找到之后再追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefg"; //长量字符串不能被复制
//	char arr2[] = "bit";
//	//strcpy
//	//my_strcpy(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//比较两个字符串是否相等 strcmp  
//如果第一个大于第二个返回大于0的数字等于返回0小于返回负数，比的是每一个的SCALL
//int main()
//{
//	char *p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	return 0;
//}
//
//int my_strcmp(const char*str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}

//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	 else if (*str1 < *str2)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char *p1 = "abzdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret= %d\n", ret);
//	return 0;
//}


//strncpy
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 7);
//
//	return 0;
//}

//字符串追加
//strncat
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "hello bit";
//	//
//	strncat(arr1, arr2,2 );
//	return 0;
//}

//字符串比较
//strncmp
//int main()
//{
//	const char *p1 = "abcdef";
//	const char *p2 = "abcdrf";
//	int ret=strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr 查找字符串
//char* my_strstr(const char*p1,const char*p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur =(char*) p1;
//	//
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 == *s2 )&& (*s2!='\0')&&(*s1!='\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//
//
//
//int main()
//{
//	char *p1 = "abbbbcdef";
//	char *p2 = "bbc";
//	char *ret=my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok strtok函数是用来分解字符串的

//int main()
//{
//
//	char arr[] = "zpw@bitedu.tech";
//	char*p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf,arr);
//	//切割buf中的字符串
//
//	char*ret=strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}


//int main()
//{
//
//	//char arr[] = "zpw@bitedu.tech";
//	//char*p = "@.";
//	char arr[] = "192@.168@.100@.1";
//	char*p = "@";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//		//切割buf中的字符串
//		char* ret= NULL;
//		for (ret=strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//		{
//			printf("%s\n", ret);
//		}
//	return 0;
//}


//strerror  返回错误码，所对应的错误信息
#include<errno.h>
//int main()
//{  
//	//错误码 --错误信息
//	//0 no error
//	//1 Operation not permitted
//	//2 No such file or directory
//	//....
//	//errno 是一个全局的错误的变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把相应的错误码，赋值到errno中
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//	FILE*pf=fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

#include<ctype.h>
//int main()
//{
//
//	//int ret = islower(ch);//判断是不是小写字符 如果是返回一个非0值
//	//char ret = isdigit(ch); //判断是不是数字字符 如果是返回一个非0值
//	char oc= tolower('Q');    //大写字符转小写
//
//	char ch=toupper('q');    //小写字符转大写
//	putchar(ch);
//	putchar(oc);
//	char arr[] = "i am a rich man";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i]=toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//内存函数 
// memecpy 
//struct s
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest < src)
//	{
//		//从前向后开拷贝
//		while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//
//	}
//	else
//	{ //从后往前拷贝
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	struct s arr3[] = { {"张三",20},{"李四",14} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//memcpy 只要处理，不重叠的内存拷贝就可以
//memmove 处理重叠内存的拷贝

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//	return 0;
//}


//memcmp  比较字节的个数
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n",ret);
//}


//memset  - 内存设置

int main()
{
	char arr[10] = "0";
	memset(arr, 'Y', 10);
	return 0;
}