#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	int key = 7;
//	
//	while (left <= right)
//	{
//		 mid = (left + right) / 2;
//		if (arr[mid] < key)
//		{
//			left += 1;
//
//		}
//		else if (arr[mid] > key)
//		{
//			right -= 1;
//		}
//		else
//			break;
//		
//		
//
//	}
//	if (left <= right)
//	{
//		printf("找到目标数字下标:%d", mid);
//	}
//	else
//	{
//		printf("找不到了\n");
//	}
//	
//	
//	
//	
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了,下标是%d\n", mid);
//	else
//		printf("找不到\n");
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 9; i < 100; i+=10)
//	{
//		
//		count1++;
//
//	}
//	for (j = 90; j < 99; j++)
//	{
//		
//		count2++;
//	}
//	printf("%d\n", count1 + count2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = 1.0 / i + sum;
//		i = -i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int mian()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int a = 0;
//	int c = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2,1,3,5,6,7,8,10,9,4 };
//	int Max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > Max)
//		{
//			Max = arr[i];
//			Max = arr[i];
//		}
//	}
//	printf("%d",Max);
//	
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double ret = 0;
//	double sum = 0;
//	for (i = 1; i < 101; i++)
//	{
//		ret = (pow(-1, i + 1)) / i;
//		sum += ret;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j =1 ; j <= i; j++)
//		{
//			printf("%d*%d=%-2d", i ,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}