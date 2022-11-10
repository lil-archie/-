
#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
		
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷----------\n");
	//控制列号
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷----------\n");
}
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	
	
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	int win = 0;
	
	
	while (win < (col * row - EASY_COUNT))
	{
		
		printf("输入想排查的坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] != '*')
			{
				printf("已被排查过\n");
				continue;

			}
			if (mine[x][y] == '1')
			{
				printf("很遗憾，猜到地雷了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int n = get_mine_count(mine, x,y);
				show[x][y] = n + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入非法坐标，请重新输入\n");
		}
		
		
	}
	if (win == (col * row - EASY_COUNT))
	{
		printf("恭喜你，完成排雷\n");
		DisplayBoard(mine, ROW, COL);
	}
	
	
}
