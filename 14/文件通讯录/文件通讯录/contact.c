#define _CRT_SECURE_NO_WARNINGS 
#include"contact.h"
#include<errno.h>
void initContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
	//����ͨѶ¼���ֻ�����Ԫ��
	//���ļ����Ѿ����ڵ���Ϣ���ص�ͨѶ¼
	LoadContact(ps);
}


void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����");
	}
	else
	{
		printf("����������");
		scanf("%s", ps->data[ps->size].name);
		printf("����������");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}


}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫɾ���˵�����: >");
	scanf("%s", name);
	//1.����Ҫɾ��������ʲôλ��
	//2.ɾ��
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		int j = ret;
		for (j = ret; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
		//ɾ��
	}

}


//����ָ���˵���Ϣ
void SearchContact(struct Contact* ps)
{
	int i = 0;
	char name[MAX_NAME];
	printf("������Ҫ���ҵ���ϵ��");
	scanf("%s", name);
	//�ҵ��˷������ֵ��±�
	//�Ҳ�������-1
	int ret = FindByName(ps, name);

	if (ret == -1)
	{
		printf("���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int ret = FindByName(ps, name);
	if (ret == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������");
		scanf("%s", ps->data[ret].name);
		printf("����������");
		scanf("%d", &(ps->data[ret].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ret].sex);
		printf("������绰");
		scanf("%s", ps->data[ret].tele);
		printf("�������ַ");
		scanf("%s", ps->data[ret].addr);

		printf("�޸����\n");
	}
}


void SortContact(struct Contact* ps)
{

}

//�����ļ�
void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("LoadContact::%s\n",strerror(errno));
		return ;
	}
	//дͨѶ¼�����ݵ��ļ���
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
	//��ȡ�ļ���
	while (fread(&tmp, sizeof(struct PeoInfo), 1, PfRead))
	{
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(PfRead);
	PfRead = NULL;
}