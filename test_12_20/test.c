#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    char tell[12];
//    scanf("%s", tell);
//    int arr[10];
//    int index[12];
//    int a[10] = { 0 };  //�ж��Ƿ�����������
//    for (int i = 0; i < 11; i++)
//    {
//        a[tell[i] - '0'] = 1;
//    }
//    int num_ = 0;            //��¼�ж��ٸ�����
//    for (int i = 9; i >= 0; i--)
//    {
//        if (a[i]) 
//            arr[num_++] = i;
//    }//��������arr
//    for (int i = 0; i < 11; i++)
//    {
//        int n = tell[i] - '0';
//        int k;         //��¼����
//        for (k = 0; k < 10; k++)
//        {
//            if (n == arr[k])
//                break;    //�ҵ���arr�еı���λ��
//        }
//        index[i] = k;
//    }
//    //int[] arr = new int[]{8,3,2,1,0};
//    //int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};
//    //�����ִ������ʽ��
//    //���
//
//    printf("int[] arr = new int[]{");
//    printf("%d", arr[0]);
//    for (int i = 1; i < num_; i++)
//    {
//        printf(",%d", arr[i]);
//    }
//    printf("};\n");
//    printf("int[] index = new int[]{");
//    printf("%d", index[0]);
//    for (int i = 1; i < 11; i++)
//    {
//        printf(",%d", index[i]);
//    }
//    printf("};\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr1[11] = { 0 };
//    int arr2[10] = { 0 };
//    int arr3[11] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 11; i++)
//    {
//
//        scanf("%d", &arr1[i]);
//
//    }
//
//    for (j = 0; j < 11; j++)
//    {
//        arr2[arr1[j]] = 1;
//    }
//    int num = 0;
//    for (i = 9; i >= 0; i++)
//    {
//        if (arr2[i])
//            arr2[num++] = i;
//    }
//    for (i = 0; i < 11; i++)
//    {
//        int n = arr1[i];
//        for (j = 0; j < 10; j++)
//        {
//            if (n == arr2[j])
//                break;
//        }
//        arr3[i] = j;
//    }
//    printf("int[] arr = new int[]{");
//    printf("%d", arr2[0]);
//    for (i = 0; i < num; i++)
//        printf(",%d", arr2[i]);
//    printf("}\n");
//    printf("int[] index = new int[]{");
//    printf("%d", arr3[0]);
//    for (i = 0; i < 11; i++)
//    {
//        printf(",%d", arr3[i]);
//    }
//    printf("}\n");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr1[12];
//    scanf("%s", &arr1);
//    int arr2[10] = { 0 };
//    int arr3[11] = { 0 };
//    int i = 0;
//    int j = 0;
//
//
//    for (j = 0; j < 11; j++)
//    {
//        arr2[arr1[j] - '0'] = 1;
//    }
//    int num = 0;
//    for (i = 9; i >= 0; i++)
//    {
//        if (arr2[i])
//            arr2[num++] = i;
//    }
//    for (i = 0; i < 11; i++)
//    {
//        int n = arr1[i] - '0';
//        for (j = 0; j < 10; j++)
//        {
//            if (n == arr2[j])
//                break;
//        }
//        arr3[i] = j;
//    }
//    printf("int[] arr = new int[]{");
//    printf("%d", arr2[0]);
//    for (i = 0; i < num; i++)
//        printf(",%d", arr2[i]);
//    printf("}\n");
//    printf("int[] index = new int[]{");
//    printf("%d", arr3[0]);
//    for (i = 0; i < 11; i++)
//    {
//        printf(",%d", arr3[i]);
//    }
//    printf("}\n");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr1[12];
//    scanf("%s", &arr1);
//    int arr2[10] = { 0 };
//    int arr3[11] = { 0 };
//    int i = 0;
//    int j = 0;
//
//
//    for (j = 0; j < 11; j++)
//    {
//        arr2[arr1[j] - '0'] = 1;
//    }
//    int num = 0;
//    for (i = 9; i >= 0; i--)
//    {
//        if (arr2[i])
//            arr2[num++] = i;
//    }
//    for (i = 0; i < 11; i++)
//    {
//        int n = arr1[i] - '0';
//        for (j = 0; j < 10; j++)
//        {
//            if (n == arr2[j])
//                break;
//        }
//        arr3[i] = j;
//    }
//    printf("int[] arr = new int[]{");
//    printf("%d", arr2[0]);
//    for (i = 0; i < num; i++)
//        printf(",%d", arr2[i]);
//    printf("};\n");
//    printf("int[] index = new int[]{");
//    printf("%d", arr3[0]);
//    for (i = 0; i < 11; i++)
//    {
//        printf(",%d", arr3[i]);
//    }
//    printf("};\n");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr1[12];
//    scanf("%s", arr1);
//    int arr2[11] = { 0 };
//    int arr3[12] = { 0 };
//    int i = 0;
//    int j = 0;
//
//
//    for (j = 0; j < 11; j++)
//    {
//        arr2[arr1[j] - '0'] = 1;
//    }
//    int num = 0;
//    for (i = 9; i >= 0; i--)
//    {
//        if (arr2[i])
//            arr2[num++] = i;
//    }
//    for (i = 0; i < 11; i++)
//    {
//        int n = arr1[i] - '0';
//        for (j = 0; j < 10; j++)
//        {
//            if (n == arr2[j])
//                break;
//        }
//        arr3[i] = j;
//    }
//    printf("int[] arr = new int[]{");
//    printf("%d", arr2[0]);
//    for (i = 1; i < num; i++)
//        printf(",%d", arr2[i]);
//    printf("};\n");
//    printf("int[] index = new int[]{");
//    printf("%d", arr3[0]);
//    for (i = 1; i < 11; i++)
//    {
//        printf(",%d", arr3[i]);
//    }
//    printf("};\n");
//
//    return 0;
//}
//#include<stdio.h>
//int isprime(int num)
//{
//    int i = 0;
//    for (i = 2; i < num; i++)
//    {
//        if (num % i == 0)
//        {
//            return 0;
//            break;
//
//
//        }
//    }
//}
//    int main()
//    {
//        int n = 0;
//        scanf("%d", &n);
//        int i = 0;
//        int num = 0;
//            for (i = 0; i < n; i++)
//            {
//                scanf("%d\n", &num);
//                isprime(num);
//                if (isprime == 0)
//                    printf("No\n");
//                else
//                    printf("Yes\n");
//            }
//        return 0;
//    }
#include<stdio.h>
/*int  prime(int a);*/        //�ж��Ƿ�Ϊ�����ĺ���
//int main()
//{
//    int n, a, i;
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d\n", &a);
//        if (prime(a))         //prime��������ֵΪ1�����Yes
//            printf("Yes\n");
//        else                 //��������ֵΪ0�����No
//            printf("No\n");
//    }
//    return 0;
//}
//int prime(int a)
//{
//    int i;
//    if (a == 1)
//        return 0;
//    else
//    {
//        for (i = 2; i * i <= a; i++)
//        {
//            if (a % i == 0) return 0;
//        }
//    }
//    return 1;
//}
#include<stdio.h>
#include<math.h>         //����math.h��
int  prime(int a);
int main()
{
    int n, a, i;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a);      //ÿ��ѭ������a���¸�ֵ
        if (prime(a))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
int prime(int a)
{
    int i;
    if (a == 1)           //1��������
        return 0;
    else
    {
        for (i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
                return 0;
        }
    }
    return 1;
}
