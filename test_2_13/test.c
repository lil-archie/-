#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    char arr[17];
//    int i = 0;
//    int count = 0;
//    while (N)
//    {
//        if (count % 3 == 0 && count != 0)
//            arr[i++] = ',';
//        arr[i++] = N % 10 + '0';
//        N /= 10;
//        count++;
//
//
//    }
//    int j = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%c", arr[j]);
//    }
//    return 0;
//}


//int main() {
//    char arr1[100] = { 0 };
//    char arr2[100] = { 0 };
//    //输入
//    gets(arr1);
//    gets(arr2);
//    //打印
//    //打印第一个字符串
//    int len1 = strlen(arr1);
//    int i = 0;
//    for (i = 0; i < len1; i++)
//    {
//        //判断一下arr1[i]是在arr2中出现
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
//



//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[101];
//    char del[101];
//    scanf("%s", arr);
//    scanf("%s", del);
//    int len = strlen(arr);
//    for (int i = 0; i < len; i++)
//    {
//        if (strchr(del, arr[i]) == NULL)
//        {
//            printf("%c", arr[i]);
//        }
//    }
//
//    return 0;
//}



//int main()
//{
//	char arr[10];
//	scanf("%s", arr);
//	printf("%s", arr);
//	return 0;
//
//}