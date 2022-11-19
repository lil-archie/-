#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	*pa = 20;//* - 解引用操作
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


//指针类型其实是有意义的
//1. 指针类型决定了，指针进行解引用操作的时候，一次性访问几个字节，访问权限的大小
//如果是char*的指针，解引用访问1个字节
//如果是int*的指针，解引用访问4个字节
//float* ----------------- 4个字节
//2. 指针类型决定指针的步长（指针+1到底跳过几个字节）
// 字符指针+1，跳过1个字节
// 整型指针+1，跳过4个字节
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
//	//int* pa = &a;//指针的初始化
//
//	//int* p = NULL;//NULL - 空指针，专门用来初始化指针
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


//写一个函数求一个字符串的长度
//1. 计数器
//2. 递归
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
//	//赋值
//	for (i = 0; i < sz; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	//打印
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
//	//赋值
//	for (i = 0; i < sz; i++)
//	{
//		*p++ = i + 1;
//	}
//	//打印
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
	//赋值
	for (i = 0; i < sz; i++)
	{
		*(p + i) = i + 1;
	}
	//打印
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




