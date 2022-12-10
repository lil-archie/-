#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a, b, c = 0;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%d\nmonth=%02d\ndate=%02d\n", a, b, c);
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int N, h = 0;
//    char sign = 0;
//    scanf("%d %c", &N, &sign);
//    int i = 0;
//    h = (int)sqrt((N + 1) / 2.0);
//    /*int i = 0;*/
//    for (int i = 0; i < 2 * h - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < h - 1 - abs(h - i - 1); j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * abs(h - i - 1) + 1; j++)
//        {
//            printf("%c", sign);
//        }
//        putchar('\n');
//    }
//    printf("%d", N - 2 * h * h + 1);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1005];
//	int arr[10] = { 0 };
//	scanf("%s", a);
//	int c;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		c = a[i] - '0';
//		arr[c]++;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		if (arr[j] != 0)
//			printf("%d:%d\n", j, arr[j]);
//	}
//	return 0;
//}
