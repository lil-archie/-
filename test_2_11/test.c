#define  _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[18];
//
//
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////https://www.nowcoder.com/practice/f0db4c36573d459cae44ac90b90c6212?tpId=182&tqId=34789&ru=/exam/oj
//

int main()
{
    int n = 0;
    scanf("%d", &n);
    char arr[14] = { 0 };
    int i = 0;
    while (n)
    {
        arr[i++] = n % 10 + '0';
        n /= 10;
    }
    int j;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", arr[j]);
        if (j % 3 == 0 && j)
        {
            printf(",");
        }
    }
    return 0;
}

//https://www.nowcoder.com/practice/f51c317e745649c0900996fd3f683aed?tpId=290&tqId=39934&ru=/exam/oj

//���������ȷ
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    char arr[14] = { 0 };
//    int i = 0;
//    int k = 0;
//    while (n)
//    {
//        if (k != 0 && k % 3 == 0)
//            arr[i++] = ',';
//        arr[i++] = n % 10 + '0';
//        n /= 10;
//        k++;
//    }
//    int j = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%c", arr[j]);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int if_not_exist(char ch, char* str)
//{
//    while (*str)
//    {
//        if (ch == *str)
//        {
//            return 0;
//        }
//        str++;
//    }
//    return 1;
//}
//int main() {
//    char arr1[100] = { 0 };
//    char arr2[100] = { 0 };
//    //����
//    gets(arr1);
//    gets(arr2);
//    //��ӡ
//    //��ӡ��һ���ַ���
//    int len1 = strlen(arr1);
//    int i = 0;
//    for (i = 0; i < len1; i++)
//    {
//        //�ж�һ��arr1[i]����arr2�г���
//        //strchr
//        //if(if_not_exist(arr1[i], arr2))
//        if (strchr(arr2, arr1[i]) == NULL)
//        {
//            printf("%c", arr1[i]);
//        }
//    }
//
//    return 0;
//}



