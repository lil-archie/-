#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[5] = { 1,2,3,4,5 };
//	scanf("%d", &n);
//	printf("%d", arr[n]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    int sum = 0;
//    int i = 0;
//    scanf("%d%d%d", &year, &month, &date);
//    int arr1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int arr2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
//    {
//
//
//        if (month - 1 == 0)
//            printf("%d", date);
//        else
//        {
//            for (i = 0; i < month - 1; i++)
//            {
//                sum += arr2[i];
//            }
//            sum += date;
//
//        }
//        printf("%d", sum);
//
//    }
//    else
//    {
//        if (month - 1 == 0)
//            printf("%d", date);
//        else 
//        {
//            for (i = 0; i < month - 1; i++)
//            {
//                sum += arr1[i];
//            }
//            sum += date;
//        }
//        printf("%d", sum);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    int sum = 0;
//    int i = 0;
//    scanf("%d%d%d", &year, &month, &date);
//    int arr1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
//        arr1[1]++;
//    for (i = 0; i < month - 1; i++)
//    {
//        sum += arr1[i];
//    }
//    sum += date;
//
//
//    printf("%d", sum);
//
//
//
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}
//#include <stdio.h>
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	printf("%d\n", NUM);
//	return 0;
//}
