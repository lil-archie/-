#define  _CRT_SECURE_NO_WARNINGS 1
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
        //第二个数字
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
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 5)
    {
        printf("%d", n + 2);
    }
    if (n == 6)
    {
        printf("%d", 1);
    }
    if (n == 7)
    {
        printf("%d", 2);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100001];
    gets(arr);
    int arr1[4] = { 0 };
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 'G' || arr[i] == 'g')
        {
            arr1[0]++;
        }
        if (arr[i] == 'P' || arr[i] == 'p')
        {
            arr1[1]++;
        }
        if (arr[i] == 'L' || arr[i] == 'l')
        {
            arr1[2]++;
        }
        if (arr[i] == 'T' || arr[i] == 't')
        {
            arr1[3]++;
        }
    }
    while (arr1[0] + arr1[1] + arr1[2] + arr1[3])
    {
        if (arr1[0] > 0)
        {
            printf("G");
            arr1[0]--;
        }
        if (arr1[1] > 0)
        {
            printf("P");
            arr1[1]--;
        }
        if (arr1[2] > 0)
        {
            printf("L");
            arr1[2]--;
        }
        if (arr1[3] > 0)
        {
            printf("T");
            arr1[3]--;
        }
    }
    return 0;
}