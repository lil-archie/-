#define  _CRT_SECURE_NO_WARNINGS 1
//test.c
#include"contact.h"
//ʵ��һ��ͨѶ¼��
//
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//
//�ṩ������
//
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��
enum options
{
	EXIT,//0
	ADD,//1
	SEARCH,//2
	DEL,//3
	MODIFY,//4
	SHOW,//5
	EMPTY,//6
	SORT //7
};
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
	//��ʼ��ͨѶ¼
	init_contact(&con);
	do
	{
		//��ӡ�˵�
		print_menu();
		scanf("%d", &input);
		switch (input)
		{
		    case ADD:
				//���Ӻ���
				add_contact(&con);
				break;
			case SEARCH:
				//Ѱ��
				search_contact(&con);
				break;
			case DEL:
				//ɾ����ϵ��
				del_contact(&con);
				break;
			case MODIFY:
				//�޸���ϵ��
				modify_contact(&con);
				break;
			case SHOW:
				//չʾͨѶ¼
				show_contact(&con);
			
				break;
			case EMPTY:
				init_contact(&con);
				printf("����ɹ�\n");
				break;
			case SORT:
				sort_contact(&con);
				break;
			case EXIT:
				save_contact(&con);
				free_contact(&con);
				printf("�˳��ɹ�\n");
				break;
			default :
				printf("��������\n");
				break;
			

		}
		

	} while (input);
}


int main()
{
	test();
	return 0;
}