#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 1; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for()
//        }
//
//    }
//
//    return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		//��
//		for (i = 0; i < n; i++)
//		{
//			//һ��
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//		{
//			//һ��
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                if (j == i)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
// int i = 0;
// for (i = n; i > 0; i--)
//{
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		printf(" ");
//	}
//	for (j = 0; j <= n - i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
////��n+1��
//for (i = n + 1; i > 0; i--)
//{
//	int j = 0;
//	for (j = 0; j < n + 1 - i; j++)
//	{
//		printf(" ");
//	}
//	for (j = 0; j < i; j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//}
// return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//
//            for (j = 0; j < n - i; j++)
//            {
//                if (j == n - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//�ҵ������ǹؼ�������һ����б�ܺͷ�б��
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)  //��ѭ��Ϊ��
//        {
//            for (int j = 0; j < n; j++) //��ѭ��Ϊ��
//            {
//                if (i == j || i + j == n - 1)
//                    //��ؼ��ĵط�����б��Ϊ[i][i]����*�� ��б��Ϊ[i][n-1-j]����*��һ�д�ӡ1����2��*
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n"); //��ӡ��һ�У�����
//        }
//    }
//    return 0;
//}