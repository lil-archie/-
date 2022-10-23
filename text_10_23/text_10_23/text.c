#define  _CRT_SECURE_NO_WARNINGS 1

//void sca_from_file(int a[], int n, char fn[])
//{
//    FILE* fp;
//    int i;
//    fp = fopen(fn, "r");
//    for (i = 0; i < n; i++)
//    {
//        fscanf(fp, "%d", &a[i]);
//    }
//    fclose(fp);
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d ", &a, &b, &c);
//	if (a == b || a == c || b == c)
//	{
//		printf("有两个数相等\n");
//	}
//	if (a != b && a != c && b != c)
//	{
//		printf("没有数相等\n");
//	}
//	if (a == b == c)
//	{
//		printf("都相等\n");
//	}
//
//	
//	
//	return  0;
//}
////确定一个数的位数
//#include<stdio.h>
//int main()
//{
//	
//	
//	
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int prefix, group, publisher, item, check_digit;
//
//	printf("Enter ISBN: ");
//	scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check_digit);
//
//	printf("GS1 prefix: %d\n", prefix);
//	printf("Group identifier: %d\n", group);
//	printf("Publisher code: %d\n", publisher);
//	printf("Item number: %d\n", item);
//	printf("Check digit: %d\n", check_digit);
//
//	/* The five printf calls can be combined as follows:
//
//	   printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
//			  prefix, group, publisher, item, check_digit);
//	*/
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int first = 0;
//	int second = 0;
//	int third = 0;
//	printf("Enter phone number[(xxx)xxx-xxxx]:");
//	scanf("(%d)%d-%d", &first, &second, &third);
//	printf("Your entered %d.%d.%d", first, second, third);
//
//	
//	
//	return 0;
//}