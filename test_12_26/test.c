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
//		//上
//		for (i = 0; i < n; i++)
//		{
//			//一行
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
//			//一行
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
////下n+1行
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
//找到规律是关键，看作一条正斜杠和反斜杠
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)  //外循环为行
//        {
//            for (int j = 0; j < n; j++) //内循环为列
//            {
//                if (i == j || i + j == n - 1)
//                    //最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n"); //打印完一行，换行
//        }
//    }
//    return 0;
//}