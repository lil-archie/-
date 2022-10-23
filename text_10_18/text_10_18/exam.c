#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d %d", &n, &x);
//    while (scanf("%d %d", &n, &x) != EOF)
//    {
//
//
//
//        if (n > x)
//        {
//            printf("%d>%d\n", n, x);
//        }
//        else if (n < x)
//        {
//            printf("%d<%d\n", n, x);
//        }
//        else
//        {
//            printf("%d=%d\n", n, x);
//        }
//
//
//
//
//    }
//    return 0;
//}
//}
//#include<stdio.h>
//int main()
//{
//    long a, b;
//    while (scanf("%ld%ld", &a, &b) != EOF)
//    {
//        //scanf("%ld%ld",&a,&b);
//        if (a >= 0 || b >= 0)
//        {
//            if (a == b)
//            {
//                printf("%ld=%ld\n", a, b);
//            }
//            if (a > b)
//            {
//                printf("%ld>%ld\n", a, b);
//            }
//            if (a < b)
//            {
//                printf("%ld<%ld\n", a, b);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int x = 0;
//
//    while (scanf("%d %d", &n, &x) != EOF)
//    {
//
//
//
//        if (n > x)
//        {
//            printf("%d>%d\n", n, x);
//        }
//        else if (n < x)
//        {
//            printf("%d<%d\n", n, x);
//        }
//        else
//        {
//            printf("%d=%d\n", n, x);
//        }
//
//
//
//
//    }
//    return 0;
//}
#include<stdio.h>
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
	
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = Max(a, b);
	printf("%d", max);


		return 0;
}


