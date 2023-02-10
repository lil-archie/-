#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char* left(char* s, int pos) //pos 为要旋转的字符个数，或长度，下面主函数测试中，
//	pos = 3;
//	{
//	int len = strlen(s);
//	invert(s, s + (pos - 1)); //如上，X->X^T，即 abc->cba
//	invert(s + pos, s + (len - 1)); //如上，Y->Y^T，即 def->fed
//	invert(s, s + (len - 1)); //如上，整个翻转，(X^TY^T)^T=YX，
//	 cbafed->defabc;
//	return s;
//	}
//	return 0;
//}        
//


//int n = str.length();
////处理大于 str 长度及 m 为负数的情况,positiveMod 可以取得 m 为负数时对 n 取余得到正数
//m = positiveMod(m, n);
//if (m == 0)
//return;
//// if (m % n <= 0)
//// return;
//int p1 = 0, p2 = m;
//int round;
////p2 当前所指和之后的 m-1 个字母共 m 个字母，就可以和 p2 前面的 m 个字母交换。
//while (p2 + m - 1 < n) {
//	round = m;
//	while (round--) {
//		std::swap(str[p1], str[p2]);
//		p1++;
//		p2++;
//	}
//}
////剩下的不足 m 个字母逐个交换
//int r = n - p2;
//while (r--) {
//	int i = p2;
//	while (i > p1) {
//		std::swap(str[i], str[i - 1]);
//		i--;
//	}
//	p2++;
//	p1++;
//}
//}



//
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
//{
//    int* result = malloc(sizeof(int) * fmin(nums1Size, nums2Size));
//    int hash[1001] = { 0 };
//
//    for (int i = 0; i < nums1Size; i++) 
//    {
//        hash[nums1[i]] = 1;
//    }
//
//    int resultSize = 0;
//    for (int i = 0; i < nums2Size; i++) 
//    {
//        if (hash[nums2[i]] == 1) 
//        {
//            result[resultSize++] = nums2[i];
//            hash[nums2[i]] = 0;
//        }
//    }
//
//    *returnSize = resultSize;
//    return result;
//}
//



///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) 
//{
//    int table[1001];
//    int* ans = (int*)malloc(sizeof(int) * nums2Size);
//    int count = 0;
//    memset(table, 0, sizeof(table));
//    for (int i = 0; i < nums1Size; i++)
//    {
//        table[nums1[i]] = 1;
//    }
//    for (int j = 0; j < nums2Size; j++) 
//    {
//        if (table[nums2[j]] == 1)
//        {
//            ans[count] = nums2[j];
//            count++;
//            table[nums2[j]] = 0;
//        }
//    }
//    *returnSize = count;
//    return ans;
//
//}
// 
//
//int main()
//{
//    int arr1[] = { 9,8,6,7 };
//    int arr2[] = { 9,1,2,3 };
//    int len1 = sizeof(arr1) / sizeof(arr1[0]);
//    int len2 = sizeof(arr2) / sizeof(arr2[0]);
//    int k = 0;
//    int* pf = intersection(arr1, len1, arr2, len2,k );
//    printf("[ %d",pf[0]);
//    for (int i = 1; i < k; i++)
//    {
//        printf(",%d", pf[i]);
//    }
//    printf("]");
//}
//
//考察：offsetof宏的实现
//#define OFFSETOF(struct,member)  (size_t)&(((struct*)0)->member)
//#define OFFSETOF(type,member)  (size_t)&(((type*)0)->member)
//
//struct S
//{
//	int a;
//	char b;
//	char c;
//};
//
//
//int main()
//{
//	/*printf("%d", offsetof(struct S, a));
//	printf("%d", offsetof(struct S, b));
//	printf("%d", offsetof(struct S, c));*/
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//
//	
//	return 0;
//}
#define SWAP(a)  (a=((a&0x55555555)<<1)+((a&0xaaaaaaaa)>>1))

int main()
{
	int a = 10;
	//01010  10  
	// 交换后
	//00101   5
	int b = 4;
	SWAP(a);
	printf("%d", a);
	return 0;
}