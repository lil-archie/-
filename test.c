#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
//int main()
//{
//    long num = 0;
//    FILE* fp = NULL;
//    if ((fp = fopen("test.txt", "r")) == NULL)
//    {
//        printf("Can��t open the file!");
//        exit(0);
//    }
//    /*while (fgetc(fp) != EOF)
//    {
//        num++;
//    }*/
//    int ch = fgetc(fp);
//    printf("num=%c\n", ch);
//    fclose(fp);
//    return 0;
//}
//
////
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fputc('z',pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


//#define MAX_SIZE 5
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d", sizeof(pointer));
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	//....
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);*/
//
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//����дһ������
//	fputs("hello world\n", pf);
//	fputs("hello bit\n", pf);
//
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//����һ������
//	char buf[20] = {0};
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fgets(buf, 20, pf);
//	printf("%s", buf);
// 	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};

//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ʽ����д���ļ�
//	fprintf(pf, "%s %d %f\n", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ʽ���Ķ�ȡ�ļ�
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	
//	//��ӡ������
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//
//	return 0;
//}
//
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
////���Զ����Ƶ�д������fread
//int main()
//{
//	struct S s = { 0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���Զ����Ƶ�д����fwrite
//int main()
//{
//	struct S s = { "����", 20, 98.5};
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {"zhangsan", 20, 98.5};
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);//�����ַ�����ӡ��
//
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//��ӡ�ṹ������
//
//	return 0;
//}
//
//
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		int ch = fgetc(pf);
//		printf("%c\n", ch);//a
//		ch = fgetc(pf);
//		printf("%c\n", ch);//b
//		ch = fgetc(pf);
//		printf("%c\n", ch);//c
//
//		//����������¶�����Ȼ��d
//		//�������ǵ���һ�£�ȥ��ȡ��b
//		//fseek(pf, -2, SEEK_CUR);
//		fseek(pf, 1, SEEK_SET);
//		ch = fgetc(pf);
//		printf("%c\n", ch);//b
//		printf("%d\n", ftell(pf));
//		rewind(pf);
//		ch = fgetc(pf);
//		printf("%c\n", ch);//a
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


#include <stdio.h>
#include <windows.h>
//VS2019 WIN11 ��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);//10��
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);

	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
