#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char* left(char* s, int pos) //pos ΪҪ��ת���ַ��������򳤶ȣ����������������У�
//	pos = 3;
//	{
//	int len = strlen(s);
//	invert(s, s + (pos - 1)); //���ϣ�X->X^T���� abc->cba
//	invert(s + pos, s + (len - 1)); //���ϣ�Y->Y^T���� def->fed
//	invert(s, s + (len - 1)); //���ϣ�������ת��(X^TY^T)^T=YX��
//	 cbafed->defabc;
//	return s;
//	}
//	return 0;
//}        
//


//int n = str.length();
////������� str ���ȼ� m Ϊ���������,positiveMod ����ȡ�� m Ϊ����ʱ�� n ȡ��õ�����
//m = positiveMod(m, n);
//if (m == 0)
//return;
//// if (m % n <= 0)
//// return;
//int p1 = 0, p2 = m;
//int round;
////p2 ��ǰ��ָ��֮��� m-1 ����ĸ�� m ����ĸ���Ϳ��Ժ� p2 ǰ��� m ����ĸ������
//while (p2 + m - 1 < n) {
//	round = m;
//	while (round--) {
//		std::swap(str[p1], str[p2]);
//		p1++;
//		p2++;
//	}
//}
////ʣ�µĲ��� m ����ĸ�������
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
//���죺offsetof���ʵ��
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
	// ������
	//00101   5
	int b = 4;
	SWAP(a);
	printf("%d", a);
	return 0;
}