#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int q[1000001] = { 0 };
//�㷨1����������
// ����˼��
//       1->ȷ���ֽ�� q[0],q[l],q[r],q[(l+r)/2],���
//       2->������Χ
//       3->�ݹ鴦����������
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
//	//��������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &q[i]);
//	}
//	//����
//	quik_sort(q,0,n-1);
//
//	//��ӡ
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", q[i]);
//	}
//
//
//	return 0;
//}

////�㷨2���鲢����
////  1.ȷ���ֽ��  mid=(left+right)/2
////  2.�ݹ�����  left ,right
////  3.�鲢-�϶�Ϊһ
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
//	//��������
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", q[i]);
//	}
//
//	//����
//	merge_sort(q,0,n-1);
//
//	//��ӡ����
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", q[i]);
//	}
//	return 0;
//}
