#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//void init_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			 board[i][j] = ' ';
//		}
//	}
//}
void print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}

}
//void print_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			//printf("---|---|---\n");
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//			printf("\n");
//		}
//	}
//}
void player_move(char board[ROW][COL], int row, int col)
{
	printf("�������\n");
	while (1)
	{
		printf("������Ҫ���������:>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		//����Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�����������\n");
			}
		}
		else//����Ƿ�
		{
			printf("����Ƿ�\n");
		}
	}
}

//void player_move(char board[ROW][COL], int row, int col)
//{
//	printf("�������\n");
//	while (1)
//	{
//		printf("�������Ӧ���꣺\n");
//		int i = 0;
//		int j = 0;
//		scanf("%d %d", &i, &j);
//		if (i >= 1 && i <= row && j >=1 && j <= col)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("�������Ѿ���ռ��\n");
//			}
//		}
//		else
//		{
//			printf("����Ƿ�����\n");
//		}
//
//		
//	}
//	
//}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
		
	}
}
//void computer_move(char board[ROW][COL], int row, int col)
//{
//	printf("��������:\n");
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
int is_full(char board[ROW][COL],int row,int col)
{
	int i = 0;
    int j = 0;
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
 /*static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}*/
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	//�ж�����
	
	for (i= 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')

	{
		return board[1][1];
	}
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
    return 'C';
}
//char is_win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	//�ж�����
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][0];
//		}
//	}
//	//�ж�����
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
//		{
//			return board[0][i];
//		}
//	}
//	//�Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	//ƽ�֣�
//	if (is_full(board, row, col) == 1)
//	{
//		return 'Q';
//	}
//
//
//	//����
//	//û����һ��ߵ���Ӯ��Ҳû��ƽ�֣���Ϸ����
//	return 'C';
//}
