#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>

//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��

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
////�ݹ��㷨�󳤶�
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


//strcpy �ַ�������

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

//׷���ַ���
//my_strcat(char* dest, const char *src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.�ҵ�֮����׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefg"; //�����ַ������ܱ�����
//	char arr2[] = "bit";
//	//strcpy
//	//my_strcpy(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ƚ������ַ����Ƿ���� strcmp  
//�����һ�����ڵڶ������ش���0�����ֵ��ڷ���0С�ڷ��ظ������ȵ���ÿһ����SCALL
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
//	//�Ƚ�
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

//�ַ���׷��
//strncat
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "hello bit";
//	//
//	strncat(arr1, arr2,2 );
//	return 0;
//}

//�ַ����Ƚ�
//strncmp
//int main()
//{
//	const char *p1 = "abcdef";
//	const char *p2 = "abcdrf";
//	int ret=strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr �����ַ���
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
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ���
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
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok strtok�����������ֽ��ַ�����

//int main()
//{
//
//	char arr[] = "zpw@bitedu.tech";
//	char*p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf,arr);
//	//�и�buf�е��ַ���
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
//		//�и�buf�е��ַ���
//		char* ret= NULL;
//		for (ret=strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//		{
//			printf("%s\n", ret);
//		}
//	return 0;
//}


//strerror  ���ش����룬����Ӧ�Ĵ�����Ϣ
#include<errno.h>
//int main()
//{  
//	//������ --������Ϣ
//	//0 no error
//	//1 Operation not permitted
//	//2 No such file or directory
//	//....
//	//errno ��һ��ȫ�ֵĴ���ı���
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ����Ӧ�Ĵ����룬��ֵ��errno��
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
//	//int ret = islower(ch);//�ж��ǲ���Сд�ַ� ����Ƿ���һ����0ֵ
//	//char ret = isdigit(ch); //�ж��ǲ��������ַ� ����Ƿ���һ����0ֵ
//	char oc= tolower('Q');    //��д�ַ�תСд
//
//	char ch=toupper('q');    //Сд�ַ�ת��д
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


//�ڴ溯�� 
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
//		//��ǰ��󿪿���
//		while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//
//	}
//	else
//	{ //�Ӻ���ǰ����
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
//	struct s arr3[] = { {"����",20},{"����",14} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}

//memcpy ֻҪ�������ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���

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


//memcmp  �Ƚ��ֽڵĸ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n",ret);
//}


//memset  - �ڴ�����

int main()
{
	char arr[10] = "0";
	memset(arr, 'Y', 10);
	return 0;
}