#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 1234;
//    printf("%#o %#X", n, n);
//    return 0;
//
//}
//printf可以使用使用格式控制串“% o”、“% X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
//#include<stdio.h>
//void print(int n)
//{
//	while (n > 9)
//	{
//		printf("%d", n % 10);
//		n / 10;
//	}
//	printf("%d", n);
//	
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) )!=EOF)
//	{
//		print(n);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		while (n)
//		{
//			printf("%d", n%10);
//			n /= 10;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//} 
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr) - 1;
//	reverse(arr, arr + len);
//	char* cur = arr;
//	while (*cur)
//	{
//		char* start = cur;
//
//		while (*cur != ' ' && *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur-1);
//		if(*cur!='\0')
//		 cur++;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
//	
/**
 * 沙漏图形的特征：
 *  1. 上下对称；上半个沙漏符号数量 (1+3+5+...)
 *      可得出总符号数 N 和半个沙漏高度 H 的关系 ==> 2 * H * H - 1 <= N
 *  2. 上半部分每行空格数量递增 +1；符号数量递减 -2；下半部分相反
 * 每行的输出
 *  根据对称性，可以用绝对值函数 abs()，减少代码量；
 */
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int N, h;//符号的数量 ，半个沙漏的高度 
//    char sign; //符号 
//    scanf("%d %c", &N, &sign);
//    h = (int)sqrt((N + 1) / 2.0);
//    for (int i = 0; i < 2 * h - 1; i++) 
//    {//输出每行内容 
//        for (int j = 0; j < h - 1 - abs(h - 1 - i); j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2 * abs(h - 1 - i) + 1; j++)
//        {
//            printf("%c", sign);
//        }
//        putchar('\n');
//    }
//    printf("%d", N - 2 * h * h + 1);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N = 19;
//	
//	int h = 0;
//	h = (int)sqrt((N + 1) / 2.0);
//	
//	printf("%d", h);
//	return 0;
//}