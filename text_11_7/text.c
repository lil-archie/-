#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int main()
////{
////	int i = 0;
////	int arr[] = { 1,2,3,4,5 };
////	for (i = 0; i <= 4; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	
////	return 0;
////}
//int main()
//{
//	int i = 0;
//	char arr[] = { 'a','4','c','d' };
//	for (i = 0; i <= 3; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//			
//
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//			printf("%p\n", &arr[i][j]);
//			
//		}
//	}
//	return 0;
//}
//void bubble_sort(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j+1])
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
//	int arr[] = { 3,4,5,6,7,8,9,2,1 };
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
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("********   1. play     ******\n");
	printf("********   0. eixt     ******\n");
	printf("*****************************\n");
}

void game()
{
	//�����һ��ߵ��Ե��������
	char board[ROW][COL];
	char ret = 0;
	//��ʼ��һ������Ϊȫ�ո�
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);

	while (1)
	{
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

//�ж���Ӯ
//�ж���Ӯ�Ĵ���Ҫ�����ң�����Ӯ�ˣ����Ӯ�ˣ����Ӯ����Ϸ������
//����Ӯ:#
//���Ӯ:*
//ƽ�֣�Q
//��Ϸ������C

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}