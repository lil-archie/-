#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int q[1000001] = { 0 };
//算法1：快速排序
// 分治思想
//       1->确定分界点 q[0],q[l],q[r],q[(l+r)/2],随机
//       2->调整范围
//       3->递归处理左右两端
//
//
//int q[1000001] = { 0 };
//
//void quik_sort(int *q, int left, int right)
//{
//	if (left >= right)
//		return;
//	int x = q[left];
//	int i = left - 1;
//	int j = right + 1;
//	while (i < j)
//	{
//		do
//		{
//			i++;
//		} while (x > q[i]);
//		do
//		{
//			j--;
//		} while (x<q[j]);
//		if (i < j)
//		{
//			int tmp = q[i];
//			q[i] = q[j];
//			q[j] = tmp;
//		}
//	}
//	quik_sort(q, left, j);
//	quik_sort(q, j+ 1, right);
//
//
//
//}
//
//
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	
//	
//	//输入数据
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//	}
//	//快排
//	quik_sort(q,0,n-1);
//
//	//打印
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", q[i]);
//	}
//
//
//	return 0;
//}

////算法2：归并排序
////  1.确定分界点  mid=(left+right)/2
////  2.递归排序  left ,right
////  3.归并-合二为一
//
//void merge_sort(int q[],int left,int right)
//{
//	if (left >= right) return;
//	int mid = (left + right) >> 1;
//	int 
//
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	//输入数据
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", q[i]);
//	}
//
//	//排序
//	merge_sort(q,0,n-1);
//
//	//打印数据
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", q[i]);
//	}
//	return 0;
//}
