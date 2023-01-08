#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//1. sizeof(数组名)，数组名表示整个数组。计算的是整个数组的大小,单位是字节
//2. &数组名，数组名表示整个数组。取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
//
//
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//a+0 其实是数组第一个元素的地址，是地址就是4/8字节
//	printf("%d\n", sizeof(*a));//*a是数组首元素，计算的是数组首元素的大小，单位是字节，4
//	printf("%d\n", sizeof(a + 1));//a+1是第二个元素的地址，是地址大小就是4/8
//	printf("%d\n", sizeof(a[1]));//a[1]是第二个元素，计算的是第二个元素的大小-4-单位是字节
//	printf("%d\n", sizeof(&a));//&a是整个数组的地址，整个数组的地址也是地址，地址的大小就是4/8字节
//	//&a---> 类型：int(*)[4]
//
//	printf("%d\n", sizeof(*&a));//&a是数组的地址，*&a就是拿到了数组，*&a--> a,a就是数组名，sizeof(*&a)-->sizeof(a)
//	//计算的是整个数组的大小，单位是字节-16
//
//	printf("%d\n", sizeof(&a + 1));//&a是整个数组的地址，&a+1，跳过整个数组，指向数组后边的空间，是一个地址，大小是4/8字节
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，计算的是首元素地址的大小，4/8字节
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1是第二个元素的地址，地址的大小就是4/8字节
//	return 0;
//}

//sizeof ----> size_t -> unsigned int
#include <string.h>

//size_t strlen(const char* str)
//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	//char*
//	//char [6]
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//strlen('a')->strlen(97),非法访问-err
//	//printf("%d\n", strlen(arr[1]));//'b'-98,和上面的代码类似，是非法访问 - err
//	printf("%d\n", strlen(&arr));//&arr虽然是数组的地址，但是也是从数组起始位置开始的，计算的还是随机值
//	//char(*)[6]
//	printf("%d\n", strlen(&arr + 1));
//	//&arr是数组的地址，&arr+1是跳过整个数组的地址，求字符串长度也是随机值
//	printf("%d\n", strlen(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址，是'b'的地址，求字符串长度也是随机值
//
//	//printf("%d\n", sizeof(arr));//arr单独放在sizeof内部，计算的是整个数组的大小，单位是字节，6
//	//printf("%d\n", sizeof(arr + 0));//arr + 0是数组首元素的地址，4/8
//	//printf("%d\n", sizeof(*arr));//*arr是数组的首元素，计算的是首元素的大小-1字节
//	//printf("%d\n", sizeof(arr[1]));//arr[1]是第二个元素，大小1字节
//	//printf("%d\n", sizeof(&arr));//取出的数组的地址，数组的地址也是地址，是地址大小就是4/8
//	//printf("%d\n", sizeof(&arr + 1));//&arr+1是跳过整个，指向数组后边空间的地址，4/8
//	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1是数组第二个元素的地址，是地址4/8字节
//
//
//	return 0;
//}

//
//sizeof 只关注占用内存空间的大小，单位是字节，不关心内存中存放的是什么
//sizeof 是操作符
//strlen是求字符串长度的，统计的是\0之前出现的字符个数，一定要找到\0才算结束，所以可能存在越界访问的
//strlen是库函数
//
//
//int main()
//{
//	//char arr[] = "abcdef";//数组是7个元素
//	////[a b c d e f \0]
//	//printf("%d\n", strlen(arr));//6,arr是数组首元素的地址，strlen从首元素的地址开始统计\0之前出现的字符个数，是6
//	//printf("%d\n", strlen(arr + 0));//arr + 0是数组首元素的地址，同第一个，结果是6
//	////printf("%d\n", strlen(*arr));//*arr是'a',是97，传给strlen是一个非法的地址，造成非法访问
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//&arr + 1是跳过数组后的地址，统计字符串的长度是随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//&arr[0]+1是b的地址，从第二个字符往后统计字符串的长度，大小是5
//
//	//printf("%d\n", sizeof(arr));//7 - 数组名单独放在sizeof内部，计算的是数组的总大小，单位是字节
//	//printf("%d\n", sizeof(arr + 0));//arr+0是首元素的地址，大小是4/8
//	//printf("%d\n", sizeof(*arr));//*arr是数组首元素，大小是1字节
//	//printf("%d\n", sizeof(arr[1]));//arr[1]是数组的第二个元素，大小是1字节
//	//printf("%d\n", sizeof(&arr));//&arr是数组的地址，数组的地址也是地址，是4/8字节
//	//printf("%d\n", sizeof(&arr + 1));//&arr + 1是跳过整个数组的地址，是4/8字节
//	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址，是4/8字节
//
//	return 0;
//}
//


//int main()
//{
//	const char* p = "abcdef";
//	
//	printf("%d\n", strlen(p));//6- 求字符串长度
//	printf("%d\n", strlen(p + 1));//p + 1是b的地址，求字符串长度就是5
//	//printf("%d\n", strlen(*p));//err，*p是'a'
//	//printf("%d\n", strlen(p[0]));//err - 同上一个
//	printf("%d\n", strlen(&p));//&p拿到的是p这个指针变量的起始地址，从这里开始求字符串长度完全是随机值
//	printf("%d\n", strlen(&p + 1));//&p+1是跳过p变量的地址，从这里开始求字符串长度也是随机值
//	printf("%d\n", strlen(&p[0] + 1));//&p[0] + 1是b的地址，从b的地址向后数字符串的长度是5
//
//	//printf("%d\n", sizeof(p));//p是指针变量，大小就是4/8字节
//	//printf("%d\n", sizeof(p + 1));//p + 1是b的地址，是地址，就是4/8个字节
//	//printf("%d\n", sizeof(*p));//*p是'a'，sizeof(*p)计算的是字符的大小，是1字节
//	//printf("%d\n", sizeof(p[0]));//p[0]-->*(p+0) --> *p  就同上一个，1字节
//	//printf("%d\n", sizeof(&p));//&p是二级指针，是指针大小就是4/8
//	//printf("%d\n", sizeof(&p + 1)); //&p + 1是跳过p变量后的地址，4/8字节
//	//printf("%d\n", sizeof(&p[0] + 1));//p[0]就是‘a’,&p[0]就是a的地址，+1，就是b的地址，是地址就是4/8
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof('a'));
//
//	return 0;
//}

//
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a[0]+1);
//
//
//	printf("%d\n", sizeof(a));//48 = 3*4*4
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//a[0]是第一行的数组名，数组名单独放在sizeof内部，计算的就是数组(第一行)的大小，16个字节
//	printf("%d\n", sizeof(a[0] + 1));//a[0]作为第一行的数组名，没有单独放在sizeof内部，没有取地址，表示的就是数组首元素的地址
//	//那就是a[0][0]的地址，a[0]+1就是第一行第二个元素的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//*(a[0] + 1)是第一行第2个元素，计算的是元素的大小-4个字节
//	printf("%d\n", sizeof(a + 1));//a是二维数组的数组名，数组名表示首元素的地址，就是第一行的地址，a+1就是第二行的地址
//	//第二行的地址也是地址，是地址就是4/8   
//	//a - int (*)[4]
//	//a+1--> int(*)[4]
//	printf("%d\n", sizeof(*(a + 1)));//a+1是第二行的地址，*(a+1)表示的就是第二行，*(a+1)--a[1]  //16
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]是第一行的地址，&a[0]+1是第二行的地址，地址的大小就是4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1) 是对第二行的地址解引用，得到的就是第二行，计算的就是第二行的大小
//	printf("%d\n", sizeof(*a));//a表示首元素的地址，就是第一行的地址，*a就是第一行，计算的就是第一行的大小
//	//*a -- *(a+0)--a[0]
//	printf("%d\n", sizeof(a[3]));//16字节 int[4]
//	//如果数组存在第四行，a[3]就是第四行的数组名，数组名单独放在sizeof内部，计算的是第四行的大小
//
//	int a = 10;
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}
//


//int main()
//{
//	short s = 3;
//	int a = 10;
//	s = a + 2;
//	printf("%d\n", sizeof(s = a + 2));//2
//	printf("%d\n", s);
//
//	return 0;
//}

//
//C语言中，表达式有2个属性：
//2+3
//值属性：5
//类型属性：int
//

//
//sizeof(a[3])
//sizeof(a[3]+0)
//sizeof(*a[3])
//


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}



//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);
//	//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//0x00100004
//	return 0;
//}
//


//小端，x86环境
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//int a[3][2] = { {0,1}, {2,3}, {4,5} };
//	//1 3
//	//5 0
//	//0 0
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;

	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	return 0;
}


























