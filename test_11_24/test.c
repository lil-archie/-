#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void adjust(int* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int tmp = 0;
//	while (left < right)
//	{
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//	/*for (i = 0; i < right; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			tmp = arr[i];
//			arr[i] = arr[right];
//			arr[right] = tmp;
//			right--;
//
//		}
//	}*/
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr,sz);
//	int i = 0;
//	
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int* arr, int sz)
//{
//    int i = 0;
//    int tmp = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//
//}
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[2000] = { 0 };
//
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    int j = 0;
//    for (j = n; j < m + n; j++)
//    {
//        scanf("%d", &arr1[j]);
//    }
//    int sz = n + m;
//    bubble_sort(arr1, sz);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//
//
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int count1 = 0;
//    int count2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i + 1] > arr[i])
//        {
//            count1++;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            count2++;
//        }
//    }
//    if (count1 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    if (count2 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int count1 = 0;
//    int count2 = 0;
//    int count3 = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i + 1] > arr[i])
//        {
//            count1++;
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            count2++;
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            count3++;
//        }
//    }
//    if (count1 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else if (count2 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else if (count3 == n - 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//}