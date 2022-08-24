#define _CRT_SECURE_NO_WARNINGS 

#define  MAX 1000

#define MAX_NAME 20

#define MAX_SEX 5

#define MAX_TELE 12
#define MAX_ADDR 30


#include<string.h>
#include<stdio.h>



enum Option
{

	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};







struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size; //��¼��ǰ�Ѿ��е�Ԫ�ظ���
};


//��������
//��ʼ��ͨѶ¼
void initContact(struct Contact* ps);
//������ϵ��
void AddContact(struct Contact* ps);
//��ӡͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��
void DelContact(struct Contact* ps);
//����ָ���˵���Ϣ
void SearchContact(struct Contact* ps);
//�޸�ָ����ϵ��
void ModifContact(struct Contact* ps);
//
void SortContact(struct Contact* ps);
//�����ļ�
void SaveContact(struct Contact* ps);
//�����ļ��е���Ϣ��ͬ���
void LoadContact(struct Contact* ps);