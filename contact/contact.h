#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
#define NAME_MAX 20
#define SEX_MAX 8
#define TELE_MAX 15
#define ADDR_MAX 20
#define MAX 100



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
	Peoinfo data[MAX];
	int sz;
}Contact;



//��ʼ��/���
void init_contact(Contact* pc);


//ͨѶ¼������
void  add_contact(Contact* pc);

//showͨѶ¼
void show_contact( const Contact* pc);

//ͨѶ¼Ѱ����
int find_by_name(const Contact* pc);

//ͨѶ¼��search

void search_contact(const Contact* pc);

//ɾ����ϵ��
void del_contact(Contact* pc);

//�޸���ϵ��

void modify_contact(Contact* pc);

//����
void sort_contact(Contact* pc);
