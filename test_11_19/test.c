#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	*pa = 20;//* - �����ò���
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;
//	*pc = 0;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;//int*
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*pc = 1;
//		pc++;
//	}
//
//	//int* pa = &a;
//	//char* pc = &a;
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//
//	//printf("%p\n", pc);
//	//printf("%p\n", pc+1);
//
//	return 0;
//}


//ָ��������ʵ���������
//1. ָ�����;����ˣ�ָ����н����ò�����ʱ��һ���Է��ʼ����ֽڣ�����Ȩ�޵Ĵ�С
//�����char*��ָ�룬�����÷���1���ֽ�
//�����int*��ָ�룬�����÷���4���ֽ�
//float* ----------------- 4���ֽ�
//2. ָ�����;���ָ��Ĳ�����ָ��+1�������������ֽڣ�
// �ַ�ָ��+1������1���ֽ�
// ����ָ��+1������4���ֽ�
//


//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	*p = 20;
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}
//

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	printf("hehe\n");
//
//	printf("%d\n", *p);
//
//	return 0;
//}
//



//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//ָ��ĳ�ʼ��
//
//	//int* p = NULL;//NULL - ��ָ�룬ר��������ʼ��ָ��
//	//if (p != NULL)
//	//{
//	//}
//
//	return 0;
//}


//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 0 };
//	//printf("%d\n", &arr[0] - &arr[9]);
//	//printf("%d\n", &arr[0] - &ch[4]);
//
//	return 0;
//}


//дһ��������һ���ַ����ĳ���
//1. ������
//2. �ݹ�
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str++ != '\0')
//		;
//	return str - start - 1;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}
//
//
//int main()
//{
//	//1~10
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ֵ
//	for (i = 0; i < sz; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	//��ӡ
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}


//
//int main()
//{
//	//1~10
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ֵ
//	for (i = 0; i < sz; i++)
//	{
//		*p++ = i + 1;
//	}
//	//��ӡ
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}



int main()
{
	//1~10
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ֵ
	for (i = 0; i < sz; i++)
	{
		*(p + i) = i + 1;
	}
	//��ӡ
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p+i));
	//}
	for (i = 0; i < sz; i++)
	{
		//printf("%d ", *(arr+i));
		//printf("%d ", *(i+arr));
		//printf("%d ", i[arr]);
		printf("%d ", arr[i]);
	}

	return 0;
}




