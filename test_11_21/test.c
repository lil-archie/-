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
//	int * pa = &a;//pa��һ��ָ�����
//	int* * ppa = &pa;//ppa����һ������ָ�����
//	**ppa = 50;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** * pppa = &ppa;//pppa��һ������ָ�����
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
//	//��������ģ���һ��3��4�е�����
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
//	//�ṹ���Ա
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//} s4,s5;//s4, s5Ҳ�ǽṹ������� - ȫ�ֵ�
//
//struct Stu s6;
//
//int main()
//{
//	struct Stu s1, s2, s3;//s1,s2,s3Ҳ�ǽṹ������� - �ֲ���
//
//	return 0;
//}
//
//struct Stu
//{
//	//�ṹ���Ա
//	char name[20];
//	int age;
//	char sex[10];
//	float score;
//};
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, "nan", 95.5f};
//	struct Stu s2 = { "����", 21, "����", 59.5f };
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
//	//�ṹ�����.��Ա
//	printf("%lf %d %c %f\n", sp.d, sp.s.a, sp.s.c, sp.f);
//}
//
//void Print2(struct P* p1)
//{
//	printf("%lf %d %c %f\n", (*p1).d, (*p1).s.a, (*p1).s.c, (*p1).f);
//	//�ṹ��ָ��->��Ա
//	printf("%lf %d %c %f\n", p1->d, p1->s.a, p1->s.c, p1->f);
//}
//
//int main()
//{
//	struct P p = { 5.5, {100, 'b'}, 3.14f};
//	//scanf("%d %c", &(p.s.a), &(p.s.c));
//	//printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//	//Print1(p);//��ֵ����
//	//Print2(&p);//��ַ����
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

//��С�˻����У������������Ľ���ǣ��� ��

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
//�������ڴ��д洢��ʱ��
//
//int main()
//{
//	int a = 0x11223344;
//	
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά����
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
//	//��ӡ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}
//


//дһ����������������һ���ַ���������

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
    //scanf("%s", arr);//���������⣬scanfĬ�϶�ȡ��ʱ�������ո�ͽ�����
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
    //scanf("%s", arr);//���������⣬scanfĬ�϶�ȡ��ʱ�������ո�ͽ�����
    gets(arr);
    //a b c d e f \0
    //scanf("%[^\n]", arr);
    reverse(arr, arr + strlen(arr) - 1);
    printf("%s\n", arr);

    return 0;
}

