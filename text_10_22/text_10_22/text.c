#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main1()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		d = a;
		a = b;
		d = b;
	}
	if (a < c)
	{
		d = a;
		a = c;
		c = d;

	}
	if (b < c)
	{
		d = b;
		b = c;
		c = d;
	}
	printf("%d %d %d", a, b, c);
	return 0;

}
//	
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        d = a;
//        a = b;
//        b = d;
//    }
//    if (a < c)
//    {
//        d = a;
//        a = c;
//        c = d;
//    }
//    if (b < c)
//    {
//        d = b;
//        b = c;
//        c = d;
//    }
//    printf("a=%d b=%d c=%d\n", a, b, c);
//    return 0;
//}

//	return 0;
//}
// 打印100~200的素数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i =0;
//	for (a = 100; a<=200; a++)
//	{
//		for (i = 2; i < a; i++)
//		{
//			if (a % i == 0)
//			{
//				break;
//			}
//			if (a == i)
//			{
//				printf("%d\n", a);
//			}
//		}
//	}
//	
//}
// int main()
//{
//int i = 0;
//int count = 0;
//
//
//// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
//for (i = 101; i <= 200; i++)
//{
//	//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//
//	// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
//	if (j == i)
//	{
//		count++;
//		printf("%d ", i);
//	}
//}
//
//
//printf("\ncount = %d\n", count);
//return 0;
//}
 //
//#include<stdio.h>
// int main()
// {
//	 int i = 0;
//	 int j = 0;
//	 for (i = 101; i <= 200; i++)
//	 {
//		 for (j = 2; j < i; j++)
//		 {
//			 if (i % j == 0)
//			 {
//				 break;
//			 }
//			 
//		 }
//		 if (i == j)
//		 {
//			 printf("%d\n", i);
//		 }
//		 
//	 }
//	 return 0;
// }
//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//
//	
//	return 0;
//}
//给定两个数，求这两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int Max = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	if (a % b != 0)
//	{
//		Max = a % b;
//		printf("%d\n", Max);
//	}
//	if (a % b == 0)
//	{
//		if (a > b)
//		{
//			printf("%d\n", b);
//		}
//		else
//			printf("%d\n", a);
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int max = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	if (m > n)
//	{
//		max = n;
//	}
//	else {
//		max = m;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数:%d",max);
//			break;
//
//		}
//		max--;
//	}
//	
//	return 0;
//
//}