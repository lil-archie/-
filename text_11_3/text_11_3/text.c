#define  _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>


void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}
//n代表盘子的个数
//pos1代表柱子a
//pos2代表柱子b
//pos3代表柱子c
void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else

	{
		hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		hanoi(n - 1, pos2, pos1, pos3);


	}


}


int main()
{
	char pos1 = 'A';
	char pos2 = 'B';
	char pos3 = 'C';
	int n = 64;


	hanoi(n,pos1,pos2,pos3);
	
	return 0;
}