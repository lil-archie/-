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
// ��ӡ100~200������
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
//// ���ѭ��������ȡ100~200֮����������ݣ�100�϶��������������i��101��ʼ
//for (i = 101; i <= 200; i++)
//{
//	//�ж�i�Ƿ�Ϊ��������[2, i)֮���ÿ������ȥ��i����ֻҪ��һ�����Ա���������������
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//
//	// ����ѭ������֮�����j��i��ȣ�˵��[2, i��֮����������ݶ����ܱ�i��������iΪ����
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
//��ӡ1000�굽2000��֮�������
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
//���������������������������Լ��
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
//			printf("���Լ��:%d",max);
//			break;
//
//		}
//		max--;
//	}
//	
//	return 0;
//
//}