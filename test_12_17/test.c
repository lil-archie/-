#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a, b, n = 0;
//    scanf("%d%d", &a, &b);
//    scanf("%d", &n);
//    int arr[1000][4];
//    int count1 = 0;
//    int count2 = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if ((arr[i][0] + arr[i][2]) == arr[i][1] && (arr[i][0] + arr[i][2])!= arr[i][3])
//            {
//                count1++;
//                if (count1 + 1 > a);
//                {
//                    printf("A\n%d", count2);
//                    flag1 = 1;
//                    break;
//                }
//            }
//            if ((arr[i][0] + arr[i][2]) == arr[i][3] && (arr[i][0] + arr[i][2])!= arr[i][1])
//            {
//                count2++;
//                if (count2 + 1 > b)
//                {
//                    printf("B\n%d", count1);
//                    flag2 = 1;
//                }
//            }
//            if (flag1 == 1 || flag2 == 1)
//                break;
//        }
//
//
//    }
//
//
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count1 = 0;
//    int count2 = 0;
//    int num = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num % 2 == 0)
//        {
//            count1++;
//        }
//        else if (num % 2 != 0)
//        {
//            count2++;
//        }
//        else
//        {
//            count2++;
//        }
//    }
//    printf("%d %d", count1, count2);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[100001];
//    gets(arr);
//    int arr1[4] = { 0 };
//    int len = strlen(arr);
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i] == 'G' || arr[i] == 'g')
//        {
//            arr1[0]++;
//        }
//        if (arr[i] == 'P' || arr[i] == 'p')
//        {
//            arr1[1]++;
//        }
//        if (arr[i] == 'L' || arr[i] == 'l')
//        {
//            arr1[2]++;
//        }
//        if (arr[i] == 'T' || arr[i] == 't')
//        {
//            arr1[3]++;
//        }
//    }
//    while (arr1[0] + arr1[1] + arr1[2] + arr1[3])
//    {
//        if (arr1[0] > 0)
//        {
//            printf("G");
//            arr1[0]--;
//        }
//        if (arr1[1] > 0)
//        {
//            printf("P");
//            arr1[1]--;
//        }
//        if (arr1[2] > 0)
//        {
//            printf("L");
//            arr1[2]--;
//        }
//        if (arr1[3] > 0)
//        {
//            printf("T");
//            arr1[3]--;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    double n = 0;
//    scanf("%lf", &n);
//    double pi = 3.1415926;
//    double V = (4 / 3.0) * pi * n * n * n;
//    printf("%.3lf", V);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 10000; i < 99999; i++)
//    {
//        int sum = 0;
//        for (j = 10; j <= 10000; j = 10 * j)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int k = 0;
//    int n = 0;
//    for (int i = 10000; i <= 99999; i++)
//    {
//        int sum = 0;
//        while (i > 9)
//        {
//            n = i;
//            int tmp = i % 10;
//            k = i / 10;
//            i /= 10;
//            sum += k * tmp;
//            if (sum == n)
//            {
//                printf("%d ", n);
//            }
//
//
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    for (int i = 10000; i < 99999; i++)
//    {
//        int sum = 0;
//        for (int j = 10; j <= 10000; j *= 10)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, b, c, d, e;
//    scanf("%d %d", &a, &b);
//    c = a + b;
//    d = (c % 100) / 10;
//    e = c % 10;
//    if (d == 0)
//    {
//        printf("%d", e);
//    }
//    else
//        printf("%d", 10 * d + e);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b = 0;
//    scanf("%d%d", &a, &b);
//    int sum = a + b;
//    int d = (sum % 100) / 10;
//    int e = sum % 10;
//    if (d == 0)
//        printf("%d", e);
//    else
//        printf("%d", 10 * d + e);
//    return 0;
//}
