#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void bubble_sort(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				char tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,4,1,6,2,5,9,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}
//������
//�ս�����Ϸ

#include"game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL];
	init_board(board,ROW,COL);
	print_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret= is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


	}
	if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	if (ret == '*')
	{
		printf("��Ӯ��\n");
	}
	if (ret == 'Q')
		printf("ƽ��\n");
}
//�ж���Ӯ
//�ж���Ӯ�Ĵ���Ҫ�����ң�����Ӯ�ˣ����Ӯ�ˣ����Ӯ����Ϸ������
//����Ӯ:#
//���Ӯ:*
//ƽ�֣�Q
//��Ϸ������C
//void game()
//{
//	//�����һ��ߵ��Ե��������
//	char board[ROW][COL];
//	char ret = 0;
//	//��ʼ��һ������Ϊȫ�ո�
//	init_board(board, ROW, COL);
//	print_board(board, ROW, COL);
//
//	while (1)
//	{
//		player_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		//�ж���Ӯ
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		computer_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		//�ж���Ӯ
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '#')
//		printf("����Ӯ��\n");
//	else if (ret == '*')
//		printf("���Ӯ��\n");
//	else if (ret == 'Q')
//		printf("ƽ��\n");
//}
void menu()
{
	printf("***************\n");
	printf("****1.play ****\n");
	printf("****0.exit ****\n");
	printf("***************\n");

}
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int )time(NULL));
		menu();
		printf("������:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//
//int main()
//{
//	test();
//	return 0;
//}