#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	while (n == 0)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	//1 2 3 4 5 6 7 8 9 10
//	int n = 1;
//	while (n <= 10)
//	{
//		if (5 == n)
//		{
//			continue;
//		}
//		printf("%d ", n);
//		n++;
//	}
//		
//	return 0;
//}


//int main()
//{
//	//1 2 3 4  6 7 8 9 10
//	int n = 0;
//	while (n < 10)
//	{
//		n++;
//		if (5 == n)
//		{
//			continue;
//		}
//		printf("%d ", n);
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch);//输入
//	//printf("%c\n", ch);//输出
//
//
//	ch = getchar();//输入一个字符
//	putchar(ch);//输出一个字符到屏幕上
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//%c - 字符
//%s -  字符串
//%d - 整型
//%f - float浮点数
//%lf - double 浮点数
//%p - 打印地址的
//%x - 以16进制的形式打印
//
//int main()
//{
//	//数组名本来就是地址
//	char password[20] = { 0 };
//	int ch = 0;
//
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//
//	//消除\n - 清理缓冲区
//	while (getchar()!='\n')
//	{
//		;
//	}
//		
//	printf("请确认密码(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//



//scanf - 按照指定的格式，输入数据
//printf - 按照指定的格式，输出数据
//没必要做深入研究，未来用得比较少

//int main()
//{
//	//int num = 0;
//	//scanf("%d", &num);
//	//printf("%d", num);
//
//	//float f = 0.0f;
//	//scanf("%f", &f);
//	//printf("%f\n", f);
//
//	return 0;
//}
//


//
//int main()
//{
//	int i = 1;//1 - 初始化
//
//	while (i < 10)//2 - 判断
//	{
//		printf("%d ", i);
//		i++;//3 - 调整
//	}
//
//	return 0;
//}

//使用for在屏幕上打印1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0~9
//	//打印数组的内容
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//for循环的初始化，判断和调整三个部分都可以省略
//	//但是省略调判断部分，判断就恒为真，循环就死循环
//
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//			continue;
//
//		i++;
//	} while (i<=10);
//
//	return 0;
//}
//

//while for  do.while
//1*2*3*4*5

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//5
//	//循环产生1~n的数字
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算 1!+2!+3!+……+10!
//1! =1
//2! =1*2 = 1!*2
//3! =1*2*3 = 2!*3
//4! =1*2*3*4=3!*4
//5!=4!*5


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	//调试 - 让代码一步步走，我们一步步的观察
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	//调试 - 让代码一步步走，我们一步步的观察
//	scanf("%d", &n);//3
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//在一个【有序数组】中查找具体的某个数字n
//
//int main()
//{
//	//数组如果有n个元素，最坏的情况下要找n次
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//查找7
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是:%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	//break, 找不到的时候也会来到这里
//	if (flag == 0)
//		printf("找不到\n");
//
//	return 0;
//}

int main()
{
	//数组如果有n个元素，最坏的情况下要找n次
	int arr[10] = { 1,2,3,4,5,6,17,18,19,110 };
	int k = 7;//查找7
	int left = 0;
	int right = 9;
	int flag = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;//求出中间元素的下标
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");

	return 0;
}

