#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


int check_capacity(pContact p)
{
	if (p->sz == p->capacity)
	{
		PeoInfo*tmp = realloc(p->data, (p->capacity + DEFAULT_INC) * sizeof(PeoInfo));
		if (tmp != NULL)
		{
			p->data = tmp;
			p->capacity += DEFAULT_INC;
			//	printf("增容成功\n");
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void LoadContact(pContact p)
{
	FILE *pf = fopen("contact.dat", "rb");
	PeoInfo tmp = { 0 };
	if (pf == NULL)
	{
		perror("open contact fail");
		exit(EXIT_FAILURE);
	}
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		check_capacity(p);
		p->data[p->sz++] = tmp;
	}
	fclose(pf);
	pf = NULL;
}

void InitContact(pContact p)
{
	assert(p != NULL);
	p->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));

	if (p->data == NULL)
	{
		//printf("%s\n",strerror(errno));
		perror("InitContact:malloc");
		exit(EXIT);
	}
	memset(p->data, 0, DEFAULT_SZ * sizeof(PeoInfo));
	p->sz = 0;
	p->capacity = DEFAULT_SZ;
	LoadContact(p);
}

void AddContact(pContact p)
{
	if (check_capacity(p))
	{
		return;
	}
	printf("请输入姓名>>>");
	scanf("%s", p->data[p->sz].name);
	printf("请输入年龄>>>");
	scanf("%d", &(p->data[p->sz].age));
	printf("请输入性别>>>");
	scanf("%s", p->data[p->sz].sex);
	printf("请输入地址>>>");
	scanf("%s", p->data[p->sz].addr);
	printf("请输入电话>>>");
	scanf("%s", p->data[p->sz].tele);
	p->sz++;
	printf("添加成功\n");

}

static int FindEntry(char* c, pContact p)
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(c, p->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(pContact p)
{
	char name[NAME_MAX];
	int ret = 0;
	printf("请输入删除人的姓名>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < p->sz - 1; i++)
		{
			p->data[i] = p->data[i + 1];
		}
		p->sz--;
		printf("删除成功\n");
	}
}

void ModifyContact(pContact p)
{
	int ret = 0;
	char name[NAME_MAX];
	printf("请输入修改人的姓名>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("\n\t\tContact\n");
		printf("%5s\t%s\t%2s\t%5s\t%5s\t\n",
			"name", "age", "sex", "addr", "tele");
		printf("%5s\t%d\t%3s\t%5s\t%5s\t\n",
			p->data[ret].name,
			p->data[ret].age,
			p->data[ret].sex,
			p->data[ret].addr,
			p->data[ret].tele);
		printf("请输入修改后的姓名>>>");
		scanf("%s", p->data[ret].name);
		printf("请输入修改后的年龄>>>");
		scanf("%d", &(p->data[ret].age));
		printf("请输入修改后的性别>>>");
		scanf("%s", p->data[ret].sex);
		printf("请输入修改后的地址>>>");
		scanf("%s", p->data[ret].addr);
		printf("请输入修改后的电话>>>");
		scanf("%s", p->data[ret].tele);

		printf("修改成功\n");
	}
}

void SearchContact(pContact p)
{
	int ret = 0;
	char name[NAME_MAX];
	printf("请输入查找人的姓名>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("没有该联系人\n");
	}
	else
	{
		printf("\n\t\tContact\n");
		printf("%5s\t%s\t%2s\t%5s\t%5s\t\n",
			"name", "age", "sex", "addr", "tele");
		printf("%5s\t%d\t%3s\t%5s\t%5s\t\n",
			p->data[ret].name,
			p->data[ret].age,
			p->data[ret].sex,
			p->data[ret].addr,
			p->data[ret].tele);
	}

}

void ShowContact(const pContact p)
{
	int i = 0;
	int ret = 0;
	for (i=0;i<p->sz;i++)
	{
		if (p->data[0].name == NULL)
		{
			 ret = 1;
		}
	}
	if(ret == 1)
	{
		printf("没有任何联系人");
	}
	else
	{
	printf("\n\t\tContact\n");
	printf("%5s\t%s\t%2s\t%5s\t%5s\t\n",
		"name", "age", "sex", "addr", "tele");

	for (i = 0; i < p->sz; i++)
	{
		printf("%5s\t%d\t%3s\t%5s\t%5s\t\n",
			p->data[i].name,
			p->data[i].age,
			p->data[i].sex,
			p->data[i].addr,
			p->data[i].tele);
	}
	}

}

void EmptyContact(pContact p)
{
	int i = 0;
	if (p->sz == 0)
	{
		printf("没有联系人\n");
	}
	else
	{
		free(p->data);
		p->sz = 0;
		p->capacity = 0;
		p->data = NULL;
		printf("清空成功\n");
	}
}

void SortContact(char* c,pContact p)
{
	int i ,j = 0;
	PeoInfo  tmp ;
	for (i=0;i<p->sz;i++)
	{
		for (j=0;j<p->sz;j++)
		{
			if (p->data[j].age < p->data[j+1].age)
			{
				tmp = p->data[j];
				p->data[j] = p->data[j+1];
				p->data[j+1] = tmp;
			}
		}
	}
}


void Sort_Name(pContact p)   //以名字排序所有联系人
{
	int i = 0;
	int j = 0;
	int flag = 0;
	printf("以名字进行排序(a-->z)\n");
	while (1)
	{
		flag = 0;
		for (j = 0; j < p->sz - 1; j++)
		{
			if (strcmp(p->data[j].name, p->data[j + 1].name) > 0)
			{
				PeoInfo tmp = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

void SaveContact(pContact p)
{
	FILE *pf = fopen("contact.dat", "w");
	int i = 0;
	if (pf == NULL)
	{
		perror("open contact fail");
		exit(EXIT_FAILURE);
	}
	for (i = 0; i < p->sz; i++)
	{
		fwrite(&(p->data[i]), sizeof(PeoInfo), 1, pf);
	}
	printf("Save success\n");
	fclose(pf);
	pf = NULL;
}

void DestroyContact(pContact p)
{
	free(p->data);
	p->capacity = 0;
	p->data = NULL;
	p->sz = 0;
}
