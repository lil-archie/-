#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

////
////int main()
////{
////	//这是一个注释
////	int a/*呵呵*/= 10;
////	printf("%d\n", a);
////	return 0;
////}
//
//
////for (int x = 0, y = 0; (y = 123) && (x < 4); x++)
////	;
////
//
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* left, char* right)
//{
//    assert(left && right);
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char arr[100] = { 0 };
//    //输入
//    gets(arr);
//    int len = strlen(arr);
//    //完成这个逆序
//    //1. 逆序整个字符串
//    reverse(arr, arr + len - 1);
//    //逆序每个单词
//    char* cur = arr;
//
//    while (*cur)
//    {
//        char* start = cur;
//        while (*cur != ' ' && *cur != '\0')
//        {
//            cur++;
//        }
//        reverse(start, cur - 1);
//        if (*cur != '\0')
//            cur++;
//    }
//
//    //打印
//    printf("%s\n", arr);
//
//    return 0;
//}
//
//
//
//https://www.nowcoder.com/practice/22948c2cad484e0291350abad86136c3?tpId=37&&tqId=21331&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
//
//https://www.nowcoder.com/practice/ee5de2e7c45a46a090c1ced2fdc62355?tpId=85&&tqId=29867&rp=1&ru=/activity/oj&qru=/ta/2017test/question-ranking
//
//
//
//

//int main()
//{
//	int a = 0;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int m = (a > b ? a : b);
//    int i = 0;
//    while (m % a != 0 || m % b != 0)
//    {
//        m++;
//    }
//    printf("%d\n", m);
//
//    return 0;
//}
/*#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int m = (a>b?a:b);
    int i=0;
    while(m%a!=0||m%b!=0)
    {
        m++;
    }
    printf("%d\n",m);

    return 0;
}*/
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int i = 1;
    while (a * i % b != 0)
    {
        i++;
    }
    printf("%d\n", a * i);

    return 0;
}