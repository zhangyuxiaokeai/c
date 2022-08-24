#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void menu()
{
	printf("*********************************\n");
	printf("*****       CONTACT         *****\n");
	printf("*****   1.ADD      2.DEL    *****\n");
	printf("*****   3.MODIFY   4.SEARCH *****\n");
	printf("*****   5.SHOW     6.SORT   *****\n");
	printf("*****   7.EMPTY    0.Exit   *****\n");
	printf("*****	8.Save              *****\n");

}
void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ>>>");
		scanf("%d", &input);
		if (input < 0 && input>9)
		{
			printf("1234\n");
			perror("Ñ¡Ôñ´íÎó");
		}
		else
		{
			switch (input)
			{
			case EXIT:
				DestroyContact(&con);
				return;
			case ADD:
				AddContact(&con);
				break;
			case DEL:
				DelContact(&con);
				break;
			case MODIFY:
				ModifyContact(&con);
				break;
			case SEARCH:
				SearchContact(&con);
				break;
			case SHOW:
				ShowContact(&con);
				break;
			case SORT:
				Sort_Name(&con);
				break;
			case EMPTY:
				EmptyContact(&con);
				break;
			case SAVE:
				SaveContact(&con);
			}
		}

	} while (1);
}

int main()
{
	test();
	return 0;
}