#define _CRT_SECURE_NO_WARNINGS 
#include"contact.h"
#include<errno.h>
void initContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
	//设置通讯录最初只有零个元素
	//把文件中已经存在的信息加载到通讯录
	LoadContact(ps);
}


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加");
	}
	else
	{
		printf("请输入名字");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}


}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr
			);
		}
	}
}


static int FindByName(struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字: >");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	//2.删除
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = ret;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
		//删除
	}

}


//查找指定人的信息
void SearchContact(struct Contact* ps)
{
	int i = 0;
	char name[MAX_NAME];
	printf("请输入要查找的联系人");
	scanf("%s", name);
	//找到了返回名字的下标
	//找不到返回-1
	int ret = FindByName(ps, name);

	if (ret == -1)
	{
		printf("查找的人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].age,
			ps->data[ret].sex,
			ps->data[ret].tele,
			ps->data[ret].addr);
	}
}


void ModifContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入名字");
		scanf("%s", ps->data[ret].name);
		printf("请输入年龄");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入性别");
		scanf("%s", ps->data[ret].sex);
		printf("请输入电话");
		scanf("%s", ps->data[ret].tele);
		printf("请输入地址");
		scanf("%s", ps->data[ret].addr);

		printf("修改完成\n");
	}
}


void SortContact(struct Contact* ps)
{

}

//保存文件
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("LoadContact::%s\n",strerror(errno));
		return ;
	}
	//写通讯录中数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct  PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}


void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* PfRead = fopen("contact.dat", "rb");
	if (PfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));

	}
	//读取文件，
	while (fread(&tmp, sizeof(struct PeoInfo), 1, PfRead))
	{
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(PfRead);
	PfRead = NULL;
}