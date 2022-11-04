#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>

//int Fib(int i)
//{
//	if (i <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(i - 1) + Fib(i - 2);
//	}
//}
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	
//	while(i>2)
//	{
//		
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//		
//		
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>

//int Fac(int i)
//{
//	if (i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return i * Fac(i - 1);
//	}
//}
//#include<stdio.h>
//int Fac(int i)
//{
//	int sum = 1;
//	if (i == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		int j = 0;
//		for (j = 1; j <= i;j++)
//		{
//			sum = sum * j;
//		}
//		return sum;
//		
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
#include<stdlib.h>

void reverse_string(char* string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}

int main()
{
	
	char arr1[] = "abcdef";
	reverse_string(arr1);
	system("pause");
	
	return 0;

}