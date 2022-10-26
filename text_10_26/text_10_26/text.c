#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//
//welcome to bit!!!!!
//*******************
//w*****************!
//we***************!!
//wel*************!!!
//...
//welcome to bit!!!!!
//
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	//char arr[] = "bit";//[b i t \0]
//	                   // 0 1 2 3
//	//strlen(arr)-1;
//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "*******************";
//	int left = 0;//左下标
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//Sleep函数是实现睡眠，单位是毫秒
//		system("cls");//system是一个库函数，可以执行系统命令，cls是清空屏幕的一个命令
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	//假设密码是：字符串“123456”
//	int i = 0;
//	char password[20] = {0};//字符数组，可以存放字符串
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);//数组名本质上就是地址，所以不需要取地址
//		// 
//		//判断两个字符串是否相等，要使用strcmp函数，不能直接使用==
//		//int ret = strcmp(password, "123456");
//		//如果第一个字符串小于第二个字符串，返回<0的数字
//		//如果第一个字符串大于第二个字符串，返回>0的数字
//		//如果第一个字符串等于第二个字符串，返回0
//		//
//		if (0 == strcmp(password,"123456"))
//		{
//			printf("登录成功\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("第%d次密码错误\n", i + 1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("******    1. play   ******\n");
	printf("******    0. exit   ******\n");
	printf("**************************\n");
}

//rand函数是专门用来生成随机数的
//rand函数返回的是0~RAND_MAX(32767)之间的一个随机数
//#define RAND_MAX 0x7fff
//

//
//rand函数在使用之前要使用一个srand函数来设置随机数的生成器
//srand函数在程序中只要调用一次就可以了，不需要频繁调用
//

//
//时间戳
//C语言中，time函数会返回时间戳
//
//NULL - 空指针
//
//void game()
//{
//	int num = 0;
//	//1. 生成随机数
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. 猜数字
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &num);
//		if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//打印菜单
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//game函数中是猜数字的整个路基逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}

//一个关机程序
//1. 程序执行起来就倒计时关机，60秒后关机
//如果输入：我是猪，就取消关机
//shutdown -s -t 60
//shutdown -a 取消关机
//
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意你的电脑在1分内关机，如果输入：我是猪，去取消关机\n");
//	scanf("%s", input);
//	//判断
//	if (strcmp(input, "我是猪") == 0)
//	{
//		printf("小乖乖，这就取消关机\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意你的电脑在1分内关机，如果输入：我是猪，去取消关机\n");
//		scanf("%s", input);
//		//判断
//		if (strcmp(input, "我是猪") == 0)
//		{
//			printf("小乖乖，这就取消关机\n");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//
//
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; 3*i <= 100; i++)
//	{
//		printf("%d ", 3*i);
//	}
//
//	//for (i = 3; i <= 100; i+=3)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	return 0;
//}
//


//写代码将三个整数数按从大到小输出。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入3个整数
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	//最大的值放在a中，最小值放在c中，剩余的一个放在b中
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//

//打印100~200之间的素数
//素数（质数）：只能被1 和 它本身整除的数字
//7 1 (2 3 4 5 6) 7
//n 2~n-1
//101
//2~100
//100
//2~99
//
//int main()
//{
//	int i = 0;
//	for (i = 9; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//拿2~i-1之间的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//sqrt 是开平方的库函数

#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//拿2~i-1之间的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//拿2~i-1之间的数字试除
//		int flag = 1;//假设i是素数
//		int j = 0;
//		for (j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//试除法

//
//《素数求解的N种境界》
//



//打印1000年到2000年之间的闰年
//闰年：
//1. 能被4整除，并且不能被100整除是闰年
//2. 能被400整除是闰年

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y+=4)
//	{
//		//判断y是不是闰年
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	//输入
//	scanf("%d %d", &m, &n);//18 24
//	int k = (m > n ? n : m);
//	//假设最大公约数就是m和n的较小值
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//		{
//			break;
//		}
//		k--;
//	}
//	printf("%d\n", k);
//
//	return 0;
//}


//
//闰年是怎么来的？
//

//int main()
//{
//	int m = 0;
//	int n = 0;
//	//输入
//	scanf("%d %d", &m, &n);//18 24
//	int k = 0;
//	while (k=m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//最小公倍数怎么求？
//6 8


//
//写代码也要看好的代码
//模仿好的代码，总结写代码和解题的思路
//





