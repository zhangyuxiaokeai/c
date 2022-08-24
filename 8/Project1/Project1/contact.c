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
			//	printf("���ݳɹ�\n");
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
	printf("����������>>>");
	scanf("%s", p->data[p->sz].name);
	printf("����������>>>");
	scanf("%d", &(p->data[p->sz].age));
	printf("�������Ա�>>>");
	scanf("%s", p->data[p->sz].sex);
	printf("�������ַ>>>");
	scanf("%s", p->data[p->sz].addr);
	printf("������绰>>>");
	scanf("%s", p->data[p->sz].tele);
	p->sz++;
	printf("��ӳɹ�\n");

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
	printf("������ɾ���˵�����>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < p->sz - 1; i++)
		{
			p->data[i] = p->data[i + 1];
		}
		p->sz--;
		printf("ɾ���ɹ�\n");
	}
}

void ModifyContact(pContact p)
{
	int ret = 0;
	char name[NAME_MAX];
	printf("�������޸��˵�����>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
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
		printf("�������޸ĺ������>>>");
		scanf("%s", p->data[ret].name);
		printf("�������޸ĺ������>>>");
		scanf("%d", &(p->data[ret].age));
		printf("�������޸ĺ���Ա�>>>");
		scanf("%s", p->data[ret].sex);
		printf("�������޸ĺ�ĵ�ַ>>>");
		scanf("%s", p->data[ret].addr);
		printf("�������޸ĺ�ĵ绰>>>");
		scanf("%s", p->data[ret].tele);

		printf("�޸ĳɹ�\n");
	}
}

void SearchContact(pContact p)
{
	int ret = 0;
	char name[NAME_MAX];
	printf("����������˵�����>>>");
	scanf("%s", name);
	ret = FindEntry(name, p);
	if (ret == -1)
	{
		printf("û�и���ϵ��\n");
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
		printf("û���κ���ϵ��");
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
		printf("û����ϵ��\n");
	}
	else
	{
		free(p->data);
		p->sz = 0;
		p->capacity = 0;
		p->data = NULL;
		printf("��ճɹ�\n");
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


void Sort_Name(pContact p)   //����������������ϵ��
{
	int i = 0;
	int j = 0;
	int flag = 0;
	printf("�����ֽ�������(a-->z)\n");
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
