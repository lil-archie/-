#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a, b = 0;
//    scanf("%d:%d", &a, &b);
//    if (a >= 0 && a <= 12)
//    {
//        printf("Only %d:%d.  Too early to Dang.", a, b);
//    }
//    if (a > 12 && a < 24)
//    {
//        for (int i = 0; i < a - 12; i++)
//        {
//            printf("Dang");
//        }
//        if (b > 0)
//        {
//            printf("Dang");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b = 0;
//    scanf("%2d:%2d", &a, &b);
//    if (a >= 0 && a <= 12)
//    {
//        if (b > 0)
//        {
//            printf("Dang");
//        }
//        else
//            printf("Only %d:%d.  Too early to Dang.", a, b);
//    }
//    if (a > 12 && a < 24)
//    {
//        for (int i = 0; i < a - 12; i++)
//        {
//            printf("Dang");
//        }
//        if (b > 0)
//        {
//            printf("Dang");
//        }
//    }
//    return 0;
//}
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
//            if ((arr[i][0] + arr[i][2]) == arr[i][1])
//            {
//                count1++;
//                if (count1 == a);
//                {
//                    printf("A\n%d", count2);
//                    flag1 = 1;
//                    break;
//                }
//            }
//            if ((arr[i][0] + arr[i][2]) == arr[i][3])
//            {
//                count2++;
//                if (count2 == b)
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
//	int a_max, b_max;  //���ҵľ�������
//	scanf("%d %d", &a_max, &b_max);
//	int n;	//������	N
//	scanf("%d", &n);
//	int i, j, a1, b1, a2, b2, a_n = 0, b_n = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
//		if (a2 == a1 + b1 && b2 != a1 + b1)
//			a_n++;
//		if (b2 == a1 + b1 && a2 != a1 + b1)
//			b_n++;
//		if (a_n == a_max + 1 || b_n == b_max + 1)
//			break;
//	}
//	if (a_n == a_max + 1)
//	{
//		printf("A\n");
//		printf("%d", b_n);
//	}
//	else
//	{
//		printf("B\n");
//		printf("%d", a_n);
//	}
//}
#include<stdio.h>
int main()
{
    int a, b, n = 0;
    scanf("%d%d", &a, &b);
    scanf("%d", &n);
    int arr[1000][4];
    int count1 = 0;
    int count2 = 0;
    int flag1 = 0;
    int flag2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
            if ((arr[i][0] + arr[i][2]) == arr[i][1])
            {
                count1++;
                if (count1 + 1 > a);
                {
                    printf("A\n%d", count2);
                    flag1 = 1;
                    break;
                }
            }
            if ((arr[i][0] + arr[i][2]) == arr[i][3])
            {
                count2++;
                if (count2 + 1 > b)
                {
                    printf("B\n%d", count1);
                    flag2 = 1;
                }
            }
            if (flag1 == 1 || flag2 == 1)
                break;
        }


    }


}