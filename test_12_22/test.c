#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, n, u;
//    scanf("%d", &n);
//    int sex[51] = { 0 }, exist[51] = { 0 };
//    char name[51][9];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %s", &sex[i], name[i]);//name[i]-�����������ַ�����ʡ�Ժ����[9]
//    }							//�������� \n �������벻�ɹ� 
//    int x, y;
//    for (i = 0; i < n / 2; i++)
//    {
//        for (u = n - 1; u > (n - 1) / 2; u--)
//        {
//            if (sex[i] != sex[u] && exist[u] == 0 && exist[i] == 0)
//            {
//                printf("%s %s\n", name[i], name[u]);
//                exist[i] = exist[u] = 1;//ѡ���ˣ����߶�Ӧ�ñ�ɾȥ�����ö���������ж�
//
//            }
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    struct student
//    {
//        int a;
//        char b[10];
//    }s[52];
//    int n, i, j, k;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &s[i].a);
//        scanf("%s", &s[i].b);
//    }
//    for (i = 0; i < n / 2; i++)  //ֻ��Ҫǰһ��ѧ��
//    {
//        for (j = n - 1; j > 0; j--)  //�ӽ�β��ʼ��
//        {
//            if (s[i].a != s[j].a && s[j].a != 2)  //�ж����ѧ���Ƿ�Ϊ���Բ��ж��Ƿ��Ѿ��ź���λ
//            {
//                printf("%s %s\n", s[i].b, s[j].b);
//                s[j].a = 2;  //����Ѿ��ź���λ��ѧ��
//                break;
//            }
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    struct student
//    {
//        int a;
//        char b[10];
//    }s[52];
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &s[i].a);
//        scanf("%s", &s[i].b);
//    }
//    for (i = 0; i < n / 2; i++)
//    {
//        for (j = n - 1; j >= 0; j--)
//        {
//            if (s[i].a != s[j].a && s[j].a != 2)
//            {
//                printf("%s %s\n", s[i].b, s[j].b);
//                s[j].a = 2;
//                break;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr1[20];
//    float arr2[20];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %f", &arr1[i], &arr2[i]);
//        float p = (arr1[i] - 100) * 0.9;
//            if (p <= (arr2[i] - arr2[i] * 0.1))
//                printf("You are tai shou le!\n");
//        if (p >= (arr2[i] + arr2[i] * 0.1))
//            printf("You are tai pang le!\n");
//        if (p >= (arr2[i] - arr2[i] * 0.1) && p <= (arr2[i] + arr2[i] * 0.1))
//            printf("You are wan mei!\n");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr1[20];
//    float arr2[20];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d %f", &arr1[i], &arr2[i]);
//
//
//    }
//    for (i = 0; i < n; i++)
//    {
//        float p = (arr1[i] - 100) * 0.9;
//        if (p <= (arr2[i] - arr2[i] * 0.1))
//            printf("You are tai shou le!\n");
//        if (p >= (arr2[i] + arr2[i] * 0.1))
//            printf("You are tai pang le!\n");
//        if (p >= (arr2[i] - arr2[i] * 0.1) && p <= (arr2[i] + arr2[i] * 0.1))
//            printf("You are wan mei!\n");
//    }
//
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr1[20];
    float arr2[20];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %f", &arr1[i], &arr2[i]);


    }
    for (i = 0; i < n; i++)
    {
        float p = ((arr1[i] - 100) * 0.9) * 2.0;
        if (arr2[i] <= (p - p * 0.1))
            printf("You are tai shou le!\n");
        if (arr2[i] >= (p + p * 0.1))
            printf("You are tai pang le!\n");
        if (arr2[i] >= (p - p * 0.1) && p <= (p + p * 0.1))
            printf("You are wan mei!\n");
    }

    return 0;
}