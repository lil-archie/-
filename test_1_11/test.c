#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
////模拟实现memcpy
//void * my_memcpy( void * dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* start = dest;
//	while (num--)
//	{
//		*((char*)dest) = *((char*)src);
//		(char*)dest += 1;
//		(char*)src += 1;
//	}
//	return start;
//}
////void test1()
////{
////	char arr1[] = "abcdef";
////	char arr2[] = "bbcddf";
////	my_memcpy(arr1, arr2, 6);
////	printf("%s", arr1);
////}
//void test2()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memcpy(arr1+2, arr1, 20);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


////模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* start = dest;
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*((char*)dest) = *((char*)src);
//			(char*)dest += 1;
//			(char*)src += 1;
//		}
//		return start;
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		return start;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	my_memmove(arr1 + 2, arr1, 20);
//	return 0;
//}


//int main()
//{
//	char *p = "blogGO1ING@CSDN.net";
//	const char *del = "@.";
//	char arr[25];
//	char* str = NULL;
//	strcpy(arr, p);
//	for (str = strtok(arr, del); str != NULL; str = strtok(NULL, del))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//
//	return 0;
//}