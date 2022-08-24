#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//int main()
//{
//	//打开文件test.txt
//	FILE* pf=fopen("test","w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fclose(pf);//关闭文件
//	pf = NULL;
//	}
//	return 0;
//}

//
//int main()
//{
//	FILE* pfWrite=fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc("b", pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//读文件
//int main()
//{
//	FILE* pfRead=fopen("test.txt", "w");
//	if (pfRead == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);//读一行
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hello,\n",pf);
//	fputs("world\n",pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	//从键盘上读一行文本信息
//	//fgets(buf,1024,stdin);//从标准输入读取
//	//fputs(buf, stdout);//输出到标准输出流
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//
//};
//
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf,"%d %f %s", &(s.n), &(s.score), s.arr);
//	printf(" %d %f %s\n", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//
//};
//
//int main()
//{
//
//	struct S s = { 100,3.13f,"abcder" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


//struct S {
//	char name;
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20,22.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if(pf==NULL)
//	{
//		return 0;
//	}fwrite(&s, sizeof(struct S),1, pf);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}


//struct S {
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S tmp={0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//以二进制形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name,tmp.age,tmp.score);
//	fclose(pf);
//	pf == NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//1.定位文件指针
//	fseek(pf,5, SEEK_CUR);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//1.定位文件指针
//	//fseek(pf, 5, SEEK_CUR);
//	fgetc(pf);
//	int pos = ftell(pf);//定位文件指针对起始的偏移量
//	//printf("%d\n", pos);
//	rewind(pf); //让文件回到起始位置
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//feof();//EOF -end of file --文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


int main()
{
	//strerror -把错误对应的错误信息的字符串地址返回
// printf("%s",strerror(errno));
	FILE* pf = fopen("test2.txt", "r");
	if (pf == NULL)
	{
		perror("hehe");
		return 0;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}