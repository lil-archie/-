#define  _CRT_SECURE_NO_WARNINGS 1
//int square(int n)
//{
//	while()
//		square(n*n)
//}
//
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	
//	
//	return 0;
//}
//#include<stdio.h>
//int count_string(char*arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	
//
//	int ret=count_string(arr);
//	printf("%d", ret);
//	
//	
//	
//	return 0;
//}
//µİ¹éÊµÏÖÇó×Ö·û´®


//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//		return my_strlen(str) + 1;
//	}
//	else
//		return 0;
//	
//}
//int main()
//{	
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	
//	return 0;
//}
//#include<stdio.h>
//void get_number(int x)
//{
//	if (x > 9)
//	{
//		get_number(x / 10);
//		
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	get_number(a);
//
//	return 0;
//}
//#include<stdio.h>
//int get_square(int n, int k)
//{
//	if (k > 0)
//	{
//		--k;
//		return get_square(n, k) * n;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = get_square(a, b);
//	printf("%d", ret);
//	return 0;
//}
#include<stdio.h>
int DigtSum(int b)
{
	int m = 0;
	int sum = 0;
	if (b != 0)
	{
		m = b % 10;
		b = b / 10;
		sum = m + DigtSum(b);

	}
	return sum;
}

int main()
{
	int a = 0;
	scanf("%d", &a);

	int ret=DigtSum(a);
	printf("%d", ret);



	return 0;
}