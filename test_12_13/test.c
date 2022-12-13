#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef struct {
//	int fz;
//	int fm;
//}number;
//int gcb(int x, int y) {
//	int c, a = x, b = y;
//	while (a != 0) {
//		c = b % a;
//		b = a;
//		a = c;
//	}
//	return b;
//}
//void pp(int x, int y, int m) {
//	int t, a = x, b = y;;
//	while (gcb(a, b) != 1) {
//		t = gcb(a, b);
//		a = a / t;
//		b = b / t;
//	}
//	if (a != 0) {
//		if (m == 1) {
//			printf(" ");
//		}
//		printf("%d/%d", a, b);
//	}
//}
//int main() {
//	int n, i, m = 0;
//	scanf("%d", &n);
//	number x[100];
//	for (i = 0; i < n; i++) {
//		scanf("%d/%d", &x[i].fz, &x[i].fm);
//	}
//	for (i = 1; i < n; i++) {
//		x[0].fz = x[0].fz * x[i].fm + x[0].fm * x[i].fz;;
//		x[0].fm = x[0].fm * x[i].fm;
//	}
//	if (x[0].fz == 0) {
//		printf("0");
//	}
//	else {
//		if (x[0].fz / x[0].fm != 0) {
//			printf("%d", x[0].fz / x[0].fm);
//			m = 1;
//		}
//		pp(x[0].fz - (x[0].fz / x[0].fm) * x[0].fm, x[0].fm, m);
//	}
//}
//long long int gcd(long long int a, long long int b)
//{
//	int t = 0;
//	while (t=a%b)
//	{
//		a = b;
//		b = t;
//
//
//	}
//	return b;
//}
//#include<stdio.h>
//long long int gcd(long long int a, long long int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//int main()
//{
//	
//	printf("%lld", gcd(18, 24));
//	return 0;
//}
////int main()
//{
//	long long int N = 0, a = 0, b = 0, sum_a = 0, sum_b = 1, t;
//	scanf("%lld", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%lld/%lld", &a, &b);
//		//通分相加
//		sum_a *= b;
//		sum_a += a * sum_b;
//		sum_b *= b;
//		//约分
//		t = gcd(sum_a, sum_b);
//		sum_a /= t;
//		sum_b /= t;
//	}
//	if (sum_a % sum_b == 0)
//		printf("%lld\n", sum_a / sum_b);
//	else if (sum_a < sum_b)
//		printf("%lld/%lld\n", sum_a, sum_b);
//	else
//		printf("%lld %lld/%lld\n", sum_a / sum_b, sum_a % sum_b, sum_b);
//	return 0;
//}
//#include<stdio.h>
long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}
int main()
{
    long long int t = 0;
    long long int sum_a = 0;
    long long int sum_b = 1;
    long long int n = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        long long int a, b = 0;
        scanf("%lld/%lld", &a, &b);

        sum_a *= b;
        sum_a += sum_b * a;
        sum_b *= b;
        t = gcd(sum_a, sum_b);
        sum_a /= t;
        sum_b /= t;


    }
    if (sum_a % sum_b == 0)
    {
        printf("%lld", sum_a / sum_b);
    }
    else if (sum_a < sum_b)
    {
        printf("%lld/%lld", sum_a, sum_b);
    }
    else
        printf("%lld %lld/%lld", sum_a / sum_b, sum_a, sum_b);
    return 0;

}
