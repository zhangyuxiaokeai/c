#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//int main()
//{
//	//���ļ�test.txt
//	FILE* pf=fopen("test","w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fclose(pf);//�ر��ļ�
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
//	//д�ļ�
//	fputc("b", pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


//���ļ�
//int main()
//{
//	FILE* pfRead=fopen("test.txt", "w");
//	if (pfRead == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	//�ر��ļ�
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
//	//���ļ�
//	fgets(buf, 1024, pf);//��һ��
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
//	//�Ӽ����϶�һ���ı���Ϣ
//	//fgets(buf,1024,stdin);//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);//�������׼�����
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
//	//��ʽ������������
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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
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
//	struct S s = { "����",20,22.5 };
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
//	//�Զ�������ʽ���ļ�
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
//	//1.��λ�ļ�ָ��
//	fseek(pf,5, SEEK_CUR);
//	//2.��ȡ�ļ�
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
//	//1.��λ�ļ�ָ��
//	//fseek(pf, 5, SEEK_CUR);
//	fgetc(pf);
//	int pos = ftell(pf);//��λ�ļ�ָ�����ʼ��ƫ����
//	//printf("%d\n", pos);
//	rewind(pf); //���ļ��ص���ʼλ��
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//feof();//EOF -end of file --�ļ�������־
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
	//strerror -�Ѵ����Ӧ�Ĵ�����Ϣ���ַ�����ַ����
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