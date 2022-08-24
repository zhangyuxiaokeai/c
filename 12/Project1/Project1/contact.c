#define _CRT_SECURE_NO_WARNINGS 
#include"contact.h"

void initContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*) malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return ;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
}

void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct Peoinfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容成功\n");
		}
	}
}

void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	//如果满了，啥事不干
	CheckCapacity(ps);
	//增加数组
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




void DsetroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;

}