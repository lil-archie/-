#define  _CRT_SECURE_NO_WARNINGS 1
//�������Ա����䡢�绰��סַ
#include"contact.h"

//��ʼ��
void init_contact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}



//add
void  add_contact(Contact* pc)
{
	assert(pc);
	if (pc->sz > MAX)
		printf("ͨѶ¼�������޷����\n");
	printf("����������:>\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�;>\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������;>\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰:>\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("������סַ:>\n");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;

}



//show
void show_contact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-4s\t%-15s\t%-10s\n", "����", "�Ա�", "����", "�绰", "סַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5s\t%-4d\t%-15s\t%-10s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}

//ͨѶ¼����
int find_by_name(const Contact* pc)
{
	assert(pc);
	char findPeo[20];
	printf("��������Ҫ����/ɾ��/�޸����ݵ�����:>");
	scanf("%s", findPeo);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, findPeo)==0)
		{
			
			return i;
		}
		
			
	}
	return -1;
}

//ͨѶ¼������

void search_contact(const Contact* pc)
{
	assert(pc);
	int ret = find_by_name(pc);
	if (ret == -1)
	{
		printf("�����ڴ���\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-4s\t%-15s\t%-10s\n", "����", "�Ա�", "����", "�绰", "סַ");
		printf("%-10s\t%-5s\t%-4d\t%-15s\t%-10s\n", pc->data[ret].name, pc->data[ret].sex, pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}

}

//del

void del_contact(Contact*pc)
{
	assert(pc);
	int ret=find_by_name(pc);
	if (ret == -1)
		printf("�����ڴ���\n");
	else
	{
		int i = 0;
		for (i = ret; i <pc->sz; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		printf("ɾ���ɹ�\n");
		pc->sz -= 1;
	}
}


//modify�޸�

void modify_contact(Contact* pc)
{
	assert(pc);
	int ret = find_by_name(pc);
	if (ret == -1)
		printf("�����ڴ���\n");
	else
	{
		
		printf("����������:>\n");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�;>\n");
		scanf("%s", pc->data[ret].sex);
		printf("����������;>\n");
		scanf("%d", &(pc->data[ret].age));
		printf("������绰:>\n");
		scanf("%s", pc->data[ret].tele);
		printf("������סַ:>\n");
		scanf("%s", pc->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}

//sort



void sort_contact( Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
	}
	int k = 0;
	printf("1.���������� 2.���������� 0.�˳�\n");
	printf("��ѡ��:>");
	scanf("%d", &k);
	
	if (k == 0)
		printf("�˳��ɹ�\n");
	else if (k == 1)
	{
		Peoinfo tmp;
		int i = 0;
		
		for (i = 0; i < pc->sz - 1; i++)
		{
			int j = 0;
			for (j = 0; j < pc->sz -i- 1; j++)
			{
				if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
				{
					 tmp = pc->data[j];
					 pc->data[j] = pc->data[j + 1];
					pc->data[j + 1] = tmp;
				
					

				}
			}
		}
		
		
	}

	else if (k == 2)
	{
		int i = 0;
		Peoinfo tmp;
		for (i = 0; i < pc->sz - 1; i++)
		{
			for (int j = 0; j < pc->sz - i-1; j++)
			{
				if ((pc->data[j].age - pc->data[j + 1].age) > 0)
				{
					tmp = pc->data[j];
					pc->data[j] = pc->data[j + 1];
					pc->data[j + 1] = tmp;

				}
			}
		}
	}

}