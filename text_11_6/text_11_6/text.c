#define  _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "123456";
//	int sz1 = strlen(arr1)-1;
//	int sz2 = strlen(arr2)-1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= sz1; i++)
//	{
//			
//			char tmp = arr1[i];
//			arr1[i] = arr2[j];
//			arr2[j] = tmp;
//			j++;
//			
//		
//		
//	}
//	printf("%s %s", arr1, arr2);
//	return 0;
//}

//��ҵ����
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0


//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

#include<stdio.h>
//#include<string.h>
void init( int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <sz; i++)
	{
		arr[i] = 0;
	}
	
}
int main()
{
	 int  arr[] = { 1,2,3,4,5,6 };
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 init(arr,sz);
	 printf("%d", arr[0]);
	 
	
	return 0;
}
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//#include<stdio.h>
//#include<string.h>
//void print(int arr[])
//{
//	int len = strlen(arr)-1;
//	int i = 0;
//
//	for(i = 0; i <= len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void print(int *arr,int sz) 
//{
//	int i = 0;
//	
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int sz = (sizeof(arr) / sizeof(arr[0]));
//	print(arr,sz);
//	return 0;
//}
//ʵ��reverse()  �����������Ԫ�ص����á�
//#include<stdio.h>
//void reverse(char*arr,int sz)
//{
//	int n = 0;
//	while (n < sz)
//	{
//		char tmp = arr[n];
//		arr[n] = arr[sz];
//		arr[sz] = tmp;
//		n++;
//		sz--;
//
//	}
//}
//int main()
//
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0])-2;
//	reverse(arr,sz);
//	printf("%s", arr);
//	return 0;
//}