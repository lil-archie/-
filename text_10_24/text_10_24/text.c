#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	while (n == 0)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	//1 2 3 4 5 6 7 8 9 10
//	int n = 1;
//	while (n <= 10)
//	{
//		if (5 == n)
//		{
//			continue;
//		}
//		printf("%d ", n);
//		n++;
//	}
//		
//	return 0;
//}


//int main()
//{
//	//1 2 3 4  6 7 8 9 10
//	int n = 0;
//	while (n < 10)
//	{
//		n++;
//		if (5 == n)
//		{
//			continue;
//		}
//		printf("%d ", n);
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch);//����
//	//printf("%c\n", ch);//���
//
//
//	ch = getchar();//����һ���ַ�
//	putchar(ch);//���һ���ַ�����Ļ��
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//%c - �ַ�
//%s -  �ַ���
//%d - ����
//%f - float������
//%lf - double ������
//%p - ��ӡ��ַ��
//%x - ��16���Ƶ���ʽ��ӡ
//
//int main()
//{
//	//�������������ǵ�ַ
//	char password[20] = { 0 };
//	int ch = 0;
//
//	printf("����������:>");
//	scanf("%s", password);//123456
//
//	//����\n - ��������
//	while (getchar()!='\n')
//	{
//		;
//	}
//		
//	printf("��ȷ������(Y/N):>");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	return 0;
//}
//

//
//#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//



//scanf - ����ָ���ĸ�ʽ����������
//printf - ����ָ���ĸ�ʽ���������
//û��Ҫ�������о���δ���õñȽ���

//int main()
//{
//	//int num = 0;
//	//scanf("%d", &num);
//	//printf("%d", num);
//
//	//float f = 0.0f;
//	//scanf("%f", &f);
//	//printf("%f\n", f);
//
//	return 0;
//}
//


//
//int main()
//{
//	int i = 1;//1 - ��ʼ��
//
//	while (i < 10)//2 - �ж�
//	{
//		printf("%d ", i);
//		i++;//3 - ����
//	}
//
//	return 0;
//}

//ʹ��for����Ļ�ϴ�ӡ1~10

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0~9
//	//��ӡ���������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//forѭ���ĳ�ʼ�����жϺ͵����������ֶ�����ʡ��
//	//����ʡ�Ե��жϲ��֣��жϾͺ�Ϊ�棬ѭ������ѭ��
//
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	for (i=0; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//			continue;
//
//		i++;
//	} while (i<=10);
//
//	return 0;
//}
//

//while for  do.while
//1*2*3*4*5

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//5
//	//ѭ������1~n������
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//���� 1!+2!+3!+����+10!
//1! =1
//2! =1*2 = 1!*2
//3! =1*2*3 = 2!*3
//4! =1*2*3*4=3!*4
//5!=4!*5


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	//���� - �ô���һ�����ߣ�����һ�����Ĺ۲�
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	//���� - �ô���һ�����ߣ�����һ�����Ĺ۲�
//	scanf("%d", &n);//3
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//��һ�����������顿�в��Ҿ����ĳ������n
//
//int main()
//{
//	//���������n��Ԫ�أ���������Ҫ��n��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//����7
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±���:%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	//break, �Ҳ�����ʱ��Ҳ����������
//	if (flag == 0)
//		printf("�Ҳ���\n");
//
//	return 0;
//}

int main()
{
	//���������n��Ԫ�أ���������Ҫ��n��
	int arr[10] = { 1,2,3,4,5,6,17,18,19,110 };
	int k = 7;//����7
	int left = 0;
	int right = 9;
	int flag = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;//����м�Ԫ�ص��±�
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("�Ҳ���\n");

	return 0;
}

