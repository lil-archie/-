#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>

//���������VS2019 X86�Ļ���������
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
//	*dest = *src;//����\0
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//����\0
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
//	//����
//	//assert�п��Է�һ�����ʽ�����ʽ�Ľ�����Ϊ�٣��ͱ������Ϊ��ɶ�¶�������
//	//assert ��ʵ��release�汾���Ż���
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
//	assert(dest && src);//����ָ�����Ч��
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
//	//strcpy - �ַ�������
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

//�⺯����strcpy���ص���Ŀ��ռ����ʼ��ַ
//

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);//����ָ�����Ч��
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
//	//��ʽ����
//	printf("%s\n", my_strcpy(arr1, p));
//
//	return 0;
//}


//
//int main()
//{
//	//int num = 10;
//	////ͨ��ָ��p��num��ֵ��Ϊ20
//	//int* p = &num;
//	//*p = 20;
//
//	//num = 20;//
//	//printf("%d\n", num);
//
//
//	const int num = 10;
//	//num = 20;//��Ϊnum��const���Σ����ܱ��޸�
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

//const ����ָ�������ʱ��
//const int num = 10;
//int* p = &num;
//int n = 1000;
//1. const����*����ߣ�const���ε���ָ��ָ������ݣ���ʾָ��ָ������ݣ�����ͨ��ָ�����ı���;����ָ�������������޸�
//const int* p = &num;
// *p = 20;//err
// p = &n;//ok
// 
//2. const����*���ұ�,const���ε�ָ�����������ʾָ�������������ݲ��ܱ��޸ģ�����ָ��ָ������ݣ�����ͨ��ָ�����ı䡣
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
//ģ��strcpy
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
//ģ��strlen
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