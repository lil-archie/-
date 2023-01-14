#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>
void find_num(int arr[], int len)
{
	int i = 0;//循环变量
	int ret = 0;//记录所有值异或的结果
	int pos = 0;//记录ret二进制为第一个为1的位置
	int x = 0;//将一组值异或在x，得到1个没有相同数字的值
	int y = 0;//将另一组值异或在x，得到另1个没有相同数字的值
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}//将数组的所有值异或
	for (i = 0; i < 32; i++)
	{
		if (1 == ((ret >> i) & 1))
		{
			pos = i;
			break;
		}
	}//找到ret二进制为第一个为1的位置
	for (i = 0; i < len; i++)
	{
		if (1 == ((arr[i] >> pos) & 1))
		{
			x ^= arr[i];
		}
		else
			y ^= arr[i];
	}//分组异或
	printf("x=%d,y=%d\n", x, y);

}
int main()
{
	int arr[] = { 1, 1, 2, 2,4 , 3, 5, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find_num(arr, sz);
	system("pause");
	return 0;
}




////模拟实现strncpy
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	char* start = dest;
//	int i = 0;
//	while (*dest && i < num)
//	{
//		*dest++ = *src++;
//		i++;
//	}
//	for(int j=i;j<num;j++)
//	{
//		*dest++ = '0';
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "abcedf";
//	char arr2[] = "cdef";
//	char * p=my_strncpy(arr1,arr2,5);
//	//char * p=strncpy(arr1, arr2,6);
//	printf("%s", p);
//	return 0;
//}
//
//int main()
//{
//	char* p = "    +-2671223abcdef";
//	printf("%d", atoi(p));
//	return 0;
//}
//

////
//#include<stdio.h>
//#include<assert.h>
//#include<limits.h>
//#include<ctype.h>
//enum State
//{
//	INVALID,//异常  0
//	VALID//正常 1
//};
//enum State state = INVALID;
//int my_atoi(const char* str)
//{
//	//1.指针为NULL
//	assert(str);
//	//2.字符串内容为空
//	if (*str == '\0')
//		return 0;//异常返回
//	//3.空格等
//	while (isspace(*str))
//	{
//		str++;
//	}
//	//4.正负号
//	int flag = 1;
//	while (*str == '+' || *str == '-')
//	{
//		if (*str == '+')
//		{
//			flag = 1;
//			str++;
//		}
//		else
//		{
//			flag = -1;
//			str++;
//		}
//	}
//	//5.非数字字符
//	//6.字符串转换后的数组超过了最大整型数
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;//异常返回
//			}
//			str++;
//		}
//		else
//		{
//			state = VALID;//合法返回
//			return (int)ret;
//		}
//	}
//	state = VALID;//合法返回
//	return (int)ret;
//}
//int main()
//{
//	char* p = "   +1234bfg";
//	int ret = my_atoi(p);
//	if (state == VALID)
//	{
//		printf("转换后的正确值为：%d\n", ret);
//	}
//	else
//	{
//		printf("错误\n");
//	}
//	return 0;
//}


//
//
//



////模拟实现atoi
//enum sign
//{
//	INVALID,//0
//	VALID//1
//
//};
////模拟实现atoi
//int my_atoi(const char* ptr)
//{
//	assert(ptr);
//	int   flag = 0;
//	
//	if (*ptr == '\0')
//		return 0;
//	while (isspace(*ptr))
//		ptr++;
//	while (*ptr == '-' || *ptr == '+')
//	{
//		if (*ptr == '-')
//		{
//			flag = -1;
//			ptr++;
//		}
//		else
//		{
//			flag = 1;
//			ptr++;
//		}
//
//
//	}
//	long long ret = 0;
//	/*while (*ptr)
//	{
//		if (isdigit(*ptr))
//		{
//			ret = ret * 10 + flag * (*ptr - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//
//			}
//			ptr++;
//		}
//		else
//			return (int)ret;
//
//
//	}*/
//    while (*ptr)
//	{
//		if (isdigit(*ptr))
//		{
//			ret = ret * 10 + flag * (*ptr - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;//异常返回
//			}
//			ptr++;
//		}
//		else
//		{
//			
//			return (int)ret;
//		}
//	}
//}
//int main()
//{
//	char* p = "   +1234bfg";
//	int ret = my_atoi(p);
//	printf("%d", ret);
//	return 0;
//}





////模拟实现strncat
//char* my_strncat(char*dest,const char*src,size_t num)
//{
//	char* start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	int i = 0;
//	while ((*dest++ = *src++) && i < num)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcd";
//	char*p=my_strncat(arr1, arr2, 4);
//	//char *p=strncat(arr1, arr2, 6);
//	printf("%s", p);
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//


//int main()
//{
//	char* p = "hehe\n";
//	
//	printf("hehe\n");
//	printf(p);
//	return 0;
//}
//
//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);//?
//	
//	return 0;
//}

//
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//

//
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	char c;
//	char arr[0];//数组的大小是未知
//};
//
//struct S
//{
//	int n;//4
//	char arr[];//数组的大小是未知 - 柔性数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(char));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'Q';
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//增容
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S)+20*sizeof(char));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//使用
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	char* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (char*)malloc(sizeof(char)*10);
//	if (ps->arr == NULL)
//	{
//		perror("malloc->arr");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'Q';
//	}
//	//增加
//	char* ptr = (char*)realloc(ps->arr, 20*sizeof(char));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	else
//	{
//		perror("realloc->ptr");
//		return 1;
//	}
//	//使用
//
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



int main()
{
	//D:\\code\\test.txt - 绝对路径
	//
	FILE* pf = fopen("test2.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	else
	{
		printf("打开文件成功\n");
	}
	//读文件
	//....

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}