#include <stdio.h>
//ָ����Ǳ�����������ŵ�ַ�ı����������ָ���е�ֵ�������ɵ�ַ����


//ָ���ָ������
//int main()
//{
//	int i = 0x11223344;
//	int* pc = &i;
//	*pc = 0;
//	printf("%p\n", pc);
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
////������ --int*pc�ܹ�����4���ֽڵ����� char*pc �ܹ�����1���ֽ�
////������double*pc��ʱ���ܹ�����8���ֽ�


//ָ��Ӽ�������ʾ��:ָ����һ���߶�Զ��ָ��Ĳ�����
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);// int* pa+1����4���ֽ�
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//int* pc+1����һ���ֽ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//���Ըı�arr��Ԫ��
//	char* p = arr;//�����ԣ�ֻ����һ���ֽ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}



//Ұָ��
//���Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶ�)

//int mian()
//{
//	int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
//	int *p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20; //�Ƿ���
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) //��*pԾ��������ڴ�Ҳ����Ұָ��
//	{
//		p++;
//	}
//	return 0;
//}


//ָ��ָ��Ŀռ䱻�ͷţ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}//�˴������ѽ����ռ�ͱ�����������������*p�ǽ��ܵ�a�Ŀռ䵫Ҳ�����ڱ�����

//int main()
//{
//	int *p = test();
//		*p = 20;
//		return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	//ָ���ʼ��
//
//	int* pa = NULL;
//	//��ʵ�ڲ�֪���ø�ָ���ʼ��Ϊʲô��ʱ�򣬸����ֵ
//	return 0;
//}

//��ι��Ұָ��
//ָ���ʼ��
//С��ָ��Խ��
//ָ��ָ��ռ��ͷż�ʹ��NULL
//ָ��ʹ��֮ǰ�����Ч��



//ָ�������
//ָ��Ӽ�����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *p);
//		*p = *p + 1;
//	}
//	return 0;
//}

//ָ���ȥָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[0]);   //ָ���ȥָ���ǵõ��м��Ԫ�ظ���
//	 //ָ��Ӽ�ָ�����ָ��ͬһ��ռ䣬������ͬһ������
//	return 0;
//}

#include<string.h>

//int my_strlen(int* str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen  -- ���ַ�������
//	//�ݹ�
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



// �����ָ��

//int main()
//{
//	int arr[10] = { 0 ,2};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//�õ�����������ĵ�ַ
//	printf("%p\n", &arr + 1); //������һ������ĵ�ַ
//	//1. &arr-&������--������������Ԫ�ص�ַ-��������ʾ�������� - &������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)  -sizeof(��������- ��������ʾ����������-sizeof(���������������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0  };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
	//{
	//	printf(" %p=======      %p\n", p + i, &arr[i]);  //p+i �� &arr �õ���ȫһ���ĵ�ַ
	//}
//	return 0;
//}



//����ָ��
//
//int main()
//{
//	int a = 0;
//	int *pa = &a;
//	int * *ppa = &pa;    //ppa���Ƕ���ָ��
//	int ***pppa = &ppa; //����ָ��
//	printf("%d\n", ***pppa);
//	return 0;
//}



//ָ������ - ����
//����ָ��  -  ָ��


int main()
{
	int a = 20;
	int b = 30;
	int c = 30;
	int *pa = &a;
	int *pb = &b;
	int *pc = &c;
	//�������� �������
	//�ַ����� -������� -���ָ��
	//ָ������ - ���ָ��
	int *arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", *(arr2[i]));
	}
}