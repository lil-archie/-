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
//ʵ��һ�����������������ַ����е�k���ַ���
//����
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//	//��һ����
//	reverse(arr, arr + k-1);
//	//�м䲿��
//	reverse(arr + k, arr + len - 1);
//	//�������
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
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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

//��32λ���ģʽ�������ϱ���b���ڣ� ��
//��Ŀ���ݣ�
//A .0x00
//B .0x12
//C .0x34
//D .0x1234


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����(b==2) + (a==3) == 1
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
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
//	test(&arr[0][0]);//arr��Ϊ��ά���������������ʾ��������Ԫ�صĵ�ַ���ǵ�һ�еĵ�ַ����һ��һά����ĵ�ַ
//	//����������ָ��
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
//	int k = 17;//���ҵ�ֵ
//	int x = 3;
//	int y = 3;
//	int ret = find_k(arr, &x, &y, k);
//	if (ret == 0)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d %d", x, y);
//
//	return 0;
//}
//


//��Ŀ���ƣ�
//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include <string.h>

//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		//��ת1���ַ�
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
	//������
	reverse(arr, arr + k - 1);
	//������
	reverse(arr + k, arr + len - 1);
	//��������
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

//��Ŀ���ƣ�
//�ַ�����ת���
//��Ŀ���ݣ�
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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
//	//����arr1�ַ����в���arr2�Ƿ����
//	//��������򷵻�arr2��arr1�еĵ�ַ
//	//��������ڷ���NULL
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

