#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//	short int a = 0;
//	printf("%d\n", sizeof(short));
//	return 0;
//}
//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数
//void Print(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}
//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//input_arr(int n)
//{
//	while (n)
//	{
//		n%10
//	}
//}
//int main()
//{
//	
//	int i = 0;
//	int n = 0;
//	for (n = 0; n < 100000; n++)
//	{
//		input_arr(n);
//	}
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 0;
//	for (n = 1; n<=99999; n++)
//	{
//		int tmp=n;
//		int i = 0;
//		int count = 0;
//		
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = n;
//		while (tmp)
//		{
//			i += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (i == n)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 99999; i++)
//	{
//		int tmp = i;//各位数
//		int count = 0;//n
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;//各位数
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}
#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr, int sz)
//{
//    int l = 0;
//    int r = sz - 1;
//    char* p = arr;
//    char tmp = 0;
//    while (l<r)
//    {
//        tmp = arr[l];
//        arr[l] = arr[r];
//        arr[r] = tmp;
//        l++;
//        r--;
//        p += 1;
//    }
//
//
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int i = 0;
//    /*gets(arr);*/
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    reverse_string(arr, sz);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//int Sum(int n)
//{
//	int sum = 0;
//	
//	
//	while (n < 99999)
//	{
//		sum = sum + Sum(n * 10 + i);
//	}
//	
//	return sum;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", n);
//	int i = n;
//	int sum=Sum(n);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i= 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = tmp * 10+n;
//
//		
//		sum += tmp;
//	}
//	printf("%d", sum);
//}
int main()
{
	int line = 0;
	scanf("%d", &line);//7
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j< line-i-1 ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) -1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}