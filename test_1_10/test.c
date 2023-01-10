#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
////模拟实现strlen
////第一种方法
//int my_strlen(const char * str)
//{
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//}
////第二种方式
//// 指针-指针
//int my_strlen(const char*str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
////第三种方式
////递归
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//
////模拟实现strcpy
////char *strcpy(char*dest,const char*str)
//char* my_strcpy(char* dest,const char*str)
//{
//	char* start = dest;
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "gefeff";
//	char* p = my_strcpy(arr1,arr2);
//	printf("%s", p);
//}
// 
// 
// 
// 
// 
// 
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "ahj";
//	//char* p = "abcdefghiqwer";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//
//模拟实现strcmp
//int strcmp(char * dest,const char*str)
//int my_strcmp( const char* str1, const char* str2)
//{
//	if (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	/*else
//		return *str1 - *str2;*/
//	else if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//	
//}
//int main()
//{
//	char arr1[] = "abz";
//	char arr2[] = "abf";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//		printf(">");
//	else if (ret == 0)
//		printf("=");
//	else
//		printf("<");
//	return 0;
//}



//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return *str1 - *str2;
//}
//
//
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	//VS环境下：
//	//> 1 
//	//= 0 
//	//< -1
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret>0)
//		printf("arr1>arr2\n");
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//
////模拟实现strcat
////
//char* my_strcat(char* dest, const char* str)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	return start;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//
////模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* sp = str1;
//	const char* s1 = str1;
//	const char* s2 = str2;
//	while (*sp)
//	{
//		s1 = sp;
//		str2 = s2;
//		while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char *)sp;
//		sp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcef";
//	char arr2[] = "bbc";
//	char * ret=my_strstr(arr1, arr2);
//	if (ret)
//	{
//		printf("NO\n");
//	}
//	else
//		printf("YES\n");
//	return 0;
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//int main()
//{
//	int n1 = sizeof(struct A);
//	int n2 = sizeof(struct B);
//	printf("%d ", n1);
//	printf("%d", n2);
//	return 0;
////}
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//int main()
//{
//	printf("%d", sizeof(long));
//	return 0;
//}
typedef struct {
	int a;
	char b;
	short c;
	short d;
}AA_t;
int main()
{
	printf("%d", sizeof(AA_t));
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//C语言的库函数在运行的时候，如果发生错误，就会将错误码存在一个变量中，这个变量是：errno
//错误码是一些数字：1 2 3 4 5 
//我们需要讲错误码翻译成错误信息
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
//
//

//strerror
//perror
//#include <errno.h>
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

#include <ctype.h>

//int main()
//{
//	int ret = isdigit('Q');
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	printf("%c\n", toupper('a'));
//	printf("%c\n", tolower('A'));
//
//	return 0;
//}
//

//I Have An Apple.
//int main()
//{
//	char arr[] = "I Have An Apple.";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//

#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	//前->后
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	//内存拷贝-memcpy
	//    int*   int*
	my_memcpy(arr2, arr1 + 2, 17);
	//01 00 00 00 02 00 00 00 03 00 00 00
}

void test2()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memcpy(arr1 + 2, arr1, 20);
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//前-->后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后->前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}

	return ret;
}


//void test3()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1+2, arr1, 20);
//}
//
//void test4()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr1, arr1+2, 20);
//}
//
//int main()
//{
//	test4();
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,6 };//01 00 00 00 02 00 00 00 06 00 00 00
//	int arr2[] = { 1,2,5 };//01 00 00 00 02 00 00 00 05 00 00 00
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//
//	return 0;
//}
//


//
//memset - 内存设置函数
//以字节为单位来设置内存中的数据的
//
//int main()
//{
//	//char arr[] = "hello world";
//	//memset(arr, 'x', 5);
//	//printf("%s\n", arr);
//	//memset(arr+6, 'y', 5);
//	//printf("%s\n", arr);
//
//	int arr[10] = { 0 };
//	memset(arr, 0, 40);
//
//	return 0;
//}


/*struct Stu
{
	char name[20];
	int age;
} s1,s2;*///全局变量,s1和s2是两个结构体变量

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//typedef struct Stu Stu;
//
// 
//int main()
//{
//	struct Stu s3, s4;//局部变量
//	Stu s5, s6;
//
//	return 0;
//}
//


//struct
//{
//	char name[20];
//	int age;
//}s1;

//struct
//{
//	int a;
//	char c;
//	double d;
//}x;
//
//struct
//{
//	int a;
//	char c;
//	double d;
//}* p;
//
//int main()
//{
//	p = &x;
//
//	return 0;
//}


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	struct Node n2;
//	n1.next = &n2;
//
//	return 0;
//}

//
//struct Point
//{
//	int x;
//	int y;
//}p1 = {10, 20};
//
//struct Point p2 = {0,0};
//
//struct S
//{
//	int num;
//	char ch;
//	struct Point p;
//	float d;
//};
//
//int main()
//{
//	struct Point p3 = {1,2};
//	struct S s = { 100, 'w', {2,5}, 3.14f};
//	struct S s2 = {.d=1.2f, .p.x=3,.p.y=5, .ch = 'q', .num=200};
//	printf("%d %c %d %d %f\n", s.num, s.ch, s.p.x, s.p.y, s.d);
//	printf("%d %c %d %d %f\n", s2.num, s2.ch, s2.p.x, s2.p.y, s2.d);
//
//	return 0;
//}

#include <stdio.h>
#include <stddef.h>


struct S1
{
	char c1;//
	int i;//
	char c2;//
};

struct S2
{
	char c1;//1
	char c2;//1
	int i;//4
};

//offsetof

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct S4));

	//printf("%d\n", sizeof(struct S3));

	////printf("%d\n", sizeof(struct S1));//12
	////printf("%d\n", sizeof(struct S2));//8
	//printf("%d\n", offsetof(struct S1, c1));
	//printf("%d\n", offsetof(struct S1, i));
	//printf("%d\n", offsetof(struct S1, c2));

	return 0;
}