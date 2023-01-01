#define  _CRT_SECURE_NO_WARNINGS 1
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    int flag = 0;
//    int t = 1;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == t)
//        {
//            flag = 0;
//        }
//        else
//        {
//            flag = 1;
//            returnSize[0] = t - 1;
//            returnSize[1] = t;
//            break;
//        }
//        t++;
//    }
//    return returnSize;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            char pwd[101] = { 0 };
//            scanf("%s", pwd);
//            int lower = 0, higher = 0, digit = 0, other = 0;
//            if (pwd[0] >= '0' && pwd[0] <= '9')
//            {
//                printf("NO\n");
//                continue;
//            }//密码不能以数字开头
//            if (strlen(pwd) < 8)
//            {
//                printf("NO\n");
//                continue;
//            }//密码长度至少为8
//            for (int i = 0; pwd[i] != '\0'; i++)
//            {
//                if (pwd[i] >= '0' && pwd[i] <= '9')
//                    digit++;//数字
//                else if (pwd[i] >= 'a' && pwd[i] <= 'z')
//                    lower++;//小写字母
//                else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
//                    higher++;//大写字母
//                else
//                    other++;
//            }
//            if (other != 0)
//            {
//                printf("NO\n");
//                continue;
//            }// 密码只能由大写字母，小写字母，数字构成
//          //大写，小写，数字，必须具有两种以上，而比较运算真则1，假则0
//            if ((lower > 0) + (higher > 0) + (digit > 0) < 2)
//            {
//                printf("NO\n");
//                continue;
//            }//密码只有1种字符
//            printf("YES\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;

        for (i = 0; i < n; i++)
        {

            char arr[101];
            int digit = 0;
            int lower = 0;
            int other = 0;
            int upper = 0;
            scanf("%s", arr);
            if (isdigit(arr[0]))
            {
                printf("NO\n");
                continue;
            }
            if (strlen(arr) < 8)
            {
                printf("NO\n");
                continue;
            }
            for (i = 0; arr[i] != '\0'; i++)
            {
                if (isdigit(arr[i]))
                    digit++;
                else if (isupper(arr[i]))
                    upper++;
                else if (islower(arr[i]))
                    lower++;
                else
                    other++;


            }
            if (other != 0)
            {
                printf("NO\n");
                continue;
            }
            if ((digit > 0) + (upper > 0) + (lower > 0) < 2)
            {
                printf("NO\n");
                continue;
            }
            printf("YES\n");


        }
    }


    return 0;
}