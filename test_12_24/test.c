#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//    int n = 0;
//
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (~scanf("%d", &n)) {
//        for (i = 0; i < n; i++) {
//            for (k = 1; k <= n - i; k++) {
//
//                printf("* ");
//            }
//            for (j = 0; j < (2 * i + 1); j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//}
//#include<stdio.h>
//int main() {
//    int n = 0;
//
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        for (i = 0; i < n; i++) {
//            for (k = 1; k <= n - i; k++) {
//
//                printf("* ");
//            }
//            for (j = 0; j < (2 * i + 1); j++) {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//}
//#include<stdio.h>
//int main() {
//	int a;
//	while (scanf("%d", &a) != EOF) {
//		int i, k;
//		for (k = a; k > 0; k--) {
//			for (i = k; i > 0; i--) {
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
//    int i = 0;
//    while (~scanf("%d", &n))
//    {
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (~scanf("%d", &n))
//    {
//        for (i = 0; i < n; i++)
//        {
//            int k = 0;
//            int j = 0;
//            for (k = 0; k < 2 * (n - i) - 2; k++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (~scanf("%d", &n))
//    {
//        for (i = 0; i < n; i++)
//        {
//            int k = 0;
//            int j = 0;
//            for (k = 0; k < 2 * (n - i) - 2; k++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
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
//    }
//    return 0;
//}