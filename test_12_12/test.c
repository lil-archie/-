#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long int N, i, j, num, count, start = 0, max = 0;
//	scanf("%lld", &N);
//	for (i = 2; i < sqrt(N); i++)
//	{
//		num = 1;
//		count = 0;
//		for (j = i; N % (num * j) == 0; j++)
//		{
//			count++;
//			num *= j;
//		}
//		if (count > max)
//		{
//			start = i;
//			max = count;
//		}
//	}
//	if (max == 0)
//	{
//		printf("1\n");
//		printf("%lld\n", N);
//	}
//	else
//	{
//		printf("%lld\n", max);
//		for (i = start; i < start + max - 1; i++)
//		{
//			printf("%lld*", i);
//		}
//		printf("%lld\n", i);
//	}
//	return 0;
//}
//左移多少位就是乘以多少的2。
//左移<<   a<<b
//左移b位，右边的用0来填充
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d", 1 << n);
//    return 0;
//}
//交换两个数的值，可以用传址传参
//#include<stdio.h>
//void exchange(int* a, int* b)
//{
//    int c = *a;
//    *a = *b;
//    *b = c;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    exchange(&a, &b);
//    printf("a=%d,b=%d", a, b);
//
//    return 0;
//}
// 这里注意在转换的时候，%hhd=char,%hd=short,%d=int,%ld=long int ,%lld=long long int .
//#include<stdio.h>
//int main()
//{
//    char n = 0;
//    scanf("%c", &n);
//    printf("%hhd", n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int num = (-8 + 22) * a - 10 + c / 2;
//    printf("%d\n", num);
//    return 0;
//
//
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    scanf("%s", &arr);
//    int len = strlen(arr);
//    for (int i = 0; i < len ; i++)
//    {
//        switch (arr[i])
//        {
//        case '-':
//            printf("fu ");
//            break;
//        case '0':
//            printf("ling ");
//            break;
//        case '1':
//            printf("yi ");
//            break;
//        case '2':
//            printf("er ");
//            break;
//        case '3':
//            printf("san ");
//            break;
//        case '4':
//            printf("si ");
//            break;
//        case '5':
//            printf("wu ");
//            break;
//        case '6':
//            printf("liu ");
//            break;
//        case '7':
//            printf("qi ");
//            break;
//        case '8':
//            printf("ba ");
//            break;
//        case '9':
//            printf("jiu ");
//            break;
//        }
//        if (i < len - 1)//超级巧妙的避开行末多余空格！ 
//        {
//            printf(" ");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1000];
//    scanf("%s", &arr);
//    int len = strlen(arr);
//    for (int i = 0; i < len; i++)
//    {
//        switch (arr[i])
//        {
//        case '-':
//            printf("fu");
//            break;
//        case '0':
//            printf("ling");
//            break;
//        case '1':
//            printf("yi");
//            break;
//        case '2':
//            printf("er");
//            break;
//        case '3':
//            printf("san");
//            break;
//        case '4':
//            printf("si");
//            break;
//        case '5':
//            printf("wu");
//            break;
//        case '6':
//            printf("liu");
//            break;
//        case '7':
//            printf("qi");
//            break;
//        case '8':
//            printf("ba");
//            break;
//        case '9':
//            printf("jiu");
//            break;
//        }
//        if (i < len - 1)//超级巧妙的避开行末多余空格！ 
//        {
//            printf(" ");
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b = 0;
//    int sum = 0;
//    scanf("%d %d", &a, &b);
//    for (int i = a, t = 1; i <= b; i++, t++)
//    {
//        sum += i;
//        printf("%5d", i);
//        if (t % 5 == 0 && i != b)
//            putchar('\n');
//    }
//    printf("\nSum = %d\n", sum);
//    return 0;
//}