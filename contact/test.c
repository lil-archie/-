#define  _CRT_SECURE_NO_WARNINGS 1

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
		print_menu();
		scanf("%d", &input);
		switch (input)
		{
		    case 1:
				//���Ӻ���
				add_contact(&con);
				break;
			case 2:
				//Ѱ��
				search_contact(&con);
				break;
			case 3:
				//ɾ����ϵ��
				del_contact(&con);
				break;
			case 4:
				//�޸���ϵ��
				modify_contact(&con);
				break;
			case 5:
				//չʾͨѶ¼
				show_contact(&con);
			
				break;
			case 6:
				init_contact(&con);
				printf("����ɹ�\n");
				break;
			case 7:
				sort_contact(&con);
				break;
			case 0:
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