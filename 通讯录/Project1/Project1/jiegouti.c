#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>


//����һ���ṹ������
// ����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������
//����ѧ�������� -���� +�绰+�Ա�
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//} s4,s5,s6;
// //s3 s4 s5 ����ȫ�ֱ���
//struct Stu s3;  //ȫ�ֱ���
//int main()
//{  //�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//
//
////�����ṹ������
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//typedef struct node  //������Ϊnode �����������
//{
//	int data;
//	struct node * next
//}node;



//�ṹ��ĳ�ʼ��

//struct T
//{
//	double weight;
//	int age;
//};
//
//struct S
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s={'c',100,3.14,"hello bit" };
//	struct S s = { 'b',100,{55.6,10},3.14,"hello bit" }; //�������нṹ���к��нṹ��
//	printf("%d %lf %c %d %lf %s\n",s.st.age ,s.st.weight,s.c,s.a,s.d,s.arr);
//	return 0;
//}


//�ṹ���ڴ����

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void init(struct S* ps)
//{
//	ps->a=100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//print2(struct S* ps3)
//{
//	printf("%d %c %lf\n",ps3->a,ps3->c,ps3->d);
//	
//}
//
//int main()
//{
//	struct S s;
//	init(&s);
//	print1(s);
//	print2(&s);
//	print3(&s);
//	return 0;
//}
//
//

//λ��----������λ  ���Ͷ�һ��
// �����п�ƽ̨��

//struct S
//{
//	int a : 2;
//	int b : 3;
//	int c : 5;
//	int d : 29;
//};
//
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	char a : 3;//3��ʾ��Ҫ��bitλ
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
// int main()
//{
//	 struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d %d %d %d", s.a, s.b, s.c, s.d);
//	return 0;
//}


//ö��


//enum Sex
//{
//	//ö�ٵĿ���ȡֵ
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum Color//�����Լ���ֵ
//{
//	red=2,
//	yello=3,
//	blue=4
//};
//
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = blue;*/
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	printf("%d %d %d", red, blue, yello);
//	return 0;
//}

//�ṹ��
//struct ST
//{
//
//};
//
//
//
////ö��
//enum mm
//{
//
//};

//����  ---������

//union Un
//{
//	char c;  //i��c����ͬʱʹ��
//	int i;
//};
//
//int main()
//{
//	union  Un n;
//	printf("%d\n", sizeof(n));
//	printf("%p\n", &(n.c));
//	printf("%p\n", &(n.c));
//	printf("%p\n", &n);
//		return 0;
//}



//�жϴ�С��
//check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}


//���� ������
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.i;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//��ߵ͵�ַ-------------->�ߵ�ַ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	 int a = 2;
//    // char* p=&a;
//     //printf("%d", *p);
//	// if (1 == *(char*)&a)
//	 //{
//		// printf("С��");
//	 //}
//	 //else
//	 //{
//		// printf("���");
//	 //}
//	 int ret = check_sys();
//	 printf("%d", ret);
//	 return 0;
//}

//�������С
union Un 
{
	int a;
	char arr[5];
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
}