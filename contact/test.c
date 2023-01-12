#define  _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"
//实现一个通讯录；
//
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//
//提供方法：
//
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人

void print_menu()
{
	printf("*************************************************\n");
	printf("******** 1.add           2.search          ******\n");
	printf("******** 3.del           4.modify          ******\n");
	printf("******** 5.show          6.empty           ******\n");
	printf("******** 7.sort          0.exit            ******\n");
	printf("*************************************************\n");
	


}
void test()
{
	int input = 0;
	Contact con;
	//初始化通讯录
	init_contact(&con);
	do
	{
		print_menu();
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				//增加函数
				add_contact(&con);
				break;
			case 2:
				//寻找
				search_contact(&con);
				break;
			case 3:
				//删除联系人
				del_contact(&con);
				break;
			case 4:
				//修改联系人
				modify_contact(&con);
				break;
			case 5:
				//展示通讯录
				show_contact(&con);
			
				break;
			case 6:
				init_contact(&con);
				printf("清除成功\n");
				break;
			case 7:
				sort_contact(&con);
				break;
			case 0:
				printf("退出成功\n");
				break;
			default :
				printf("输入有误\n");
				break;
			

		}
		

	} while (input);
}


int main()
{
	test();
	return 0;
}