
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
//1. 完成扫雷游戏代码
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);

}
//void game()
//{
//	//1. 需要存放布置好的雷的信息，存放排查出的雷的信息，我们需要2个二维数组
//	//2. 排查坐标的时候，为了防止坐标越界，我们给数组的行增加2行，列增加了2列
//	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
//	char show[ROWS][COLS] = { 0 };//排查出的雷的信息
//	//初始化棋盘
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//打印棋盘
//	DisplayBoard(show, ROW, COL);
//
//	//布置雷
//	SetMine(mine, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
//	//排查雷
//	FindMine(mine, show, ROW, COL);
//}

void menu()
{
	printf("**************\n");
	printf("**** 1.play***\n");
	printf("**** 0.exit***\n");
	printf("**************\n");

}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		
		scanf("%d", &input);
		
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
		
		

	
	} while(input);
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
//			printf("选择错误，重新选择!\n");
//			break;
//		}
//	} while (input);
//}
int main()
{
	test();
	return 0;
}