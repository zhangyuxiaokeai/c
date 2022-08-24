#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("************请选择对应数字，开始游戏*******************\n");
	printf("**************1.开始游戏*******************************\n");
	printf("**************0.结束游戏*******************************\n");
	printf("*******************************************************\n");

}
void game()
{
	//雷的信息存储
	//1.布置好了的雷的信息
	char mine[ROWS][COLS] = {0};//11*11
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	initBoard(mine, ROWS, COLS,'0');
	initBoard(show, ROWS, COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//扫雷
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
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}