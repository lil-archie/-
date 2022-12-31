#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//    int n, h, m = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    int k = m / h;
//    int tmp = m % h;
//    if (tmp != 0)
//    {
//        k += 1;
//        n -= k;
//        printf("%d", n);
//    }
//    else
//        printf("%d", n - k);
//    return 0;
//}*/
//#include <stdio.h>
//int main()
//{
//    int h, m, s = 0;
//
//    while ((scanf("%d", &s)) != EOF)
//    {
//        h = s / 3600;
//        m = s / 60 % 60;
//        s = s % 60;
//        printf("%d %d %d", h, m, s);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%f%f%f", &a, &b, &c);
//    printf("%.2f %.2f", a + b + c, (a + b + c) / 3.0);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("I lost my cellphone!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b = 0;
//    scanf("%x %o", &a, &b);//注意这里在输入时%x是十六进制，%o是八进制。
//    printf("%d", a + b);
//
//    return 0;
//}
//int main()
//{
//    int a = 18;
//    printf("%#X\n", a);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int date = 0;
//    int k = 0;
//    scanf("%lf%d%d%d", &price, &month, &date, &k);
//    if (month == 11 && date == 11)
//    {
//        price *= 0.7;
//
//        if (k == 1)
//        {
//            price -= 50;
//
//        }
//        if (price < 0)
//        {
//            price = 0.0;
//        }
//        printf("%.2lf", price);
//
//    }
//    else if (month == 12 && date == 12)
//    {
//        price *= 0.8;
//        if (k == 1)
//        {
//            price -= 50;
//
//        }
//        if (price < 0)
//        {
//            price = 0.0;
//        }
//        printf("%.2lf", price);
//    }
//    else
//        printf("%.2lf", price);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int date = 0;
//    int k = 0;
//    scanf("%lf%d%d%d", &price, &month, &date, &k);
//    if (month == 11 && date == 11)
//    {
//        price *= 0.7;
//
//        if (k == 1)
//        {
//            price -= 50;
//
//        }
//        if (price < 0)
//        {
//            price = 0.0;
//        }
//        printf("%.2lf", price);
//
//    }
//    else if (month == 12 && date == 12)
//    {
//        price *= 0.8;
//        if (k == 1)
//        {
//            price -= 50;
//
//        }
//        if (price < 0)
//        {
//            price = 0.0;
//        }
//        printf("%.2lf", price);
//    }
//    else
//        printf("%.2lf", price);
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        price = price * 0.7 - 50.0 * flag;
//    }
//    else if (month == 12 && day == 12)
//    {
//        price = price * 0.8 - 50 * flag;
//    }
//    if (price < 0)
//    {
//        printf("0.00\n");
//    }
//    else
//    {
//        printf("%.2lf\n", price);
//    }
//
//    return 0;
//}
//#include<stdio.h>
//void bubble_sort(int* arr, int len)
//{
//    for (int i = 0; i < len - 1; i++)
//    {
//        for (int j = 0; j < len - i - 1; j++)
//        {
//            if (arr[j + 1] >= arr[j])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    bubble_sort(arr, n);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    int count1, count2 = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (arr[i] == 'A')
//        {
//            count1++;
//        }
//        if (arr[i] == 'B')
//        {
//            count2++;
//        }
//    }
//    if (count1 > count2)
//    {
//        printf("A");
//    }
//    else if (count2 > count1)
//    {
//        printf("B");
//    }
//    else
//        printf("E");
//
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    int count1 = 0;
//    int count2 = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (arr[i] == 'A')
//        {
//            count1++;
//        }
//        if (arr[i] == 'B')
//        {
//            count2++;
//        }
//    }
//    if (count1 > count2)
//    {
//        printf("A");
//    }
//    else if (count2 > count1)
//    {
//        printf("B");
//    }
//    else
//        printf("E");
//
//    return 0;
//}
//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int a = 0, b = 0, flag = 0;
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (!flag)//第一个数字
//		{
//			if (isdigit(ch) && a != -1)
//				a = a * 10 + (ch - '0');
//			else if (ch == ' ')
//				flag = 1;
//			else
//				a = -1;
//		}
//		else//第二个数字
//		{
//			if (isdigit(ch) && b != -1)
//				b = b * 10 + (ch - '0');
//			else
//				b = -1;
//		}
//	}
//	if (a > 1000 || a < 1)//a不在范围内
//		a = -1;
//	if (b > 1000 || b < 1)//b不在范围内
//		b = -1;
//	if (a != -1 && b != -1)
//		printf("%d + %d = %d", a, b, a + b);
//	else if (a == -1 && b != -1)
//		printf("? + %d = ?", b);
//	else if (a != -1 && b == -1)
//		printf("%d + ? = ?", a);
//	else if (a == -1 && b == -1)
//		printf("? + ? = ?");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int  ch = 0;
//	ch = getchar();
//	printf("%d", ch-'0');
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("I\n");
//	printf("\n");
//	
//	printf("L\n");
//	printf("o\n");
//	printf("v\n");
//	printf("e\n");
//	printf("\n");
//	
//	printf("G\n");
//	printf("P\n");
//	printf("L\n");
//	printf("T\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    putchar('I');
//    putchar(' ');
//    putchar('L');
//    putchar('o');
//    putchar('v');
//    putchar('e');
//    putchar(' ');
//    putchar('G');
//    putchar('P');
//    putchar('L');
//    putchar('T');
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    puts("I");
//    puts(" ");
//    puts("L");
//    puts("o");
//    puts("v");
//    puts("e");
//    puts(" ");
//    puts("G");
//    puts("P");
//    puts("L");
//    puts("T");
//
//    return 0;
//}
#include<stdio.h>
#include<ctype.h>
int main()
{
    int a = 0;
    int b = 0;
    int flag = 0;
    char ch = 0;
    while ((ch = getchar()) != '\n')
    {
        //第一个数字
        if (!flag)
        {
            if (isdigit(ch) && a != -1)
                a = a * 10 + (ch - '0');
            else if (ch == ' ')
                flag = 1;
            else
                a = -1;
        }
        else
        {
            if (isdigit(ch) && b != -1)
                b = b * 10 + (ch - '0');
            else
                b = -1;
        }
    }
    if (a > 1000 || a < 1)
        a = -1;
    if (b > 1000 || b < 1)
        b = -1;
    if (a != -1 && b != -1)
        printf("%d + %d = %d", a, b, a + b);
    else if (a == -1 && b != -1)
        printf("? + %d = ?", b);
    else if (a != -1 && b == -1)
        printf("%d + ? = ?", a);
    else if (a == -1 && b == -1)
        printf("? + ? = ?");


    return 0;
}