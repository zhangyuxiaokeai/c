#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("#######################################################\n");
	printf("#########1.增加#########2.删除 ########################\n");
	printf("#########3.查找##########4.改变 #######################\n");
	printf("#########5.显示##########6.排序########################\n");
	printf("#################0.退出################################\n");
	printf("#######################################################\n");
}

int main()
{

	int input = 0;
	//创建通讯录
	struct Contact con; //con 就是通讯录，里面包含：10000的元素的数和size
	//初始化通讯录
	initContact(&con);
	do
	{
		menu();
		printf("请输入需要的服务:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
		AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
		    SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}