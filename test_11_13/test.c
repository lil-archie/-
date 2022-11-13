#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int flag = 1;
//	int count = 0;
//	while (flag!= 0)
//	{
//		if ((n & flag) !=0)
//		{
//			count++;
//		}
//		flag <<= 1;
//	}
//	printf("%d", count);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = a ^ b;
//	int flag = 1;
//	int count = 0;
//	while (flag != 0)
//	{
//		if ((ret & flag) != 0)
//		{
//			count++;
//		}
//		flag <<= 1;
//	}
//	printf("%d", count);
//	
//}
void Printbit(int num)
{
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d", ((num >> i) & 1));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Printbit(n);
	return 0;
}