#define  _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//
//	return 0;
//}
//#include <stdio.h>
////�������
//int main()
//{
//	int n;
//	printf("������Ҫ��ӡ��������");
//	scanf("%d", &n);
//	int a[100][100];
//	for (int i = 0; i < n; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;    //�Ƚ��������ÿ�еĵ�һ�������һ����ֵΪ1 
//	}
//
//	for (int i = 2; i < n; i++)      //��֪ÿ�����������Ϸ�������֮�� 
//	{
//		for (int j = 1; j < i; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//
//
//	for (int i = 0; i < n; i++)     //��ӡ��� 
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("Ҫ��ӡ��������");
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100][100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int  check(void)
//{
//	int k = 1;
//	return (*(char*)&k);
//}
//int main()
//{
//	int ret=check();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	const char* p = "abcdef";
//	//*p = 'w';
//	printf("%s\n", p);
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//ָ������

//�������� - ������͵�����
//�ַ����� - ����ַ�������
//ָ������ - ���ָ��(��ַ)������

//int main()
//{
//	//����ַ�ָ�������
//	const char* arr[4] = { "abcdef","qwer", "hello bit", "hehe" };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int arr4[5] = { 0,0,0,0,0 };
//	//ָ������
//	int* arr[4] = {arr1, arr2, arr3, arr4};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//arr[i][j]
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	int num = 10;
//	int* pi = &num;
//
//	int arr[10];
//
//	//pa����һ������ָ��
//	int (*pa)[10] = &arr;
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int *pa = &a;
//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	////&arrȡ����������ĵ�ַ��ֻ������ĵ�ַ����Ҫ����������
//	//int (*p)[10] = &arr;
//	//              //int*
//	////int(*p2)[10] = arr;//
//
//	////������ - ������Ԫ�صĵ�ַ
//	////&������ - ������ĵ�ַ
//	////������Ԫ�صĵ�ַ������ĵ�ַ��ֵ�ĽǶ�������һ���ģ��������岻һ��
//
//	//printf("%p\n", arr);//int* 
//	//printf("%p\n", arr + 1);//4
//
//	//printf("%p\n", &arr[0]);//int*
//	//printf("%p\n", &arr[0]+1);//4
//
//	//printf("%p\n", &arr);// int(*)[10]
//	//printf("%p\n", &arr+1);//40
//
//	//char arr[5];
//	//char (*pc)[5] = &arr;
//
//
//	return 0;
//}
//

//
//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int (* p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//                   //arr[i]
//	}*/
//
//
//	/*int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//
//	return 0;
//}
//void print1(int arr[3][4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[4], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{			
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4}, {2,3,4,5} , {3,4,5,6} };
//	//print1(arr, 3, 4);
//	print2(arr, 3, 4);
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//int arr[10];
//	//int (*pa)[10] = &arr;
//
//	//int (*pf)(int, int) = &Add;
//	int (* pf)(int, int) = Add;
//	//int ret = Add(2, 3);
//	int ret = pf(2, 3);
//
//	printf("%d\n", ret);
//
//	//int (*pf)(int, int) = Add;
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	
//	//pf ��һ����ź�����ַ��ָ����� -  ����ָ��
//	return 0;
//}

//
//int main()
//{
//	//�ô�����һ�κ�������
//	//����0��ַ����һ������
//	//���ȴ����н�0ǿ������ת��Ϊ����Ϊvoid (*)()�ĺ���ָ��
//	//Ȼ��ȥ����0��ַ���ĺ���
//	//( *( void (*)() ) 0 )();
//	//��C�����ȱ�ݡ�
//
//	typedef unsigned int uint;
//
//	typedef void(*pf_t)(int) ;
//	pf_t signal(int, pf_t);
//
//	void (* signal( int, void(*)(int) ) )(int);
//	//�ô�����һ�κ���������
//	//�����ĺ������ֽ�signal
//	//signal�����Ĳ�����2������һ����int���ͣ��ڶ����Ǻ���ָ�����ͣ��ú���ָ���ܹ�ָ����Ǹ������Ĳ�����int
//	//����������void
//	//signal�����ķ���������һ������ָ�룬�ú���ָ���ܹ�ָ����Ǹ������Ĳ�����int,����������void
//	// 
//	//void (*)(int) signal(int, void(*)(int));
//
//	return 0;
//}