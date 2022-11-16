#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n", a, b, c);
//	return 0;
//}
//


//int NumberOf1(unsigned int n) 
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}


//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//-1
//	//计算
//	int ret = NumberOf1(n);
//	//输出
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//void Print(int n)
//{
//	int i = 0;
//	printf("奇数位: ");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位: ");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);//打印n的2进制中的所有奇数位和所有的偶数位
//	return 0;
//}
//

//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//int count_diff_one(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//异或操作符
//相同为0，相异为1
//int count_diff_one(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	//统计tmp的二进制中有几个1
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_one(m ,n);
//	printf("%d\n", ret);
//	return 0;
//}

//
//#include <stdio.h>
//
//int Fib(int n)
//{
//    if (n <= 2)
//        return n;
//    else
//        return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}
//
//

#include <stdio.h>
//
//1  2  3  4  5  6  7  8  9  10 11 12
//31 28 31 30 31 30 31 31 30 31 30 31
//   29 
//
//
//int get_days_of_month(int y, int m)
//{
//    int day = 0;
//    switch (m)
//    {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        day = 31;
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        day = 30;
//        break;
//    case 2:
//    {
//        day = 28;
//        if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//            day++;
//    }
//    break;
//    }
//    return day;
//}
//
//int main() {
//    int y = 0;
//    int m = 0;
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        int ret = get_days_of_month(y, m);
//        printf("%d\n", ret);
//    }
//
//    return 0;
//}

//
//int get_days_of_month(int y, int m)
//{
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    //                1  2  3  4  5  6  7  8  9  10 11 12
//    int day = days[m];
//    if ((m == 2) && (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)))
//    {
//        day++;
//    }
//    return day;
//}
//
//int main() {
//    int y = 0;
//    int m = 0;
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        int ret = get_days_of_month(y, m);
//        printf("%d\n", ret);
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

#include <stdio.h>
/*
int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int tmp = 0;
    int sum = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &tmp);
            if(tmp>0)
                sum += tmp;
        }
    }
    printf("%d\n", sum);
    return 0;
}
*/
/*
int main() {
    int n = 0;
    int m = 0;
    int arr[10][10] = {0};//没必要
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int tmp = 0;
    int sum = 0;
    //输入
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    //计算
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }
    }
    //输出
    printf("%d\n", sum);
    return 0;
}
*/

//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];//变长数组，因为牛客网的oj是支持C99标准的，所以可以使用
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int sum = 0;
//    //输入
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //计算
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (arr[i][j] > 0)
//                sum += arr[i][j];
//        }
//    }
//    //输出
//    printf("%d\n", sum);
//    return 0;
//}
//
//
//#include <stdio.h>
////递归的实现
//void Print(int n)
//{
//    if (n > 5)
//    {
//        Print(n / 6);
//    }
//    printf("%d", n % 6);
//}
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    Print(n);
//    return 0;
//}
//
////数组实现
//int main()
//{   
//    int arr[20] = {0};
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while(n)
//    {
//        arr[i++] = n%6;
//        n/=6;
//    }
//    for(--i; i>=0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //打印
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//



//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];//C99
//    //接收n个数字
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    //接收删除的值
//    scanf("%d", &del);
//    int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据的
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//



