#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print_table(int i)
//{
//	int a = 0;
//	int j = 0;
//	for (a = 1; a <= i; a++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%2d  ", a, j, a * j);
//			
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}
#include<stdio.h>
//void exchangenuber(int*pa,int*pb)
//
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	exchangenuber(&a ,&b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
//#include<stdio.h>
//int is_leap_year(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//	
//	
//	
//	
//
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if ((is_leap_year(y)) == 1)
//		printf("leapyear");
//	else
//		printf("not");
//
//	
//	
//	
//	return 0;
//}
////#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//字符串拷贝的时候
//	//hello bit
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	//把arr2中的字符串拷贝到arr1中
//	char* ret = strcpy(arr1, arr2);
//	printf("%s\n", ret);
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello bit";
//	printf("%s\n", arr);
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//写一个函数可以找出两个整数中的最大值

//定义函数
//
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
// 
//
//
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	//scanf("%d %d", &a, &b);
//	//找出a和b中的较大值
//	//int m = get_max(a, b);//推演函数的使用场景
//	int m = get_max(get_max(3, 7), 5);//推演函数的使用场景
//	
//	//输出
//	printf("%d\n", m);
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//写一个函数可以交换两个整形变量的内容。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	int tmp = 0;//第三个变量
//
//	tmp = a;
//	a = b;
//	b = tmp;
//
//	//输出
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//当函数调用的时候，实参传递给形参，这时形参是实参的一份
//临时拷贝，对形参的修改不影响实参。
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);//3 5 
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	//输出
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a = 20;
//
//	int* pa = &a;
//	*pa = 20;
//
//	printf("a=%d\n", a);
//
//	return 0;
//}
//

//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;//tmp = a;
//	*pa = *pb;    //a=b
//	*pb = tmp;    //b=tmp
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);//3 5 
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	//输出
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//#include<math.h>


//求100~200之间的素数

//是素数返回1
//不是素数返回0
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//不是素数
//		}
//	}
//	return 1;//是素数
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//
//写一个函数判断一年是不是闰年。
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年
//

//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		return 1;
//	}
//	if (y % 400 == 0)
//	{
//		return 1;
//	}
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y+=4)
//	{
//		//判断y是否为闰年
//		//是闰年返回1
//		//不是闰年返回0
//		if (is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int is_prime(void)
//{
//	int a = 0;
//	int j = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		for (j = 2; j <= 200; j++)
//		{
//			if (a % j == 0)
//				break;
//
//
//		}
//		printf("%d\n", a);
//	}
//	
//	return 0;
//	
//}
//
//int main()
//{
//	
//	
//	is_prime();
//
//	return 0;
//
//}
#include<math.h>
#include<stdio.h>
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j <sqrt(i); j++)
	{
		if (i % j == 0)
			return 0;
	}
	/*if (i == j)
	{
		return 1;
	}*/
	return 1;
}
int main()
{
	int a = 0;
	for (a = 100; a <= 200; a++)
	{
		if (is_prime(a))
		{
			printf("%d ", a);
		}
	}
	return 0;
}

