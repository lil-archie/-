#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,17,18,19,20,21 };//10
//	//0~9
//	int k = 21;
//	//�ҵ��˾ͷ����±�
//	//�Ҳ�������-1
//	//���������Ԫ�ظ���
//	// 
//	//printf("%d\n", sizeof(arr));//40,���������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4��������������һ��Ԫ�صĴ�С����λ���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n", pos);
//
//	return 0;
//}
//

//void Add(int* p)
//{
//	//*p = *p+1;
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}

//int Add(int n)
//{
//	return n + 1;
//}
//
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//
//	num = Add(num);
//	printf("%d\n", num);
//
//	num = Add(num);
//	printf("%d\n", num);
//
//	return 0;
//}

//�����ķ������Ͳ�д��ʱ��Ĭ���Ƿ��ص���int����
//int test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	Add(2, 3);
//	return 0;
//}

//��ʽ����
//#include <string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}
//


//����������
//int Add(int x, int y);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//���
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
////�����Ķ���
////�����Ķ���Ҳ��һ�����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//#include "add.h"
//
////���뾲̬��
//#pragma comment(lib, "add.lib")
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//���
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//����������
//int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
////�����Ķ���
//int g_val = 2022;


//int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}
//
////�����Ķ���
//int g_val = 2022;

//����
//int val;
//ȫ�ֱ�������ʼ����ʱ��Ĭ����0
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}
//

//int main()
//{
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

//void Print(unsigned int n)
//{
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//}

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//дһ��������ӡnum��ÿһλ
//	Print(num);
//	return 0;
//}

//
//����ָ��+1,�����1�����ͣ�����4���ֽ�
//

#include <string.h>
//ģ��ʵ��strlen
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//�ַ�ָ��+1�������1���ַ�
//	}
//	return count;
//}

int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "bit";
	//[b i t \0]
	//��������ʵ��������Ԫ�صĵ�ַ
	//
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}