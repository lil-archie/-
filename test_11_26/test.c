#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//本代码仅在VS2019 X86的环境下适用
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0~9
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//拷贝\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	/*if (src == NULL || dest == NULL)
//	{
//		return;
//	}*/
//
//	//断言
//	//assert中可以放一个表达式，表达式的结果如果为假，就报错，如果为真啥事都不发生
//	//assert 其实在release版本中优化了
//	/*assert(src != NULL);
//	assert(dest != NULL);*/
//
//	assert(dest && src);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest && src);//断言指针的有效性
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//
//int main()
//{
//	//strcpy - 字符串拷贝
//	//char arr1[20] = "xxxxxxxxxxx";
//	//char arr2[] =   "hello";
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	char arr3[20] = {0};
//	char* p = NULL;
//	my_strcpy(arr3, p);
//
//	return 0;
//}

//库函数的strcpy返回的是目标空间的起始地址
//

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//断言指针的有效性
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//	
//	//链式访问
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}


//
//int main()
//{
//	//int num = 10;
//	////通过指针p将num的值改为20
//	//int* p = &num;
//	//*p = 20;
//
//	//num = 20;//
//	//printf("%d\n", num);
//
//
//	const int num = 10;
//	//num = 20;//因为num被const修饰，不能被修改
//	
//	int n = 1000;
//	//int* const p = &num;
//	//*p = 20;//ok
//	//p = &n;//err
//
//	//const int* p = &num;
//	//*p = 20;//err
//	//p = &n;//ok
//
//	printf("%d\n", num);
//
//	return 0;
//}

//const 修饰指针变量的时候
//const int num = 10;
//int* p = &num;
//int n = 1000;
//1. const放在*的左边，const修饰的是指针指向的内容，表示指针指向的内容，不能通过指针来改变了;但是指针变量本身可以修改
//const int* p = &num;
// *p = 20;//err
// p = &n;//ok
// 
//2. const放在*的右边,const修饰的指针变量本身，表示指针变量本身的内容不能被修改，但是指针指向的内容，可以通过指针来改变。
//int* const p = &num;
//*p = 20;//ok
// p = &n;//err
//
//size_t  - unsigned int
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
//
//int main()
//{
//	printf("hehe");
//	return 0;
//}
//

//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//Ctrl + F

//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//
//	int n = (++i) + (++i) + (++i);
//
//	printf("%d\n", n);
//
//	return 0;
//}
//
////VS - 12
////gcc - 10
//
//
//int main()
//{
//	int a = 10;
//	int  const  *  p = &a;
//	
//
//	
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//模拟strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char*dest,char *src)
//{
//	assert(dest && src);
//	char *ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[20] = "hello";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//模拟strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr!='\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdef";
	int ret=my_strlen(arr);
	printf("%d ", ret);
	return 0;
}