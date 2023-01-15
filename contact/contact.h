#define  _CRT_SECURE_NO_WARNINGS 1
//contact.h
#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
#define NAME_MAX 20
#define SEX_MAX 8
#define TELE_MAX 15
#define ADDR_MAX 20
#define MAX 100
#define DEFAULT_NUM 3
#define INCRE_NUM 2



typedef struct Peoinfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}Peoinfo;

typedef struct Contact
{
	Peoinfo* data;
	int sz;
	int capicity;
}Contact;



//初始化/清空
void init_contact(Contact* pc);


//通讯录中增加
void  add_contact(Contact* pc);

//show通讯录
void show_contact( const Contact* pc);

//通讯录寻找人
int find_by_name(const Contact* pc);

//通讯录里search

void search_contact(const Contact* pc);

//删除联系人
void del_contact(Contact* pc);

//修改联系人

void modify_contact(Contact* pc);

//排序
void sort_contact(Contact* pc);

//释放通讯录的堆区的内容
void free_contact(Contact*pc);

//保存联系人的内容到文件中
void save_contact(Contact*pc);

//加载联系人

void load_contact(Contact* pc);
