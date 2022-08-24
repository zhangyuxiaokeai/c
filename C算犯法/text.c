#include <stdio.h>

//int main()
//{
//	int a = 0;
//	;//只有一个分号是一个空语句
//	return 0;
//}



//分支语句

//int main()
//{
//	int age = 20;
//	if (age<18)    //if 可以单独使用
//		printf("未成年\n", age);
//	else
//		printf("成年\n", age);
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int age = 1000;
//	if (age <= 18)
//		printf("未成年\n");
//	else if (age > 18 && age <= 28)
//		printf("青少年年\n");
//	else if (age > 28 && age <= 50)
//		printf("壮年\n");
//	else if (age > 50 && age <= 90)
//		printf("老年年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}
// 若要一个if输出多个结果  则要   if{   } else{}

//写法二
//int main()
//{
//	int age = 50;
//	if (age <= 18)
//		printf("未成年\n");
//	else
//	{
//		 if (age > 18 && age <= 28)
//		printf("青少年年\n");
//		else if (age > 28 && age <= 50)
//		printf("壮年\n");
//		else if (age > 50 && age <= 90)
//		printf("老年\n");
//	}
//	return 0;
//}


//随便输入一个数判断是不是基数
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入数字： ");
//	scanf_s("%d",&a);
//	if (a % 2 == 1)
//	{
//		printf("是基数\n");
//	}
//	else
//	{
//		printf("不是基数\n");
//	}
//	return 0;
//}

//100以内的基数
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



//switch 语句  适用于多分枝的语句   是整型表达式子    switch允许嵌套使用

//swith()
//case:        //case:后面必须是整型表达式子
//int main()
//{
//
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//			printf("休息日\n");
//			break;
//	case 2:                       //若前面n个case打印结果一样 可以在最后一个case写输出 前面不加break跳出 
//		printf("休息日\n");
//		break;                            //如右边这个例子
//	case 3:
//		printf("休息日\n");
//		break;
//	case 4:
//		printf("休息日\n");
//		break;
//	case 5:
//		printf("休息日\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");      
//		break;                 //default  若输入的数字不适合上面代码的规则 可有default                
//	}
//	return 0;
//
//}


 


//循环语句 
//while 循环

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
//	int ch = getchar();  //getchar 在键盘上获取字符
//	putchar(ch);           //putchar 打印
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
//	printf("请输入密码;>" );
//	scanf_s("%d", passward);  //当密码完成输入时按回车时，电脑将会把回车读入缓冲区
//	缓冲区还剩下一个“\n”
//	先读取'\n'
//	getchar();  若密码中含有空格此方式无效需要用循环
//	while((ch =getchar())!='\n') //循坏读到\n循环停止
//	{
//		;
//	}
//	printf("请确认（Y/N): >");       //   || 或者  
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确任\n");
//	}
//		return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//	if (ch<'0' || ch>'9')      //   || :或者  
//		continue;
//	putchar(ch);
//}
//	return;
//}








// for 循环
// for (表达式;表达式2;表达式3）
//表达式1  初始化部分
//表达式3并判断部分
//表达式3调整部分
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
 //不可再for循环体制内改变循环变量
//例如
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

//建议for语句的循环控制变量的取值采用前闭后开区间写法
//例如
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次循环
//	//10此打印
//	//10个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//
//}

////for循环变种
//int main()
//{
//	for( ;;)
//	{
//		printf("ss"); //for循环的初始化，调整，判断都可以省略
//		               //但是： for循环的判断部分，如果省略，那判断条件就是：恒为真
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
//	int j = 0;    //j没有初始化 只会循环10次
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




//do while 循环


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
//	printf("1到10的累乘和为: %d",i);
//	return 0;
//}

////在数组中找到特定数字7
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
//			printf("找不到\n");
//		}
//	}
//	return 0;
//} 


//二分法查找
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
//			printf("找到了下标是： %d\n", mid);
//			break;
//		}
//	}
//	if (left >right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

//welcome  to bit
//###############
//w#############!
//we###########!!
//.........
//welcome to bit!、
#include<Windows.h>//控制时间引用的头文件
#include<stdio.h>//系统命令
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);//第一种
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//歇息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数 --清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录场景，并且只能登录三次，（只允许输入三次密码，如果密码正确则提示登录成功，
//如果三次均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	int passward[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf_s("%s", passward);
//		if(strcmp(passward,"123456")==0)//等号不能用来判断字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("输入成功\n");//输入成功跳出程序
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均输入错误，退出程序\n");
//	return 0;
//}

//作业比较大小
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c); //输入值时建议%d%d中间别放入其他东西，因为计算机会连着读，把其他东西也读入进去
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

//打印三的倍数（1到100）
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

//辗转相除


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

//计算润年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=3000;year++)
//	{
//		if(year%4==0 &&year%100!=0 )
//			//if((year%4==0)&&(year%100!=0)||(year%400==0)) 一句话概括所有
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
//	printf("总共有=》 %d\n", count);
//	return 0;
//}
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	//sqrt-开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断是否为素数
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
//	printf("有多少个 %d\n", count);
//	return 0;
//} 

//1-100所有有9 的数字
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
//		// 9 19 29 .....99  10个
//		//90 91 ....99       10 个
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
//	printf("%lf\n", sum); //%lf  -- 打印souble
//	return 0;
//}


//求10个数的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//最大值
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

//打印乘法口诀表

//int main()
//{
//	int i = 1;
//	//确定打印9行
//	for (i=1;i<=9;i++)
//	{
//		int j = 1;
//		for (j = 1; j<= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j); //打印两位防止没有对齐 -2d左对齐
//		}
//		printf("\n");  
//	}
//	return 0;
//}



//猜数字游戏
//1.电脑会生成一个随机数 
//2.猜数字
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
//	int guess = 0;//接受猜的数字
//	//1.生成一个随机数
//
//	//拿时间戳设置随机数的生成起始点
//	//time_t time(time_t *timer)
//   ret = rand()%100-1;//生成1-100之间的随机数
//	//2.猜数字   rand()生成随机数
//	//printf("%d\n",ret);
//   while (1)
//   {
//	   printf("请猜数字");
//	   scanf_s("%d", &guess);
//	   if (guess > ret)
//	   {
//		   printf("猜大了\n");
//	   }
//	   else if (guess < ret)
//	   {
//		   printf("猜小了\n");
//	   }
//	   else
//	   {
//		   printf("恭喜你，猜对了\n");
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
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//				break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	{
//
//	}
//	return 0;
//}


// goto语句

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
	printf("请注意，你的电脑将在1分钟之内关机，如果输入：我是猪，就取消关机：");
	scanf_s("%s", input);
	if(strcmp(input,"我是猪")==0)
	{ 
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}