#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("#######################################################\n");
	printf("#########1.����#########2.ɾ�� ########################\n");
	printf("#########3.����##########4.�ı� #######################\n");
	printf("#########5.��ʾ##########6.����########################\n");
	printf("#################0.�˳�################################\n");
	printf("#######################################################\n");
}

int main()
{

	int input = 0;
	//����ͨѶ¼
	struct Contact con; //con ����ͨѶ¼�����������10000��Ԫ�ص�����size
	//��ʼ��ͨѶ¼
	initContact(&con);
	do
	{
		menu();
		printf("��������Ҫ�ķ���:\n");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}