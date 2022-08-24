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

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size; //记录当前已经有的元素个数
};


//申明函数
//初始化通讯录
void initContact(struct Contact* ps);
//增加联系人
void AddContact(struct Contact* ps);
//打印通讯录中的信息
void ShowContact(const struct Contact* ps);
//删除
void DelContact(struct Contact* ps);
//查找指定人的信息
void SearchContact(struct Contact* ps);
//修改指定联系人
void ModifContact(struct Contact* ps);
//
void SortContact(struct Contact* ps);
//保存文件
void SaveContact(struct Contact* ps);
//加载文件中的信息到同徐璐
void LoadContact(struct Contact* ps);