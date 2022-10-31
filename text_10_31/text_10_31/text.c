#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,17,18,19,20,21 };//10
//	//0~9
//	int k = 21;
//	//找到了就返回下标
//	//找不到返回-1
//	//计算数组的元素个数
//	// 
//	//printf("%d\n", sizeof(arr));//40,这里计算整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4，这里计算数组第一个元素的大小，单位是字节
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d\n", pos);
//
//	return 0;
//}
//

//void Add(int* p)
//{
//	//*p = *p+1;
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}

//int Add(int n)
//{
//	return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//
//	num = Add(num);
//	printf("%d\n", num);
//
//	num = Add(num);
//	printf("%d\n", num);
//
//	return 0;
//}

//函数的返回类型不写的时候，默认是返回的是int类型
//int test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(2, 3);
//	return 0;
//}

//链式访问
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
//


//函数的声明
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求和
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
////函数的定义
////函数的定义也是一种特殊的声明
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//#include "add.h"
//
////导入静态库
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求和
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//变量的声明
//int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
////变量的定义
//int g_val = 2022;


//int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
////变量的定义
//int g_val = 2022;

//定义
//int val;
//全局变量不初始化的时候，默认是0
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}
//

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

//void Print(unsigned int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//}

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//写一个函数打印num的每一位
//	Print(num);
//	return 0;
//}

//
//整型指针+1,向后跳1个整型，就是4个字节
//

#include <string.h>
//模拟实现strlen
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//字符指针+1，向后跳1个字符
//	}
//	return count;
//}

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	//[b i t \0]
	//数组名其实是数组首元素的地址
	//
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}