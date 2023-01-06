#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<search.h>
#include<string.h>
#include<assert.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//void test1()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_by_age(const void *e1,const void* e2)
//{
//	return (((struct stu*)e1)->age) - (((struct stu*)e2)->age);
//
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age) - (((struct stu*)e2)->age);
//}
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return (strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name));
//}
//void test2()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",50},{"wangwu",33} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int width = sizeof(s[0]);
//	qsort(s, sz, width, cmp_by_name);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//例如
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void left_move(char *arr,int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		for (int j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	//第一部分
//	reverse(arr, arr + k-1);
//	//中间部分
//	reverse(arr + k, arr + len - 1);
//	//最后逆序
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr,k);
//	printf("%s", arr);
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//int is_left_move(char arr1[], char arr2[])
//{
//	assert(arr1 && arr2);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) != NULL)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[20] = "ABCD";
//	char arr2[] = "BCDA";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//0~255
//	unsigned char a = 200;
//	//00000000000000000000000011001000
//	//11001000 - a
//	unsigned char b = 100;
//	//00000000000000000000000001100100
//	//01100100 - b
//	
//	unsigned char c = 0;
//
//	c = a + b;
//	//00000000000000000000000011001000 - a
//	//00000000000000000000000001100100 - b
//	//00000000000000000000000100101100 -a+b
//	//00101100 - c
//	//
//	printf("%d %d", a + b, c);
//	//300 44
//	return 0;
//}
//


//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//
//	return 0;
//}

//在32位大端模式处理器上变量b等于（ ）
//题目内容：
//A .0x00
//B .0x12
//C .0x34
//D .0x1234


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；(b==2) + (a==3) == 1
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//A:1 2 3 4 5
//B:
//C:
//D:
//E:
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2) + (a==3) == 1) &&
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1))
//						{//1*2*3*4*5
//							if(a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//} 
//

//
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//


//
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//A .int (*(*F)(int, int))(int)
//B .int (*F)(int, int)
//C .int(*(*F)(int, int))
//D .*(*F)(int, int)(int)

//int main()
//{
//	int(*(*F)(int, int));
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10];
//	int* p = &arr;
//
//	return 0;
//}

//void test(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(&arr[0][0]);//arr作为二维数组的数组名，表示是数组首元素的地址，是第一行的地址，是一个一维数组的地址
//	//类型是数组指针
//
//	return 0;
//}
//
//int find_k(int arr[3][3], int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x<=*px-1 && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 17;//查找的值
//	int x = 3;
//	int y = 3;
//	int ret = find_k(arr, &x, &y, k);
//	if (ret == 0)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d %d", x, y);
//
//	return 0;
//}
//


//题目名称：
//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <string.h>

//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//旋转1个字符
//		//1
//		char tmp = arr[0];
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}
#include <assert.h>
//
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char arr[], int k)
{
	int len = strlen(arr);
	k %= len;
	//逆序左
	reverse(arr, arr + k - 1);
	//逆序右
	reverse(arr + k, arr + len - 1);
	//逆序整体
	reverse(arr, arr + len - 1);
}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 8;
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//题目名称：
//字符串旋转结果
//题目内容：
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//#include <string.h>
//
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) != NULL)
//		return 1;
//	else
//		return 0;
//}
//
////AABCDAABCD
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "ABCDA";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	char arr[20] = "hello ";
//	strncat(arr, "world", 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	//是在arr1字符串中查找arr2是否存在
//	//如果存在则返回arr2在arr1中的地址
//	//如果不存在返回NULL
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";
//
//	char *ret = strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//
//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//

