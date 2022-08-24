
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <malloc.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 30
#define TELE_MAX 11
#define DEFAULT_SZ 1
#define DEFAULT_INC 1
enum
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SHOW,
	SORT,
	EMPTY,
	SAVE,
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

typedef struct Contact
{
	//PeoInfo  data[MAX];
	PeoInfo  *data;  //动态内存开辟
	int sz;
	int capacity;  //用来维护动态内存开辟的容量
}Contact, *pContact;

void InitContact(pContact p);
void AddContact(pContact p);
void DelContact(pContact p);
void ModifyContact(pContact p);
void SearchContact(pContact p);
void EmptyContact(pContact p);
void DestroyContact(pContact p);
//void SortInfo(pContact p);
void Sort_Name(pContact p);

void LoadContact(pContact p);
void SaveContact(pContact p);

void ShowContact(const pContact p);
static int Find(pContact p);
#endif  //__CONTACT_H__