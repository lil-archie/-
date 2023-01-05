#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("hello");
//	return 0;
//}
//int  cmp_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
struct stu
{
	char name[20];
	int age;
};
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age) - (((struct stu*)e2)->age);
//}
int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
bubble_sort(void* base,size_t sz,size_t width,int (*cmp)(const void * e1,const void * e2))
{
	size_t i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		size_t j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				
					
				
			}
		}
	}
}
int main()
{

	struct stu s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",55} };
	int sz = sizeof(s) / sizeof(s[0]);

	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
	return 0;
	
}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//数组长度
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int width = sizeof(arr[0]);
//	bubble_sort(arr, sz, width, cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void test2()
//{
//
//	struct stu s[3] = { {"zhangsan",30},{"lisi",20},{"wangwu",55} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);
//}