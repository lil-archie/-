#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("intput money: ");
//	int m = 0;
//	scanf("%d", &m);
//    
//	
//	int n = m;
//	int a = n / 2;
//	int sum = n + a;
//	printf("%d ", sum);
//	return 0;
//	
//}
void test(int* arr)
{

}
int mian()
{
    int arr[10][10] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    test(arr);

        return 0;
}
#include <stdio.h>
int main()
{
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };

    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int count = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }


        }

    }
    if (count == n * m)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }



    return 0;
}
#include <stdio.h>

int main()
{
    int arr[10][10] = { 0 };
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    int sum = 0;

    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            sum += arr[i][j];


        }
    }
    if (sum == 0)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
