#define  _CRT_SECURE_NO_WARNINGS 1
//姓名、性别、年龄、电话、住址
#include"contact.h"

//初始化
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
		printf("通讯录已满，无法添加\n");
	printf("请输入姓名:>\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别;>\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄;>\n");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话:>\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址:>\n");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;

}



//show
void show_contact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-5s\t%-4s\t%-15s\t%-10s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s\t%-5s\t%-4d\t%-15s\t%-10s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}
}

//通讯录找人
int find_by_name(const Contact* pc)
{
	assert(pc);
	char findPeo[20];
	printf("请输入需要搜索/删除/修改数据的名字:>");
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

//通讯录中搜索

void search_contact(const Contact* pc)
{
	assert(pc);
	int ret = find_by_name(pc);
	if (ret == -1)
	{
		printf("不存在此人\n");
	}
	else
	{
		printf("%-10s\t%-5s\t%-4s\t%-15s\t%-10s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-10s\t%-5s\t%-4d\t%-15s\t%-10s\n", pc->data[ret].name, pc->data[ret].sex, pc->data[ret].age, pc->data[ret].tele, pc->data[ret].addr);
	}

}

//del

void del_contact(Contact*pc)
{
	assert(pc);
	int ret=find_by_name(pc);
	if (ret == -1)
		printf("不存在此人\n");
	else
	{
		int i = 0;
		for (i = ret; i <pc->sz; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		printf("删除成功\n");
		pc->sz -= 1;
	}
}


//modify修改

void modify_contact(Contact* pc)
{
	assert(pc);
	int ret = find_by_name(pc);
	if (ret == -1)
		printf("不存在此人\n");
	else
	{
		
		printf("请输入姓名:>\n");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别;>\n");
		scanf("%s", pc->data[ret].sex);
		printf("请输入年龄;>\n");
		scanf("%d", &(pc->data[ret].age));
		printf("请输入电话:>\n");
		scanf("%s", pc->data[ret].tele);
		printf("请输入住址:>\n");
		scanf("%s", pc->data[ret].addr);
		printf("修改成功\n");
	}
}

//sort



void sort_contact( Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法排序\n");
	}
	int k = 0;
	printf("1.按名字排序 2.按年龄排序 0.退出\n");
	printf("请选择:>");
	scanf("%d", &k);
	
	if (k == 0)
		printf("退出成功\n");
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