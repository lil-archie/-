#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    double weight = 0;
//    double height = 0;
//    double BMI = 0;
//    while (~scanf("%lf %lf", &weight, &height))
//    {
//        BMI = (weight / 2.0) / ((height / 100) * (height / 100));
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        if (BMI > 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        if (BMI > 27.9)
//            printf("Obese\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    double weight = 0;
//    double height = 0;
//    double BMI = 0;
//    while (~scanf("%lf %lf", &weight, &height))
//    {
//        BMI = (weight) / ((height / 100) * (height / 100));
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        if (BMI > 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        if (BMI > 27.9)
//            printf("Obese\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    while (~scanf("%lf %lf %lf\n", &a, &b, &c))
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        double k = b * b - 4 * a * c;
//        if (k < 0)
//        {
//            double x_j = (-b) / (2 * a);
//            double x_i = sqrt(-k) / (2 * a);
//            if (x_j == 0)
//                printf("x1=0.00-%.2lfi;x2=0.00+%.2lfi\n", x_i, x_i);
//            else
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x_j, x_i, x_j, x_i);
//        }
//        if (k > 0)
//        {
//            double x1_1 = ((-b) + sqrt(k)) / (2 * a);
//            double x2_1 = ((-b) - sqrt(k)) / (2 * a);
//            printf("x1=%.2lf;x2=%.2lf\n", x2_1, x1_1);
//        }
//        if (k == 0)
//        {
//            double xq = ((-b) - sqrt(k)) / (2 * a);
//            if (xq == 0.0)
//                printf("x1=x2=0.00\n");
//            else
//                printf("x1=x2=%.2lf\n", xq);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    while (~scanf("%lf %lf %lf\n", &a, &b, &c))
//    {
//        double k = b * b - 4 * a * c;
//        if (a == 0)
//        {
//            printf("Not quadratic equation\n");
//        }
//
//        else if (k < 0)
//        {
//            double x_j = (-b) / (2 * a);
//            double x_i = sqrt(-k) / (2 * a);
//            if (x_j == 0)
//                printf("x1=0.00-%.2lfi;x2=0.00+%.2lfi\n", x_i, x_i);
//            else
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x_j, x_i, x_j, x_i);
//        }
//        else if (k > 0)
//        {
//            double x1_1 = ((-b) + sqrt(k)) / (2 * a);
//            double x2_1 = ((-b) - sqrt(k)) / (2 * a);
//            printf("x1=%.2lf;x2=%.2lf\n", x2_1, x1_1);
//        }
//        else if (k == 0)
//        {
//            double xq = ((-b) - sqrt(k)) / (2 * a);
//            if (xq == 0.0)
//                printf("x1=x2=0.00\n");
//            else
//                printf("x1=x2=%.2lf\n", xq);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    char op = 0;
//    while (~scanf("%lf%c%lf", &a, &op, &b))
//    {
//        if (op == '+' || op == '-' || op == '*' || op == '/')
//        {
//            switch (op)
//            {
//            case '+':
//                printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//                break;
//            case '-':
//                printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//                break;
//            case '*':
//                printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//                break;
//            case '/':
//                if (b == 0)
//                {
//                    printf("Wrong!Division by zero!\n");
//                }
//                else
//                    printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//                break;
//
//
//
//            }
//        }
//        else
//            printf("Invalid operation!\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//
//
//    while ((scanf("%d", &a)) != EOF)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            printf("*");
//            if (i == a - 1) printf("\n");
//        }
//
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n));
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (n - 1 == j)
//                    printf("*\n");
//                else
//                    printf("* ");
//            }
//
//        }
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (~scanf("%d", &n))
//    {
//
//        for ( i = 0; i < n; i++)
//        {
//             
//            for (i=0;i<n;i++)
//            {
//                if (i = n - 1)
//                {
//                    printf("*");
//                }
//                else
//                 printf("* ");
//            }
//            for (j = n - 1; j >= 0; j--)
//            {
//                printf()
//            }
//
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 1; i <= n; i++)
//        {
//
//            for (int j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//
//        }
//    }
//    return 0;
//}
 