#define  _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

//
//welcome to bit!!!!!
//*******************
//w*****************!
//we***************!!
//wel*************!!!
//...
//welcome to bit!!!!!
//
//
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	//char arr[] = "bit";//[b i t \0]
//	                   // 0 1 2 3
//	//strlen(arr)-1;
//
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "*******************";
//	int left = 0;//���±�
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//Sleep������ʵ��˯�ߣ���λ�Ǻ���
//		system("cls");//system��һ���⺯��������ִ��ϵͳ���cls�������Ļ��һ������
//		left++;
//		right--;
//	}
//
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	//���������ǣ��ַ�����123456��
//	int i = 0;
//	char password[20] = {0};//�ַ����飬���Դ���ַ���
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>\n");
//		scanf("%s", password);//�����������Ͼ��ǵ�ַ�����Բ���Ҫȡ��ַ
//		// 
//		//�ж������ַ����Ƿ���ȣ�Ҫʹ��strcmp����������ֱ��ʹ��==
//		//int ret = strcmp(password, "123456");
//		//�����һ���ַ���С�ڵڶ����ַ���������<0������
//		//�����һ���ַ������ڵڶ����ַ���������>0������
//		//�����һ���ַ������ڵڶ����ַ���������0
//		//
//		if (0 == strcmp(password,"123456"))
//		{
//			printf("��¼�ɹ�\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("��%d���������\n", i + 1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("******    1. play   ******\n");
	printf("******    0. exit   ******\n");
	printf("**************************\n");
}

//rand������ר�����������������
//rand�������ص���0~RAND_MAX(32767)֮���һ�������
//#define RAND_MAX 0x7fff
//

//
//rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
//srand�����ڳ�����ֻҪ����һ�ξͿ����ˣ�����ҪƵ������
//

//
//ʱ���
//C�����У�time�����᷵��ʱ���
//
//NULL - ��ָ��
//
//void game()
//{
//	int num = 0;
//	//1. ���������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2. ������
//
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &num);
//		if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		//��ӡ�˵�
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//game�������ǲ����ֵ�����·���߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;
//	return 0;
//}

//һ���ػ�����
//1. ����ִ�������͵���ʱ�ػ���60���ػ�
//������룺��������ȡ���ػ�
//shutdown -s -t 60
//shutdown -a ȡ���ػ�
//
#include <string.h>
#include <stdlib.h>


//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ�����1���ڹػ���������룺������ȥȡ���ػ�\n");
//	scanf("%s", input);
//	//�ж�
//	if (strcmp(input, "������") == 0)
//	{
//		printf("С�Թԣ����ȡ���ػ�\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע����ĵ�����1���ڹػ���������룺������ȥȡ���ػ�\n");
//		scanf("%s", input);
//		//�ж�
//		if (strcmp(input, "������") == 0)
//		{
//			printf("С�Թԣ����ȡ���ػ�\n");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}
//
//
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//дһ�������ӡ1-100֮������3�ı���������

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; 3*i <= 100; i++)
//	{
//		printf("%d ", 3*i);
//	}
//
//	//for (i = 3; i <= 100; i+=3)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	return 0;
//}
//


//д���뽫�������������Ӵ�С�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����3������
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	//����ֵ����a�У���Сֵ����c�У�ʣ���һ������b��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//

//��ӡ100~200֮�������
//��������������ֻ�ܱ�1 �� ����������������
//7 1 (2 3 4 5 6) 7
//n 2~n-1
//101
//2~100
//100
//2~99
//
//int main()
//{
//	int i = 0;
//	for (i = 9; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//��2~i-1֮��������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//sqrt �ǿ�ƽ���Ŀ⺯��

#include <math.h>

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//��2~i-1֮��������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//��2~i-1֮��������Գ�
//		int flag = 1;//����i������
//		int j = 0;
//		for (j = 2; j <= (int)sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�Գ���

//
//����������N�־��硷
//



//��ӡ1000�굽2000��֮�������
//���꣺
//1. �ܱ�4���������Ҳ��ܱ�100����������
//2. �ܱ�400����������

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y+=4)
//	{
//		//�ж�y�ǲ�������
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

//���������������������������Լ��

//int main()
//{
//	int m = 0;
//	int n = 0;
//	//����
//	scanf("%d %d", &m, &n);//18 24
//	int k = (m > n ? n : m);
//	//�������Լ������m��n�Ľ�Сֵ
//	while (1)
//	{
//		if (m % k == 0 && n % k == 0)
//		{
//			break;
//		}
//		k--;
//	}
//	printf("%d\n", k);
//
//	return 0;
//}


//
//��������ô���ģ�
//

//int main()
//{
//	int m = 0;
//	int n = 0;
//	//����
//	scanf("%d %d", &m, &n);//18 24
//	int k = 0;
//	while (k=m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d\n", n);
//
//	return 0;
//}

//��С��������ô��
//6 8


//
//д����ҲҪ���õĴ���
//ģ�ºõĴ��룬�ܽ�д����ͽ����˼·
//





