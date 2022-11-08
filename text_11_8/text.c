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
//三子棋
//刚进入游戏

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
		printf("电脑赢了\n");
	}
	if (ret == '*')
	{
		printf("你赢了\n");
	}
	if (ret == 'Q')
		printf("平局\n");
}
//判断输赢
//判断输赢的代码要告诉我：电脑赢了？玩家赢了？玩家赢？游戏继续？
//电脑赢:#
//玩家赢:*
//平局：Q
//游戏继续：C
//void game()
//{
//	//存放玩家或者电脑的落子情况
//	char board[ROW][COL];
//	char ret = 0;
//	//初始化一下棋盘为全空格
//	init_board(board, ROW, COL);
//	print_board(board, ROW, COL);
//
//	while (1)
//	{
//		player_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		//判断输赢
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		computer_move(board, ROW, COL);
//		print_board(board, ROW, COL);
//		//判断输赢
//		ret = is_win(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '#')
//		printf("电脑赢了\n");
//	else if (ret == '*')
//		printf("玩家赢了\n");
//	else if (ret == 'Q')
//		printf("平局\n");
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
		printf("请输入:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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