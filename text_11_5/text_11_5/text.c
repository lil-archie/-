#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个函数求n的阶乘
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//5! = 1*2*3*4*5
//

//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//

//
//求第n个斐波那契数
//1 1 2 3 5 8 13 21 34 55 ...
//
//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)//统计第3个斐波那契数被计算的次数
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

////1 1 2 3 5 8 13 21 34 
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//写一个函数求第n个斐波那契数
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//

//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//...


//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//求10 个整数中最大值
//
//int main()
//{
//	int arr[10] = {0};
//	//输入
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum  = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%2==1)
//			sum = sum +  (1.0 / i);
//		else
//			sum = sum - (1.0 / i);
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//


//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//1 2 3 4 5 6 . 98 99 100
//	//9 19 29 39 49 59 69 79 89 99
//	//90 91 92 93 ........   98 99 
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//


#include <stdio.h>
/*
int main() {
	long long n = 0;
	scanf("%lld", &n);
	int i = 0;
	long long sum = 0;
	for(i=1; i<=n; i++)
	{
		sum += i;
	}
	printf("%lld\n", sum);

	return 0;
}

*/


//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    int i = 0;
//    long long sum = 0;
//    sum = (1 + n) * n / 2;
//    printf("%lld\n", sum);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", (n / 12) * 4 + 2);
//
//    return 0;
//}
//

//int test()
//{
//    return 3;
//    return 4;
//}

//void test(int arr[])
//{
//    arr[0] = 3;
//    arr[1] = 4;
//}
//int main()
//{
//    int arr[2] = { 0 }; 
//    printf("%d %d\n", arr[0], arr[1]);
//    test(arr);
//    printf("%d %d\n", arr[0], arr[1]);
//
//    return 0;
//}

//int x = 0;
//int y = 0;
//
//void test()
//{
//    x = 3;
//    y = 4;
//}
//
//int main()
//{
//    test();
//    printf("%d %d\n", x, y);
//
//    return 0;
//}
//
//

//int b;
//int main()
//{
//    static int a;
//    printf("%d %d\n", a, b);
//    return 0;
//}


void print_table(int line)
{
	int i = 0;
	for (i = 1; i <= line; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int line = 0;
	scanf("%d", &line);
	print_table(line);


	return 0;
}



















