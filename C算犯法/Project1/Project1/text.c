#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]�������г����˼���
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//
//		}
//		if (count == 1)
//		{
//			printf("��������%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//	
//}

#include<stdlib.h>  //strcmp
#include<string.h> //system
#include<limits.h>
//int main()
//{
//	char input[20] = { 0 };//�洢����
//	//�ػ�
//	//system() -ר������ִ��ϵͳ�����
//	system("ping 192.168.100.1");//�ػ�
//	again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s,input");//            %s-�ַ���
//	if (strcmp(input, "������")==0)//�ж�input�д�ŵ��ǲ��������� -strcmp -string compare
//	{
//		system("ȥ�����");
//	}
//	else
//	{
//		goto again;
//	}
//	
//	return 0;
//}

#include <stdio.h>
//int main()
//{
	//�ַ����Ľ�����־��  \0
	//"a,b,c,d";
	//'\0' -ת���ַ�-0
	// 0 ����0
	////////��0 ->
	//a',b','c','d'
	//EOF -end of file �ļ�������־
	//return 0;
//}
//�Ƚ�����ֵ�Ĵ�С
//int MAX(int x, int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 99999999;
//	int num2 = 147895454;
//	int max;
//		max = MAX(num1, num2);
//		printf("������ֵ���� %d",max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//��ʹ��ֵ��++
//	printf("a=%d b=%d\n", a, b);
//	printf("%d", sizeof(int));
	//printf("%d\n", b);
	
	//
	//int a = 10;
	//int arr[] = { 1,2,3,4,5,6, };
	//printf("%d\n",sizeof(a));//4
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (int));
	//printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
	//printf("%d\n", sizeof(arr)/sizeof(arr[0])); //6
//	return 0;
//}

//�߼����
//int main()
//{
//	//  &&�� 
//	// ||��
//	return 0
//}

//����������
//exp1 ? exp2: exp3;    Ҳ����ľ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ?  a : b); //��ľ������
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	
//	return 0;
//}


//	int arr[10] = { 0 };
//	arr[4];//[]�±����ò�����



//int Add(int x, int y)  //-----��ƺ���
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}��
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//()---�������ò�����
//	return 0;
//}

//int main()
//{
//	register int a = 10;//����������Ĵ�����---register
//	printf("%d\n", a);
//	return 0;
//}
//int��������з��ŵ�===signed int  
//unsignd �޷��ŵ�

// typedef---���Ͷ��� --�����ض��� 
//���� ---С��
//int main()
//{
//	typedef unsigned int u_int ;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//static  ���ξֲ�����
//�ֲ��������������ڱ߳�
// void test()
//{
//	static int a = 1; //static int a =1   ��̬�ֲ�����   ʹ�ú������� 
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//

//static����ȫ�ֱ���
//static�ı��˱����������� --�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ����޷�ʹ��
//int main()
//{
//	//extern --�����ⲿ���ŵ�
//	extern int g_val;  //g_val����һ��Դ�ļ� ADD.C 
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//�����ⲿ����-extern

//static���κ�����������  --��׼ȷ
//static���κ����ı��˺�����������Ϥ               �ⲿ������Add��
//�ⲿ�������� -���ڲ���������
//extern int Add(int , int );  
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("a+b= %d", sum);
//	return 0;
//}

//#difine ���峣���ͺ�
#include<stdio.h>
//#difine����ı�ʶ������
//#difine���Զ���ꡪ��������
//#define MAX 100
//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ��巽ʽ#define
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//
//int a = 10;
//int b = 20;
////�����Ķ��巽ʽ
//int max = MAX(a, b); 
//printf("max=%d", max);
////��Ķ��巽ʽ
////max = (a>b?a:b):
//printf("max= %d\n", max);
//return 0;
//}

//int main()
//{
//	int a = 10; //����4���ֽ�
//	//ȡ��ַ������ &a ȡ��a�ĵ�ַ
//	int* p = &a; 
//	//printf("%p\n", &a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n", p);
//	//*p://*--�����ò�����
//	*p = 20;
//	printf("a= %d\n", a);
//
//		return 0;
//}
//int main()
//{
//	char ch = 'w'; 
//	int* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//*pc = 'a';
//	//printf("%c\n", ch);  //%c��ӡ�ַ�
//	return 0;
//}


//��ӡdouble����---%lf


//�ṹ��
//char int double 
//��--���Ӷ���
//����+���+����+���֤����+
//���Ӷ��� ---�ṹ��---�����Լ����������һ������
//����ṹ������  struct --�ṹ��ؼ���
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55����
//}; //�ֺŲ���ȱ��
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct  Book b1 = { "C���Գ������",55 };
//	struct Book* pb = &b1;
//
//	//����Pb��ӡ���ҵ������ͼ۸�
//	// ����ָ���ӡ�������ͼ۸�
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	//  .���ýṹ�����.��Ա
//	 // ->���ýṹ��ָ��->��Ա
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	//printf("����:%s\n",b1.name);//�ַ�����%s
//	//printf("�۸�:%dԪ\n", b1.price);
//	//b1.price = 15;    //�޸ļ۸�
//	//printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);
//  strcpy(b1.name,"C++");  �޸�����  //strcpy-strcpy copy  -�ַ�������-�⺯������Ҫ����ͷ�ļ�<-string.h>
//	   //������ͨ��ʽ��ӡ�������ͼ۸�
//	return 0;
//}

struct Bello
{
	char name[100];
	short price;
};
int main()
{
	struct Bello b1 = { "C���Գ������",55 };
	struct Bello b2 = { "java�������",33 };
	strcpy(b1.name, "C++");
	printf("����%s\n", b1.name);
	printf("�۸�:%dԪ\n", b1.price);
	printf("����%s\n", b2.name);
	printf("�۸�:%dԪ\n", b2.price);
	return;

}

