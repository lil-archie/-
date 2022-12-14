#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 32768;
//	printf("%d", a);
//	return 0;
//}
//≈≈–Ú
//#include<stdio.h>
//void bubble_sort(int arr[])
//{
//    for (int i = 0; i < 2; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 3 - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
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
//    int i = 0;
//
//    int arr[3];
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    bubble_sort(arr);
//    for (i = 0; i < 2; i++)
//    {
//        if (i == 3)
//        {
//            printf("%d", arr[i]);
//
//        }
//        else
//            printf("%d->", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n); 
//    int j = 0;
//    int sum = 0;
//    
//    int i = 0;
//    for (j = n; j > 0; j--)
//    {
//        int tmp = 1;
//        for (i = 1; i <= j; i++)
//        {
//            tmp *= i;
//        }
//        sum += tmp;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[100];
//    char arr2[100];
//    gets(arr1);
//    gets(arr2);
//    int len1 = strlen(arr1);
//    
//    int len2 = strlen(arr2);
//    for (int i = 0; i < len1; i++)
//    {
//        for (int j = 0; j < len2; j++)
//        {
//            if (arr1[i] != arr2[j])
//            {
//                printf("%c", arr1[i]);
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//#include<stdlib.h>
//char delete(char* str, char target);
//int main() {
//	char a[100000];
//	char b[100000];
//	gets(a);
//	gets(b);
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	for (int i = 0; i < len2; i++)
//	{
//		delete(a, b[i]);
//	}
//	printf("%s\n", a);
//	return 0;
//}
//char delete(char* str, char target) 
//{
//	int i, j = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != target) 
//		{
//			str[j++] = str[i];
//		}
//	}
//	str[j] = '\0';
//	return str;
//}
//char delete(char* str, char target)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != target)
//		{
//			str[j++] = str[i];
//		}
//		
//	}
//    str[j] = '\0';
//	return str;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("2^%d = %d", n, 1 << n);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char sign = 0;
//    int n = 0;
//    scanf("%d %c", &n, &sign);
//    for (int i = 0; i < n / 2; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%c", sign);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N;
//    char c;
//    double temp1;
//    int temp2;
//    scanf("%d %c", &N, &c);
//    if (N >= 3 && N <= 21) 
//    {
//        temp1 = N / 2.0 - N / 2;
//        if (temp1 >= 0.5) temp2 = 1;
//        else temp2 = 0;
//        int i, j;
//        for (i = 1; i <= N / 2 + temp2; i++)
//        {
//            for (j = 1; j <= N; j++)
//            {
//                printf("%c", c);
//            }
//            printf("\n");
//        }
//
//        return 0;
//    }
//}
//#include<stdio.h>
//int main()
//{
//    char sign = 0;
//    int n = 0;
//    scanf("%d %c", &n, &sign);
//    double tmp1 = 0;
//    int tmp2 = 0;
//    if (n >= 3 && n <= 21)
//    {
//        tmp1 = n / 2.0 - n / 2;
//        if (tmp1 >= 0.5)
//            tmp2 = 1;
//        else
//            tmp1 = 0;
//        for (int i = 0; i < n / 2 + tmp2; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("%c", sign);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
