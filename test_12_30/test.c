#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int i;
//void prt()
//{
//	for (i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//} 
//int main()
//{
//	for (i = 5; i <= 8; i++)
//		prt();
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    double num = 0;
//    double sum = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &num);
//        if (num >= 0)
//            sum += num;
//        else if (num < 0)
//            count++;
//    }
//    printf("%d %.1lf", count, sum / (n * 1.0));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a;
//    int cnt = 0, cnt2 = 0;
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a);
//        if (a < 0)
//            cnt++;
//        else if (a > 0)
//        {
//            sum += a;
//            cnt2++;
//        }
//    }
//    printf("%d ", cnt);
//    if (cnt2)
//        printf("%.1f", sum * 1.0 / cnt2);
//    else
//        printf("0.0");
//    return 0;
//}
//#include<stdio.h>

//int main()
//{
//    int n = 0;
//    double num = 0;
//    double sum = 0;
//    int count = 0;
//    int count1 = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &num);
//        if (num > 0)
//        {
//            sum += num;
//            count1++;
//        }
//
//        if (num < 0)
//        {
//            count++;
//
//        }
//
//    }
//    printf("%d %.1lf", count, sum / count1);
//    return 0;
//}
//int i = 0;
//for (i = 0; i < rotateArrayLen - 1; i++)
//{
//    int j = 0;
//    for (j = 0; j < rotateArrayLen - 1 - i; j++)
//    {
//        if (rotateArray[j] >= rotateArray[j + 1])
//        {
//            int tmp = rotateArray[j];
//            rotateArray[j] = rotateArray[j + 1];
//            rotateArray[j + 1] = tmp;
//
//        }
//
//    }
//}
//return rotateArray[0];
//int main()
//{
//    int n = 5;
//   #include<stdio.h>
// float num = 0;
//    float sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%f", &num);
//        sum += num;
//    }
//    printf("%.2f", sum / 5.0);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}