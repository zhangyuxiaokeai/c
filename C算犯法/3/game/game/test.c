#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("************��ѡ���Ӧ���֣���ʼ��Ϸ*******************\n");
	printf("**************1.��ʼ��Ϸ*******************************\n");
	printf("**************0.������Ϸ*******************************\n");
	printf("*******************************************************\n");

}
void game()
{
	//�׵���Ϣ�洢
	//1.���ú��˵��׵���Ϣ
	char mine[ROWS][COLS] = {0};//11*11
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	initBoard(mine, ROWS, COLS,'0');
	initBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW,COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//ɨ��
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}