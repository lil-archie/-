#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int GetNumberOfK(int* data, int dataLen, int k) 
//{
//    int i = 0;
//    for (i = 0; i < dataLen - 1; i++)
//    {
//        for (int j = 0; j < dataLen - 1 - i; j++)
//        {
//            if (data[j] > data[j + 1])
//            {
//                int tmp = data[j];
//                data[j] = data[j + 1];
//                data[j + 1] = tmp;
//            }
//        }
//    }
//    int count = 0;
//    for (i = 0; i <=dataLen - 1; i++)
//    {
//        if (k == data[i])
//        {
//            count++;
//        }
//
//    }
//    return count;
//}
//
//int main()
//{
//    int arr[] = { 3 };
//    int key = 3;
//    int len = sizeof(arr) / arr[0];
//    int ret = GetNumberOfK(arr, len, key);
//    printf("%d", ret);
//}
/**
 *
 * @param data int整型一维数组
 * @param dataLen int data数组长度
 * @param k int整型
 * @return int整型
 */
//int GetNumberOfK(int* data, int dataLen, int k) {
//    int i = 0;
//    for (i = 0; i < dataLen - 1; i++)
//    {
//        for (int j = 0; j < dataLen - 1 - i; j++)
//        {
//            if (data[j] > data[j + 1])
//            {
//                int tmp = data[j];
//                data[j] = data[j + 1];
//                data[j + 1] = tmp;
//            }
//        }
//    }
//    int count = 0;
//    for (i = 0; i <= dataLen - 1; i++)
//    {
//        if (k == data[i])
//        {
//            count++;
//        }
//
//    }
//    return count;
//}


//int f3(int n) {
//    int num = 0;
//    unsigned int flag = 1;
//    while (flag) {
//        if (n & flag)
//            num++;
//        flag = flag << 1;
//    }                                                                             
//    return num;
//}
//
//int convertInteger(int A, int B) {
//    int C = A ^ B;//异或
//    int t = f3(C);
//    return t;
//}
//
//

