#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//a=20
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;//pa是一级指针变量
//	int* * ppa = &pa;//ppa就是一个二级指针变量
//	**ppa = 50;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** * pppa = &ppa;//pppa是一个三级指针变量
//
//	return 0;
//}
//

//1 2 3 4 5
//
//int main()
//{
//	//int arr[5] = { 1,2,3,4,5 };
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr[5] = {&a, &b, &c, &d, &e};
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//
//int main()
//{
//	//假设我想模拟出一个3行4列的数组
//	int a[] = { 1,2,3,4 };
//	int b[] = { 2,3,4,5 };
//	int c[] = { 3,4,5,6 };
//	int* arr[3] = { a, b, c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

//
//struct Stu
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//} s4,s5;//s4, s5也是结构体变量的 - 全局的
//
//struct Stu s6;
//
//int main()
//{
//	struct Stu s1, s2, s3;//s1,s2,s3也是结构体变量的 - 局部的
//
//	return 0;
//}
//
//struct Stu
//{
//	//结构体成员
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//};
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "nan", 95.5f};
//	struct Stu s2 = { "旺财", 21, "保密", 59.5f };
//
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex, s2.score);
//
//	return 0;
//}
//
//
//struct S
//{
//	int a;
//	char c;
//};
//
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//};
//
//void Print1(struct P sp)
//{
//	//结构体变量.成员
//	printf("%lf %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//
//void Print2(struct P* p1)
//{
//	printf("%lf %d %c %f\n", (*p1).d, (*p1).s.a, (*p1).s.c, (*p1).f);
//	//结构体指针->成员
//	printf("%lf %d %c %f\n", p1->d, p1->s.a, p1->s.c, p1->f);
//}
//
//int main()
//{
//	struct P p = { 5.5, {100, 'b'}, 3.14f};
//	//scanf("%d %c", &(p.s.a), &(p.s.c));
//	//printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//	//Print1(p);//传值调用
//	//Print2(&p);//传址调用
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//

//在小端机器中，下面代码输出的结果是：（ ）

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//
//数字在内存中存储的时候
//
//int main()
//{
//	int a = 0x11223344;
//	
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//打印
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}
//


//写一个函数，可以逆序一个字符串的内容

#include <stdio.h>
/*
void reverse(char* str)
{
    int left = 0;
    int right = strlen(str)-1;

    while(left<right)
    {
        char tmp = *(str+left);
        *(str+left) = *(str+right);
        *(str+right) = tmp;
        left++;
        right--;
    }
}
*/

void reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;

    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = { 0 };
    //scanf("%s", arr);//这里有问题，scanf默认读取的时候遇到空格就结束了
    gets(arr);
    //scanf("%[^\n]", arr);
    reverse(arr);
    printf("%s\n", arr);

    return 0;
}


void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = { 0 };
    //scanf("%s", arr);//这里有问题，scanf默认读取的时候遇到空格就结束了
    gets(arr);
    //a b c d e f \0
    //scanf("%[^\n]", arr);
    reverse(arr, arr + strlen(arr) - 1);
    printf("%s\n", arr);

    return 0;
}

