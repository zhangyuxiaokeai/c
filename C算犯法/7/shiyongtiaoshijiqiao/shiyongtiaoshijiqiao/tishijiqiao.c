#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�ṹ�� 
//�ṹ�����͵�����
//�ṹ���ʼ��
//�ṹ���Ա�ķ���
//�ṹ��Ĵ���


//�ṹ�������
//   �ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//����һ��ѧ����һЩ���ݡ�
//����
//����
//�绰
//�Ա�
//struct  - �ṹ��ؼ���  student -�ṹ���ǩ  struct stu -�ṹ������

//    �ṹ��
//struct tag
//{
//member - list;
//}variable-list

//��һ��д��
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//};
//
////�ڶ���д��
//typedef struct Stu //typedef --���Խ��ṹ������������� --���´��� ������Ϊstu�������������п���ʹ��stuֱ��ʹ��
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}stu;         //�ṹ���зֺŲ�����
//
//int main()
//{                 //s�ֲ�����
//	struct Stu s ;//�����ṹ�����
//	stu s2;//�ڶ���д����ʹ��typedef ������



//�ṹ���Ա�����Ϳ����Ǳ��������飬ָ�룬�����������ṹ��

//�ṹ������Ķ���ͳ�ʼ��

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5]
//}Stu;
//
//
//int main()
//{
//	Stu s1 = { "����",20,"15870561651","��" };
//	Stu s2 = { "����",20,"1245678912","Ů" }; //��ʼ��
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
// struct T
//{
//	char ch[10];
//	struct  S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//		struct T t = { "hheh",{100,'w',"hello world",3.14}, arr };
//		printf("%s\n", t.ch);
//		printf("%s\n", t.s.arr);
//		printf("%lf\n", t.s.d);
//		printf("%s\n", t.pc);
//		return 0;
//}



//typedef struct Student
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print(struct Student tmp) // �����������д��stu tmp��
//{
//	printf("name: %s\n", tmp.name);
//	printf("����: %d\n", tmp.age);
//	printf("�ֻ�: %s\n", tmp.tele);
//	printf("�Ա�: %s\n", tmp.sex);
//	printf("\n");
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("����: %d\n", ps->age);
//	printf("�ֻ�: %s\n", ps->tele);
//	printf("�Ա�: %s\n", ps->sex);
//	printf("\n");
//}
//int main()
//{
//	Stu s = { "����",40,"15875626","��" };
//	Print(s);
//	//Print1(s);
//	Print2(&s);    //������ݵĽṹ�����������ѡָ��
//	printf("name: %s\n", s.name);
//	printf("����: %d\n", s.age);
//	printf("�ֻ�: %s\n", s.tele);
//	printf("�Ա�: %s\n", s.sex);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//// �ڴ��е�ջ�� ��1�ֲ����� 2��������ʽ���� 3��������Ҳ���ٿռ�
////�ڴ�Ķ�������̬�ڴ���� ���� malloc/free  realloc  callor
////��̬��  ȫ�ֱ���   ��̬����
//int main()
//{
//	int a = 10; 
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//���ݽṹ��
//-- �������ݽṹ
//˳���
//����
//ջ
//����
//---�������ݽṹ
//������
//----ͼ

#include<windows.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


//F5:�������� - ��F9���ʹ��
//F5 �������ԣ���������ֱ�ӵ��Ե���һ���ϵ㴦
//F9���öϵ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d",i);
//	}
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d", 10-i);
//	}
//	return 0;
//}

//f10�����
//f11�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}



//strcpy����ʵ��
//��һ��
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;  //�����Ż� *dest++ = *src++;��Ҫ����������
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//�ڶ���
//void my_strcpy(char* dest, char* src)
//{
//	if (*dest != NULL || *src != NULL)
//	{
//		while (*dest++ = *src++) //�˴��ж������ǵ�����*src='\0'ʱ�ж�����Ϊ�٣�����ѭ��
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//
//ʲô�������const��  ��ֵ�����Ա��޸�
////char* my_strcpy(char* dest, const char* src)
////{
////	char* ret = dest;
////	assert(dest != NULL);//����
////	assert(src != NULL);//����
////	��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
////	while (*dest++=*src++)
////	{
////		;
////	}
////	return ret;
////}
////
////int main()
////{
////	strcpy
////	�ַ�������
////	char arr1[] = "#################";
////	char arr2[] = "bit";
////	my_strcpy(arr1, arr2);
////	printf("%s\n", my_strcpy(arr1,arr2));
////	return 0;
////}


//int main()
//{
//	 int num = 10;
//	 const int *p = &num;   //���������ǲ����Ա��޸ĵ�
//	//*p = 20; //err const����ָ�������*��ߣ����ε���*p,Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	 //              const����ָ�������*�ұ��ǣ����ε���ָ�����p����p���ܱ��ı�
//	int n = 100;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	return 0;
//}
//
//

//ʵ��strlen����,���ַ�������
//my_strlen(const char *str)
//{
//	int count=0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
