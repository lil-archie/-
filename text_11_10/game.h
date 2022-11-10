#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 78
//初始化界面
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印界面
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//埋雷
void SetMine(char board[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show [ROWS][COLS], int row, int col);