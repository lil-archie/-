#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%.1f", (n - 100) * (9 / 10.0));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%.1f", ((n - 100) * (9 / 10.0)) * 2);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        int max = a;
//        if (b > max)
//        {
//            max = b;
//        }
//        if (c > max)
//        {
//            max = c;
//        }
//        printf("%d", max);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char zi = 0;
//    while ((scanf("%c", &zi)) != EOF)
//    {
//        if (zi == 'A' || zi == 'a' || zi == 'E' || zi == 'e' || zi == 'I' || zi == 'i' || zi == 'O' || zi == 'o' || zi == 'U' || zi == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char zi = 0;
//    while ((scanf("%c", &zi)) != EOF)
//    {
//        getchar();
//        if (zi == 'A' || zi == 'a' || zi == 'E' || zi == 'e' || zi == 'I' || zi == 'i' || zi == 'O' || zi == 'o' || zi == 'U' || zi == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	
//		if (a == 'c')
//			printf("ha\n");
//		
//		else
//			printf("he\n");
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char n = 0;
//    while (scanf("%c", &n) != EOF)
//    {
//        getchar();
//        if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
//            printf("%c is an alphabet.\n", n);
//        else
//            printf("%c is not an alphabet.\n", n);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char n = 0;
//    while (scanf("%c", &n) != EOF)
//    {
//        getchar();
//        if (n >= 'a' && n <= 'z')
//        {
//            printf("%c\n", n - 32);
//        }
//        if (n >= 'A' && n <= 'Z')
//        {
//            printf("%c\n", n + 32);
//        }
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int t = 0;
//    while ((scanf("%d", &t)) != EOF)
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (t == 0)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else
//                printf("Ordinary triangle!\n");
//
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}
