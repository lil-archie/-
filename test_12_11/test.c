#define  _CRT_SECURE_NO_WARNINGS 1
//void count(int tmp)
//{
//
//    switch (tmp)
//    {
//    case 0:
//        count0++;
//        break;
//    case 1:
//        count1++;
//        break;
//    case 2:
//        count2++;
//        break;
//
//    case 3:
//        count3++;
//        break;
//
//    case 4:
//        count4++;
//        break;
//
//    case 5:
//        count5++;
//        break;
//
//    case 6:
//        count6++;
//        break;
//
//    case 7:
//        count7++;
//        break;
//
//    case 8:
//        count8++;
//        break;
//    case 9:
//        count9++;
//        break;
//    }
//}
//int count0 = 0;
//int count1 = 0;
//int count2 = 0;
//int count3 = 0;
//int count4 = 0;
//int count5 = 0;
//int count6 = 0;
//int count7 = 0;
//int count8 = 0;
//int count9 = 0;
//int main()
//{
//    int number = 0;
//    while (number)
//    {
//        int tmp = number % 10;
//        count(tmp)
//            number /= 10;
//    }
//
//    if ()
//}

//#include<string.h>
#include<stdio.h>
//int main()
//{
//    char arr[1000];
//    scanf("%s", arr);
//    int j = strlen(arr);
//    int arr1[10] = { 0 };
//    int c = 0;
//    for (int i = 0; i < j; i++)
//    {
//        c = arr[i] - '0';
//        arr1[c]++;
//
//    }
//    int k = 0;
//    for (k = 0; k < 10; k++)
//    {
//        if (arr1[k] != 0)
//        {
//            printf("%d:%d\n", k, arr1[k]);
//        }
//    }
//
//    return 0;
//}
//
//int main()
//{
//	char arr[10];
//	arr[9] = 'c';
//	printf("%c", arr[9]);
//	return 0;
//}
// 转换摄氏度
//#include<stdio.h>
//int main()
//{
//    int F = 0;
//    scanf("%d", &F);
//    printf("Celsius = %d", 5 * (F - 32) / 9);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long int arr[1000];
//    int arr1[1000][2];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lld %d %d\n", &arr[i], &arr1[i][0], &arr1[i][1]);
//    }
//    int m = 0;
//    int num = 0;
//    scanf("%d", &m);
//                                  
//    
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &num);
//
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[j][0]==num)
//            {
//                printf("%ll d %d\n", arr[j], arr1[j][1]);
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long a[1000];  /*储存学生准考证号*/
//	int b[1000][2];     /*试机座位号 考试座位号*/
//	int i, j;
//	for (i = 0; i < n; i++) {
//		scanf("%lld %d %d", &a[i], &b[i][0], &b[i][1]);
//		cin>>a[i]>>b[i][0]>>b[i][1];
//	}
//	int m; /*m个待查询的试机座位号码*/
//	scanf("%d", &m);
//	int num;   /*试机座位号码*/
//	for (i = 0; i < m; i++) 
//	{
//		scanf("%d", &num);
//		for (j = 0; j < n; j++)
//		{
//			if (num == b[j][0]) 
//			{
//				printf("%lld %d\n", a[j], b[j][1]);
//				cout<<a[j]<<" "<<b[j][1]<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int num[1001][1001];
//int main()
//
//{
//    int N, M, i, j, k, d;
//    char str[1001][15];//声明一个二维数组用来连接准考证号，试机座号和考试座号 
//    int sum[1000];
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++) {
//        scanf("%s%d", str[i], &d);//输入准考证号和试机座号
//        for (j = 1; j <= N; j++)
//            if (j == d)//连接试机座号与考试座号 
//                scanf("%d", &num[i][j]);
//    }
//    scanf("%d", &M);
//    for (i = 1; i <= M; i++) {
//        scanf("%d", &sum[i]);//输入待查询的试机座位号码
//    }
//    for (i = 1; i <= M; i++) {
//        for (j = 1; j <= N; j++) {//查询对应的准考证号和考试座位号码 
//            if (num[j][sum[i]] != 0) {
//                k = j;
//                break;
//            }
//        }
//        printf("%s ", str[k]);//输出查询到的准考证号 
//        printf("%d\n", num[k][sum[i]]);//输出查询到的考试座位号码 
//
//    }
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long int N, i, j, num, count, start = 0, max = 0;
//	scanf("%lld", &N);
//	for (i = 2; i < sqrt(N); i++)
//	{
//		num = 1;
//		count = 0;
//		for (j = i; N % (num * j) == 0; j++)
//		{
//			count++;
//			num *= j;
//		}
//		if (count > max)
//		{
//			start = i;
//			max = count;
//		}
//	}
//	if (max == 0)
//	{
//		printf("1\n");
//		printf("%lld\n", N);
//	}
//	else
//	{
//		printf("%lld\n", max);
//		for (i = start; i < start + max - 1; i++)
//		{
//			printf("%lld*", i);
//		}
//		printf("%lld\n", i);
//	}
//	return 0;
//}
