#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//    int n = 1234;
//    printf("%#o %#X", n, n);
//    return 0;
//
//}
//printf����ʹ��ʹ�ø�ʽ���ƴ���% o������% X���ֱ�����˽���������ʮ��������������ʹ�����η���#������ǰ����ʾ
//#include<stdio.h>
//void print(int n)
//{
//	while (n > 9)
//	{
//		printf("%d", n % 10);
//		n / 10;
//	}
//	printf("%d", n);
//	
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) )!=EOF)
//	{
//		print(n);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		while (n)
//		{
//			printf("%d", n%10);
//			n /= 10;
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//} 
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr) - 1;
//	reverse(arr, arr + len);
//	char* cur = arr;
//	while (*cur)
//	{
//		char* start = cur;
//
//		while (*cur != ' ' && *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur-1);
//		if(*cur!='\0')
//		 cur++;
//	}
//	printf("%s\n",arr);
//	return 0;
//}
//	
/**
 * ɳ©ͼ�ε�������
 *  1. ���¶Գƣ��ϰ��ɳ©�������� (1+3+5+...)
 *      �ɵó��ܷ����� N �Ͱ��ɳ©�߶� H �Ĺ�ϵ ==> 2 * H * H - 1 <= N
 *  2. �ϰ벿��ÿ�пո��������� +1�����������ݼ� -2���°벿���෴
 * ÿ�е����
 *  ���ݶԳ��ԣ������þ���ֵ���� abs()�����ٴ�������
 */
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    int N, h;//���ŵ����� �����ɳ©�ĸ߶� 
//    char sign; //���� 
//    scanf("%d %c", &N, &sign);
//    h = (int)sqrt((N + 1) / 2.0);
//    for (int i = 0; i < 2 * h - 1; i++) 
//    {//���ÿ������ 
//        for (int j = 0; j < h - 1 - abs(h - 1 - i); j++)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j < 2 * abs(h - 1 - i) + 1; j++)
//        {
//            printf("%c", sign);
//        }
//        putchar('\n');
//    }
//    printf("%d", N - 2 * h * h + 1);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int N = 19;
//	
//	int h = 0;
//	h = (int)sqrt((N + 1) / 2.0);
//	
//	printf("%d", h);
//	return 0;
//}