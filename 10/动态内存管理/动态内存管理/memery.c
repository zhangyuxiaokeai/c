#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<stdio.h>
//��̬�ڴ����

//�亯��ԭ��Ϊvoid *malloc(unsigned int size)��
//�����������ڴ�Ķ�̬�洢���з���һ������Ϊsize�������ռ䡣
//�˺����ķ���ֵ�Ƿ����������ʼ��ַ������˵���˺�����һ��ָ���ͺ�����
//���ص�ָ��ָ��÷�����Ŀ�ͷλ�á�
//int main()
//{
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(40);
//	if (p== NULL)
//	{
//	//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û��������ռ�
//	free(p);
//	//free()��C�������ͷ��ڴ�ռ�ĺ�����ͨ���������ڴ�ռ�ĺ���malloc()���ʹ�ã�
//	//�����ͷ��� malloc()��calloc()��realloc() �Ⱥ���������ڴ�ռ䡣
//	p = NULL;
//	return 0;
//}


//calloc
//void* calloc��unsigned int num��unsigned int size��
//���ڴ�Ķ�̬�洢���з���num������Ϊsize�������ռ䣬
//��������һ��ָ�������ʼ��ַ��ָ�룻������䲻�ɹ�������NULL��
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//

//realloc
//ָ����=����������*��realloc��Ҫ�ı��ڴ��С��ָ�������µĴ�С��
//���жϵ�ǰ��ָ���Ƿ����㹻�������ռ䣬����У�����mem_addressָ��ĵ�ַ��
//���ҽ�mem_address���أ�����ռ䲻�����Ȱ���newsizeָ���Ĵ�С����ռ䣬
//��ԭ�����ݴ�ͷ��β�������·�����ڴ����򣬶����ͷ�ԭ��mem_address��ָ�ڴ�����
//��ע�⣺ԭ��ָ�����Զ��ͷţ�����Ҫʹ��free����
//ͬʱ�����·�����ڴ�������׵�ַ�������·���洢����ĵ�ַ��
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
//	//������ʹ��malloc���ٵĿռ䡢
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//realloc ʹ�õ�ע������
//	//���p�ռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ�����p
//	//���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
////����һ��������Ŀռ䣬���Ұ�ԭ�����ڴ��е����鿽���������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//����һ���µı���������realoc�����ķ���ֵ
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
//	//�������Ƿ�ʧ�ܱ�ɿ�ָ��
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
//		for (i = 0; i, i < 10; i++) //ָ��Խ����ʣ�ԭָ����Сֻ��5
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//
//}



//���������Ա

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С-���������Ա-�����С�ǿ��Ե�����
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
//	//������С
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