#include <stdio.h>

//int main()
//{
//	int a = 0;
//	;//ֻ��һ���ֺ���һ�������
//	return 0;
//}



//��֧���

//int main()
//{
//	int age = 20;
//	if (age<18)    //if ���Ե���ʹ��
//		printf("δ����\n", age);
//	else
//		printf("����\n", age);
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int age = 1000;
//	if (age <= 18)
//		printf("δ����\n");
//	else if (age > 18 && age <= 28)
//		printf("��������\n");
//	else if (age > 28 && age <= 50)
//		printf("׳��\n");
//	else if (age > 50 && age <= 90)
//		printf("������\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}
// ��Ҫһ��if���������  ��Ҫ   if{   } else{}

//д����
//int main()
//{
//	int age = 50;
//	if (age <= 18)
//		printf("δ����\n");
//	else
//	{
//		 if (age > 18 && age <= 28)
//		printf("��������\n");
//		else if (age > 28 && age <= 50)
//		printf("׳��\n");
//		else if (age > 50 && age <= 90)
//		printf("����\n");
//	}
//	return 0;
//}


//�������һ�����ж��ǲ��ǻ���
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("���������֣� ");
//	scanf_s("%d",&a);
//	if (a % 2 == 1)
//	{
//		printf("�ǻ���\n");
//	}
//	else
//	{
//		printf("���ǻ���\n");
//	}
//	return 0;
//}

//100���ڵĻ���
//int main()
//{
//	int a= 1;
//	while (a<=100)
//	{
//		if (a%2!=0)
//			printf("%d ", a);
//			a = a++;
//		
//			
//	}
//	return 0;
//}



//switch ���  �����ڶ��֦�����   �����ͱ��ʽ��    switch����Ƕ��ʹ��

//swith()
//case:        //case:������������ͱ��ʽ��
//int main()
//{
//
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("��Ϣ��\n");
//			break;
//	case 2:                       //��ǰ��n��case��ӡ���һ�� ���������һ��caseд��� ǰ�治��break���� 
//		printf("��Ϣ��\n");
//		break;                            //���ұ��������
//	case 3:
//		printf("��Ϣ��\n");
//		break;
//	case 4:
//		printf("��Ϣ��\n");
//		break;
//	case 5:
//		printf("��Ϣ��\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("�������\n");      
//		break;                 //default  ����������ֲ��ʺ��������Ĺ��� ����default                
//	}
//	return 0;
//
//}


 


//ѭ����� 
//while ѭ��

//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int ch = getchar();  //getchar �ڼ����ϻ�ȡ�ַ�
//	putchar(ch);           //putchar ��ӡ
//	print("%d\n", ch);
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdio.h>
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	int passward[20] = {0};
//	printf("����������;>" );
//	scanf_s("%d", passward);  //�������������ʱ���س�ʱ�����Խ���ѻس����뻺����
//	��������ʣ��һ����\n��
//	�ȶ�ȡ'\n'
//	getchar();  �������к��пո�˷�ʽ��Ч��Ҫ��ѭ��
//	while((ch =getchar())!='\n') //ѭ������\nѭ��ֹͣ
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N): >");       //   || ����  
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//		return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//	if (ch<'0' || ch>'9')      //   || :����  
//		continue;
//	putchar(ch);
//}
//	return;
//}








// for ѭ��
// for (���ʽ;���ʽ2;���ʽ3��
//���ʽ1  ��ʼ������
//���ʽ3���жϲ���
//���ʽ3��������
//int main()
//{
//	int i = 0;
//	for (i = 1 ;i <= 10 ;i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return;
//}
 //������forѭ�������ڸı�ѭ������
//����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//
//}

//����for����ѭ�����Ʊ�����ȡֵ����ǰ�պ�����д��
//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10��ѭ��
//	//10�˴�ӡ
//	//10��Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//
//}

////forѭ������
//int main()
//{
//	for( ;;)
//	{
//		printf("ss"); //forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//		               //���ǣ� forѭ�����жϲ��֣����ʡ�ԣ����ж��������ǣ���Ϊ��
//	}                
//	return 0;
//
//}
//
//

//int main()
//{
//
//	int i = 0;
//	int j = 0;    //jû�г�ʼ�� ֻ��ѭ��10��
//	for (; i < 10; i++)
//	{
//		
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}




//do while ѭ��


//int main()
//{
//	//1-10
//	int i = 1;
//	do 
//	{
//		if (i == 5)
//			continue;
//		printf("%d",  i);
//		i++;
//	} 
//	while (i <=10);
//		{
//
//		}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret= %d", ret);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int n = 1;
//	int s = 1;
//	while (n<=10)
//	{
//		s =s*n ;
//		i = i + s;
//		n++;
//	}
//	printf("1��10���۳˺�Ϊ: %d",i);
//	return 0;
//}

////���������ҵ��ض�����7
//int main()
//{
//	int arr[] = { 1,4,14,8,6,20,7,36,3 };
//	int k = 100;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i <= sz)
//	{
//		if (arr[i] == k)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//		if (i == sz)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//} 


//���ַ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while (left<=right)
//	{
//
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ����±��ǣ� %d\n", mid);
//			break;
//		}
//	}
//	if (left >right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

//welcome  to bit
//###############
//w#############!
//we###########!!
//.........
//welcome to bit!��
#include<Windows.h>//����ʱ�����õ�ͷ�ļ�
#include<stdio.h>//ϵͳ����
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//��һ��
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ЪϢһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������ --�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼����������ֻ�ܵ�¼���Σ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���
//������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	int passward[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf_s("%s", passward);
//		if(strcmp(passward,"123456")==0)//�ȺŲ��������ж��ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("����ɹ�\n");//����ɹ���������
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("�����������������˳�����\n");
//	return 0;
//}

//��ҵ�Ƚϴ�С
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c); //����ֵʱ����%d%d�м�����������������Ϊ����������Ŷ�������������Ҳ�����ȥ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//

//��ӡ���ı�����1��100��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//շת���


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	//if (n>m)
//	//{
//	//	int tmp = 0;
//	//	tmp = m;
//	//	m = n;
//	//	n = m;
//	//}
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//��������

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=3000;year++)
//	{
//		if(year%4==0 &&year%100!=0 )
//			//if((year%4==0)&&(year%100!=0)||(year%400==0)) һ�仰��������
//		{
//			printf(" %d", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf(" %d", year);
//			count++;
//		}
//	}
//	printf("�ܹ���=�� %d\n", count);
//	return 0;
//}
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//sqrt-��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж��Ƿ�Ϊ����
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("�ж��ٸ� %d\n", count);
//	return 0;
//} 

//1-100������9 ������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i=1;i<=100 ; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//		}
//		 if (i / 10 == 9)
//		{
//			count++;
//		}
//		// 9 19 29 .....99  10��
//		//90 91 ....99       10 ��
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i < 100; i++)
//	{
//		sum +=flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum); //%lf  -- ��ӡsouble
//	return 0;
//}


//��10���������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int nt=sizeof(arr) / sizeof(arr[0]);
//	while (i <= nt)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//��ӡ�˷��ھ���

//int main()
//{
//	int i = 1;
//	//ȷ����ӡ9��
//	for (i=1;i<=9;i++)
//	{
//		int j = 1;
//		for (j = 1; j<= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j); //��ӡ��λ��ֹû�ж��� -2d�����
//		}
//		printf("\n");  
//	}
//	return 0;
//}



//��������Ϸ
//1.���Ի�����һ������� 
//2.������
//#include<stdio.h>
//#include<time.h>
//void menu()
//{
//	printf("************************************************\n");
//	printf("****** 1.play    0.exit       ******************\n");
//	printf("************************************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;//���ܲµ�����
//	//1.����һ�������
//
//	//��ʱ��������������������ʼ��
//	//time_t time(time_t *timer)
//   ret = rand()%100-1;//����1-100֮��������
//	//2.������   rand()���������
//	//printf("%d\n",ret);
//   while (1)
//   {
//	   printf("�������");
//	   scanf_s("%d", &guess);
//	   if (guess > ret)
//	   {
//		   printf("�´���\n");
//	   }
//	   else if (guess < ret)
//	   {
//		   printf("��С��\n");
//	   }
//	   else
//	   {
//		   printf("��ϲ�㣬�¶���\n");
//	   }
//   }
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//				break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	{
//
//	}
//	return 0;
//}


// goto���

//int main()
//{
//		printf("hello bit\n");
//	goto again;
//again:
//	printf("hehe\n");
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 20 };
	system("shutdown -s -t 120");
	again:
	printf("��ע�⣬��ĵ��Խ���1����֮�ڹػ���������룺��������ȡ���ػ���");
	scanf_s("%s", input);
	if(strcmp(input,"������")==0)
	{ 
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}