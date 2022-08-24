#include<stdio.h>
int main(void)
{
	char i;//一个字节
	int a = 0x12345678;//4个字节
	i = a;
	if (i == 0x78)
	{
		printf("小端模式");
	}
	if (i == 0x12)
	{
		printf("大端模式");
	}
	return 0;
}

int main(void)
{
	int i = 0;
	int arr1[] = { 77,87,645,34,45,7 };
	for (i = 0; i <= arr1; i++) {

	}
	return 0;
}