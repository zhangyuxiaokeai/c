#define _CRT_SECRURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int b = -10;
//		;
//}

//��һ��дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int main()
//{
//	// дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	int a = 1;
//	char *p =(char *) &a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//�ڶ���
//check_sys()
//{
//	int a = 10000;
//	char *p = (char *)&a;
//	if (*p == 1)
//
//		//return *p ����1С�˷���0���
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	//�ú���ʵ�ִ�С��
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//}

//int main()
//{
//	char i = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", i, b, c);
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	char b = a + 1;
//	printf("%u", b);
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--);
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//
//

//ָ�����





//int main()
//{
//	char arr[] = "abcdef";
//	char *pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n",pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abdcef";
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}

//www.stackoverflow.com
//.segmentfault  --�δ��� 
//www.segmentfault.com 


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char *p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");  //��ӡ����
//	}
//	else
//	{
//		printf("haha");
//	}
//	if (*p1==*p2)
//	{
//		printf("hehe\n");  //��ӡ�Ǻ�
//	}
//	else
//	{
//		printf("haha");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };  //��������
//	char ch[5] = { 0 };  //�ַ�����
//	int *parr[4];//�������ָ�������--ָ������
//	char *pch[5];//����ַ�ָ������� -ָ������
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int *arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*arr[i]));
//
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,4,3,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 }; ����ָ�������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ָ��  --ָ��

//int main()
//{
//	int *p = NULL;//P������ָ�� - ָ�����ε�ָ�� --���Դ�����εĵ�ַ
//	char* pc = NULL;//PC���ַ�ָ��  --ָ���ַ���ָ��--����ַ��ĵ�ַ-���Դ���ַ��ĵ�ַ
//	                //����ָ��  --ָ�������ָ��   -�������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr -��Ԫ�ص�ַ
//	//&arr[0] -��Ԫ�صĵ�ַ
//	// &arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr; //����ĵ�ַҪ������  
//	int *p[10];//���ָ�������
//	int(*p)[10] = &arr;// ����ָ��
//	//�����p��������ָ��
//	return 0;
//}


//int main()
//{
//	char * arr[5];
//	char* (*pa)[5] = &arr;//��ȷд��         //����д��char (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",*(*pa + i));  // printf("%d", (*pa)[i]);//printf("%d",*(*pa+i);
//	}
//	return 0;
//}


//�������������ʽ
//print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i=0;i<x;i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf(" %d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////������ָ���ģʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//			for (j = 0; j < y; j++)
//			{
//				printf(" %d", *(*(p + i) + j));
               /* printf("%d", *(p[i] + j));
				printf("%d", *(*(p + i) + j));
				printf("%d", *(*(p + i)[j]);*/
//			}
//			printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5, }, { 2,3,4,5,6, }, { 3,4,5,6,7 } };
//	print1(arr,3,5);//arr --������ -������������Ԫ�ص�ַ
//	        //��arr�����һά���飨��һ�������һ��Ԫ�أ������ڶ���д��print2
//
//	print2(arr, 3, 5);
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d", *(p + i));
//	   //printf("%d", *(arr + i));
//		//printf("%d", arr[i]);
//		//printf("%d", p[i]);
//		//ע�� arr[i]==*(arr+i)==*(arr+i)==*(p+i)==p[i]
//	}
//	return 0;
//}

//void test1(int arr[3][5])
//{}
//void test2(int arr[][5]) //�п���ʡ���в�����ʡ��
//{}
//
//
//void test3(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);//��ά���鴫��
//	test2(arr);
//
//	test3(arr); //ָ�봫��
//	return 0;
//}


//void test1(int * p)
//{}//����֪���β���һ��ָ���ʱ�����ʵ�ο�����ô�����뿴�������
//void test2(char*p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test(p1);
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//	return 0;
//}

//void test(int **p)
//{}
//int main()
//{
//	int *ptr;
//	int **pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������
//	return 0;
//}

//����ָ�� -��ָ�������ָ��

//����ָ�� -��ָ������ָ��--��ź�����ַ�˵�һ��ָ��


//����ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//&arr;
//	//arr;
//	//printf("%d\n", Add(a, b));
//	
//
//	// &������ �� ������ ���Ǻ����ĵ�ַ
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//
//
//	//����������ָ��
//	int(*pa)(int , int) = Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}


//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}
////������룬ϣ�����´��ܿ�������
//void(*signal(int, void(*)(int)))(int);
//



//����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int *arr[5];
//	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
//	int(*pa)(int, int)=Add;
//	int(*parr[4])(int, int) = {Add,Mul,Sub,Div};//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf,�ܹ�ָ��my_strcpy
////2.дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
//
//char*(*pf)(char*, const char*)=my_strcpy;
//char*(*pff[4])(char*, const char*);


//ʵ�ּ�����

//void menu()
//{
//	printf("***********************************\n");
//	printf("***1.add             2.sub*********\n");
//	printf("***3.mul             4.div*********\n");
//	printf("****         0.exit       *********\n");
//	printf("***********************************\n");
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//��һ��
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("��������������\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Add(x, y));
//				break;
//			case 2:
//				printf("��������������\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Sub(x, y));
//				break;
//			case 3:
//				printf("��������������\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Mul(x, y));
//				break;
//			case 4:
//				printf("��������������\n");
//				scanf_s("%d%d", &x, &y);
//				printf("%d\n", Div(x, y));
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//			default:
//				printf("�������������ѡ��\n");
//				break;
//			}
//	} while (input);
//}



//�ڶ���
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//��*pfArr[5](int,int) ����ָ������    --ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0 ,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������");
//			scanf_s("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n",ret);
//		}
//		else if (input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	} while (input);
//	return 0;
//}


//������
//void Calc(int(*pf)(int, int))   //�ص�����
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������\n");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", (*pf)(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//			switch (input)
//			{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//			default:
//				printf("�������������ѡ��\n");
//				break;
//			}
//	} while (input);
//}
//
//
////ָ����ָ�������ָ��
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10]=&arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int); //����ָ��
//
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int, int)
//	return 0;
//}


//print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}




//�ص�����


//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j ] = arr[j+1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}


//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//		  //�Ƚ���������ֵ
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0  };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}



//int main()
//{
//	test1();
//	//int arr[10] = { 9,8,7,6,5,4,3,2,1 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//struct Stu s[3] = { {"zhangsan",20},{"lisi",15} ,{"wangsu",27} };
//	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	////bubble_sort(arr, sz);
//	//int i= 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf(" %d", arr[i]);
//	//}
//	return 0;
//}






//int main()
//{
//	int a = 20;
//	int *pa = &a;
//	char*pc = &a;
//	void* p = &a;  //�����͵�ָ��
//	*p = 0;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ��мӼ������Ĳ���
//	return 0;
//}




//qsort //����

//�÷�һ
//cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//	//�Ƚ���������ֵ
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}




//�÷��� //������

//int cmp_float(const void* e1, const void* e2)
//{
//	return  ((int)(*(float*)e1 == *(float*)e2));
//
//	//�Ƚ���������ֵ
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i= 0;
//for (i = 0; i < sz; i++)
//{
//	printf(" %f", f[i]);
//}
//	}
//
//
//int main()
//{
//	test2();
//	return 0;
//}

// �ȽϽṹ��

//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//
//	//�Ƚ���������ֵ
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//����ֱ���ô���С�ڵ��ڣ�Ӧ����strcmp����
//	return strcmp (((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan", 20}, { "lisi",15 }, { "wangsu",27 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ���������ȴ������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ -�������ʹ�����Լ�ʵ��
	//             ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ  
//}



//ʵ���������͵�ð������




//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//����ֱ���ô���С�ڵ��ڣ�Ӧ����strcmp����
//	return strcmp (((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;
//
//	//�Ƚ���������ֵ
//}
//
//
//
//Swap(char* buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//	}
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������--��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void*base, int sz,int width,int(*cmp)(void*e1,void*e2) )
//{   //����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{    //����Ԫ�صıȽ�
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)(base)+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)(base)+(j + 1)*width,width);
//			}
//		}
//	}
//
//}
//
//void test4()
//{
//	int arr[]= { 9.0,8.0,7.0,6.0,5.0,4.0, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan", 20}, { "lisi",15 }, { "wangsu",27 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test4();
//	//test5();
//	return 0;
//}
//
//
//
























































//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int* arr[10];//����ָ������
//	//int(*pAdd)[10] = &arr; //��������ָ��
//	//����ָ��
//	int (*pAdd)(int, int) = &Add;
//	//���ú���ָ��
//	int sum =(*pAdd)(1, 2); //��һ��
//	int sum1 = pAdd(1, 2); //�ڶ���
//
//	//����ָ�������
//	int(*paar[5])(int, int);
//
//	//ָ����ָ�������ָ��
//	int (*(*ppArr)[5])(int, int) = &arr;
//	return 0;
//
//}

//int main()
//{
//	char* p = "abcdef";
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a[3]));
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n",strlen(&p));
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);//
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char *pcNume;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	printf("%d\n", sizeof(unsigned int *));
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(3,4) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

int main()
{
	char*a[] = { "work","at","alibaba" };
	char* *pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}