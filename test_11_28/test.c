#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//struct student
//{
//	int num;
//	char name[32];
//	float score;
//} stu;
//stu �ǽṹ�������

//typedef struct Student
//{
//	int num;
//	char name[32];
//	float score;
//} Stu;
////Stu ������
//
//int main()
//{
//	Stu s1;
//	return 0;
//}

//
//#include < stdio.h >
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, *p = &a;
//
//	//struct S a;
//	//struct S* p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//��Ŀ���ݣ�
//A.a.a//ok
//B.*p.a//err
//C.p->a//ok
//D .(*p).a//ok
//
#include <stdio.h>
//
//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}   


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//	//total += money;//��
//	//empty = money;
//	////�û�
//	//while (empty >= 2)
//	//{
//	//	total += (empty / 2);
//	//	empty = empty / 2 + empty%2;
//	//}
//
//	if(money > 0)
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    //int arr[n][n];//C99 �䳤����
//    int arr[10][10];
//    int i = 0;
//    //����
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    //�ж�
//    int flag = 1;//Ĭ���������Ǿ���
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//
//end:
//    if (flag == 1)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//
//


#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n][m];
//    int arr2[n][m];
//    //��������
//    //��һ������
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //�ڶ�������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    //�Ƚ�
//    int flag = 1;//Ĭ��2���������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 1)
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n][m];
//    int arr2[n][m];
//    //��������
//    //��һ������
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    //�ڶ�������
//    int flag = 1;//Ĭ��2���������
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//            if (arr1[i][j] != arr2[i][j])
//            {
//                flag = 0;
//                goto end;
//            }
//        }
//    }
//end:
//    if (flag == 1)
//        printf("Yes\n");
//    else
//        printf("No\n");
//
//    return 0;
//}
//


//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//��ż���Ĺ���
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�������Ĺ���
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//����
//	move(arr, sz);
//	
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//
//
//
//int main() {
//    //   int arr1[1000];
//    //   int arr2[1000];
//    //   int arr3[2000];
//    int n = 0;
//    int m = 0;
//    //����
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[n + m];
//    //arr1������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //arr2������
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ�����
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k] = arr1[i];
//            i++;
//            k++;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            j++;
//            k++;
//        }
//    }
//    if (i == n)
//    {
//        //��arr2��ʣ���Ԫ�ط���arr3��
//        while (j < m)
//        {
//            arr3[k] = arr2[j];
//            j++;
//            k++;
//        }
//    }
//    else
//    {
//        //��arr1��ʣ���Ԫ�ط���arr3��
//        while (i < n)
//        {
//            arr3[k] = arr1[i];
//            i++;
//            k++;
//        }
//    }
//    //���
//    for (k = 0; k < n + m; k++)
//    {
//        printf("%d ", arr3[k]);
//    }
//    return 0;
//}

//
//int main() {
//    //   int arr1[1000];
//    //   int arr2[1000];
//    //   int arr3[2000];
//    int n = 0;
//    int m = 0;
//    //����
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[n + m];
//    //arr1������
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //arr2������
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ�����
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        //��arr2��ʣ���Ԫ�ط���arr3��
//        while (j < m)
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    else
//    {
//        //��arr1��ʣ���Ԫ�ط���arr3��
//        while (i < n)
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//    }
//    return 0;
//}
//

#include <stdio.h>
/*
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag1 = 0;//�������
    int flag2 = 0;//��ǽ���
    for(i=1; i<n; i++)
    {
        if(arr[i-1] < arr[i] )
        {
            flag1 = 1;
        }
        else
        {
            flag2 = 1;
        }
    }
    if(flag1+flag2 == 2)
    {
        printf("unsorted\n");
    }
    else
    {
        printf("sorted\n");
    }
    return 0;
}
*/

//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int flag1 = 0;//�������
//    int flag2 = 0;//��ǽ���
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i - 1] < arr[i])
//            {
//                flag1 = 1;
//            }
//            else
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 + flag2 == 2)
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}
//
//



//�����ȷ��д����ǰ���д��������һ����©����
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10];
    int i = 0;
    int flag1 = 0;//�������
    int flag2 = 0;//��ǽ���

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i - 1] < arr[i])
            {
                flag1 = 1;
            }
            else if (arr[i - 1] > arr[i])
            {
                flag2 = 1;
            }
        }

    }
    if (flag1 + flag2 < 2)
        printf("sorted\n");
    else
        printf("unsorted\n");
    //
    //1 2 3 4 4
    //2 2 2 2 2
    //1 2 3 4 5
    //5 4 3 2 1
    //1 3 2 4 4
    //1 2 3 3 2 1
    //
    return 0;
}