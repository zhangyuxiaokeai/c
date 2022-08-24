#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<stdio.h>
//动态内存分配

//其函数原型为void *malloc(unsigned int size)；
//其作用是在内存的动态存储区中分配一个长度为size的连续空间。
//此函数的返回值是分配区域的起始地址，或者说，此函数是一个指针型函数，
//返回的指针指向该分配域的开头位置。
//int main()
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(40);
//	if (p== NULL)
//	{
//	//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf(" %d", *(p + i));
//		}
//	}
//	//当动态申请的空间不在使用的时候
//	//就应该还给操作空间
//	free(p);
//	//free()是C语言中释放内存空间的函数，通常与申请内存空间的函数malloc()结合使用，
//	//可以释放由 malloc()、calloc()、realloc() 等函数申请的内存空间。
//	p = NULL;
//	return 0;
//}


//calloc
//void* calloc（unsigned int num，unsigned int size）
//在内存的动态存储区中分配num个长度为size的连续空间，
//函数返回一个指向分配起始地址的指针；如果分配不成功，返回NULL。
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%c\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//

//realloc
//指针名=（数据类型*）realloc（要改变内存大小的指针名，新的大小）
//先判断当前的指针是否有足够的连续空间，如果有，扩大mem_address指向的地址，
//并且将mem_address返回，如果空间不够，先按照newsize指定的大小分配空间，
//将原有数据从头到尾拷贝到新分配的内存区域，而后释放原来mem_address所指内存区域
//（注意：原来指针是自动释放，不需要使用free），
//同时返回新分配的内存区域的首地址。即重新分配存储器块的地址。
//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			 *(p + i)=i;
//		}
//	}
//	//就是在使用malloc开辟的空间、
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc 使用的注意事项
//	//如果p空间之后有足够的空间可以追加，则直接追加，返回p
//	//如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
////开辟一块满需求的空间，并且把原来的内存中的数组拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//得用一个新的变量来接受realoc函数的返回值
//	int *ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//
//	}
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//
//	//必须检查是否失败变成空指针
//	//int *p = (int*)malloc(40); err
//	//int i = 0;
//	//for (i = 0; i < 40; i++)
//	//{
//	//	*(p + 1) = i;
//	//}
//	//free(p);
//	//p = NULL;
//	//return  0;\
//
//
//	int *p = (int*)malloc(5*sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i, i < 10; i++) //指针越界访问，原指定大小只有5
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//}



//柔性数组成员

//struct S
//{
//	int n;
//	int arr[0];//未知大小-柔性数组成员-数组大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* prf = realloc(ps, 44);
//		if (prf != NULL)
//		{
//			ps = prf;
//		}
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i]=i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf(" %d", ps->arr[i]);
//		}
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S*ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr=malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	/*for (i = 0; i < 5; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}*/
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr= ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);
//	ps->arr = NULL;
//	ps=NULL;
//	return 0;
//}

//struct S {
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S*p = (struct S*)malloc(sizeof(struct S));
//	p->arr = (int*)malloc(10 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	int *ps=(int*)realloc(p->arr, 40 * sizeof(int));
//	if (ps != NULL)
//	{
//		p->arr = ps;
//	}
//	for (i = 10; i <40 ; i++)
//	{
//		p->arr[i] = i;
//	}
//		for (i = 0; i < 40; i++)
//	{
//		printf("  %d", p->arr[i]);
//	}
//		free(p);
//		p = NULL;
//}


struct S {
	int n;
	int arr[0];
};
int main()
{
	struct S*p = (struct S*)malloc(sizeof(struct S)+40*sizeof(int));
	int i = 0;
	p->n = 100;
	for (i = 0; i < 40; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 40; i++)
	{
		printf("  %d", p->arr[i]);
	}
	free(p);
	p = NULL;

	return 0;
}