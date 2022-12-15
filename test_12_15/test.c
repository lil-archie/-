#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[50];
//    gets(arr);
//    int len = strlen(arr);
//    double count1 = 0;
//    double b = 1.0;
//    double sum = 0;
//    double u = len;
//    if ((arr[len - 1] - '0') % 2 == 0)
//    {
//        b *= 2.0;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        if (arr[i]-'0'==2)
//        {
//            count1++;
//        }
//        if (arr[i] =='-')
//        {
//            u = u - 1;
//            b *= 1.5;
//        }
//
//    }
//    sum = 100 * b * (count1 / u);
//    printf("%.2lf%%", sum);
//    return 0;
//}
//#include<stdio.h>   //类比于L1-003
//#include<string.h>
//int main()
//{
//    double er = 1.0;
//    char a[55];
//    gets(a);
//    int i, count = 0;
//    for (i = 0; i < strlen(a); i++)
//    {
//        if (a[i] == '2')//使用字符'2'，因为是字符数组
//            count++;
//    }
//    int u = strlen(a);
//    if (a[0] == '-')
//    {
//        u = u - 1;
//        er = er * 1.5;
//    }
//    if (a[u] % 2 == 0)
//        er = er * 2.0;
//    er = 100 * er * count / u;
//    printf("%.2lf\%\n", er);
//
//
//    return 0;
//
//}
//#include<stdio.h> 
//int main()
//{
//	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 }, i, j, t, n, flag1 = 0, flag2 = 0, sum = 0;     //weight存储权重 
//	char check[11] = { '1','0','X','9','8','7','6','5','4','3','2' }, str[19];       //check存储校验码  str存输入字符串 
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		flag1 = 0;                      //flag1的功能是标记前十七位是否全是数字 
//		scanf("%s", str);
//		for (j = 0; j < 17; j++)
//		{
//			if (str[j] >= '0' && str[j] <= '9')             //如果前十七位都是数字 计算加权和 
//				sum = sum + (str[j] - '0') * weight[j];      //str[j]-'0'是将字符转int 
//			else                                     //前十七位存在不是数字  flag1由0变为1  只有有一位不是数字 break跳出循环 
//			{
//				flag1 = 1;
//				break;
//			}
//		}
//		if (check[sum % 11] != str[17] || flag1 == 1)         //最后一位校验码对不上 或者  前十七位存在不是数字
//		{
//			printf("%s\n", str);
//			flag2 = 1;	                              //flag2的作用是 是否all  passed 
//		}
//	}
//	if (flag2 == 0)                                      //flag2==0说明 没有进入 if(check[sum%11]!=str[17]||flag1==1)这个条件 
//		printf("All passed");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int  weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//    int i, j = 0;
//    char check[] = { '1','0','x','9','8','7','6','5','4','3','2' };
//    char str[19];
//    int n = 0;
//    int flag1 = 0;
//    int flag2 = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        flag1 = 0;
//        sum = 0;
//        scanf("%s", &str);
//        for (j = 0; j < 17; j++)
//        {
//            if (str[j] >='0' && str[j] <= '9')
//            {
//                sum += (str[j] - '0') * weight[j];
//            }
//            else
//            {
//                flag1 = 1;
//                break;
//            }
//        }
//        if (check[sum % 11] != str[17] || flag1 == 1)
//        {
//            printf("%s", str);
//            flag2 = 1;
//        }
//
//        if (flag2 == 0)
//        {
//            printf("All passed\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    double weight = 0;
//    double height = 0;
//    scanf("%lf%lf", &weight, &height);
//    double BMI = 0;
//    BMI = (weight) / ((height / 100) * (height / 100));
//    printf("%.2lf", BMI);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a, b, c = 0;
//    scanf("%lf%lf%lf", &a, &b, &c);
//    double circumference = 0;
//    double area = 0;
//    double p = (a + b + c) / 2.0;
//    circumference = a + b + c;
//    area = sqrt((p - a) * (p - b) * (p - c) * p);
//    printf("circumference=%.2lf area=%.2lf", circumference, area);
//}
