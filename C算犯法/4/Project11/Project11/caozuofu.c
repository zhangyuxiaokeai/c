#define _CRT_SECURE_NOWARNINGS
#include<stdio.h>



//int main()
//{
//	int a = 16;
//	// --���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	//�������ƣ���߲�ԭ����λ
//	//�߼���λ����߲�0
//	int b = a >> 1;
//	printf("%d\n", b);//������������
//	return 0;
//
//}

//int main()
//{
//	int a = -1;
//
//	//�����Ķ����Ʊ�ʾ�У�ԭ�룬���룬���룬
//	//�洢���ڴ��е��ǲ���
//	int b = a >> 1;
//	printf("%d\n", b);//������������
//	return 0;
//
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//���Ʋ���������������ұ߲�0
//	return 0;
//}


//λ������ - ֻ������������ & ��λ�� �� |��λ�� �� ^ ��λ������ 

//int main()
//{
//	//&-��λ��
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}

//�����������������������������ֵ�ֵ��
//int main()
//{
//	/*int a = 3;
//	int b = 5;
//	a = a +b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d\n b=%d\n", a, b); *///�˷������ܻ����
//	int a = 3;//0011
//	int b = 5;//0101
//	a = a ^ b;//0110
//	b = a ^ b;//0101^0110=0011
//	a = a ^ b;//0110^0011=0101
//	printf("a=%d\n b=%d\n", a, b);//û��������⣬but�ɶ��Բ�
//	return 0;
//}


//��д����ʵ��;��һ�������洢���ڴ��ж�������1�ĸ���
//int main()
//{
//
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	//ͳ��num�Ĳ������м���1
//	while(num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);    //�޷�ͳ�Ƹ���
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	for (i = 0; i <32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	a = a + 2;
//	a += 2;//���ϸ�ֵ��       //���ַ������
//}

//��Ŀ������  
//---!��
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a)
//	{
//		printf("ȥ����Ĺ�����\n");
//	}
//	if (!a)
//	{
//		printf("�ǺǺ�\n");
//	}
//	return 0;
//}


//ȡ��ַ������
//int main()
//{
//	int a = 10;
//	int* p=&a;//ȡ��ַ������     
//	*p = 20;//*p//�����ò�����
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof����ı�����ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 5;
//	char b = 'w';   //char ռһ���ֽ�
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(s = a + 5)); //��int +short���ͻ����ն̵��Ǹ�
//	printf("%d\n",s);
//	/*printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	// ����������ȡ��
//	printf("%d\n", ~a);
//	return 0;
//}


//000000000000000000000000000000001011����������λ1��Ϊ0
//int main()
//{
//	int a = 11;
//	a=a | (1 << 2);//1�����ƶ���λ��000000000000000000000000000000000100������a���
//	printf("%d\n",a);
//	//��a��ԭ
//	a=a&(~(1 << 2));
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14; //ǿ������ת��
//	return 0;
//}


//�߼�������
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	c = a && b;
//	printf("%d\n", c);
//	return 0;
//}


//�˴����߼�������밴λ�߼������ڲ���Ƕ������ֲ��Ƕ��ڶ�����
//&&  ||  
//int main()
//{
//	int i = 0, a = 1, b = 2,c=3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a= %d\n b= %d\n c= %d\n d= %d\n", a, b, c, d);
//	return 0;
//}



//����������
//exp1 ? exp2 :exp3

//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//
//	//��Ŀ������ʵ����������
//	//b = (a > 5 ? 3: -3);
//}
//



//���ű��ʽ

//exp1 , exp2 , exp3 ,....expn
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//�����������μ��㣬���м����Ȼ���㣩ֻ���������ߵģ����
//}
  
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//������һ���ṹ������
//struct student
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct student ������ʹ�����һ��ѧ������s1,����ʼ��
//	struct student s1 = { "����",20,"20190101" };
//	struct student* ps = &s1;
//	//�ṹ��ָ�������
//	//��һ�ֲ�����
//	printf("%s\n", ps->name);
//	//�ڶ�������ָ���ӡ�ṹ���Ա
//	printf("%s\n", (*ps).name);
//
//	//�����ַ���
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ���������Ա��
//	return 0;
//}



//���ʽ��ֵ
//��ʽ����ת��  �������ڼ���ʱ�ᱻת��Ϊ��ͨ���Σ�Ȼ�󱻽ض�
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//}

int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}