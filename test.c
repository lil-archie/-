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
//        printf("Can’t open the file!");
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	char i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i, pf);
//	}
//	fputc('z',pf);
//	//关闭文件
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
//	//读取文件
//	//....
//
//	//关闭文件
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
//	//写文件
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
//	//关闭文件
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
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	//写文件
//	//测试写一行数据
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
//	//读文件
//	//测试一行数据
//	char buf[20] = {0};
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	fgets(buf, 20, pf);
//	printf("%s", buf);
// 	//关闭文件
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
//	//格式化的写入文件
//	fprintf(pf, "%s %d %f\n", s.name, s.age, s.score);
//	//关闭文件
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
//	//格式化的读取文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	
//	//打印看数据
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	
//	//关闭文件
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
////测试二进制的写函数：fread
//int main()
//{
//	struct S s = { 0};
//	FILE* pf = fopen("test.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//测试二进制的写函数fwrite
//int main()
//{
//	struct S s = { "张三", 20, 98.5};
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	//关闭文件
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
//	printf("%s\n", buf);//按照字符串打印的
//
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//打印结构体数据
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
//		//如果继续往下读，必然是d
//		//但是我们调整一下，去读取：b
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
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


#include <stdio.h>
#include <windows.h>
//VS2019 WIN11 环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);//10秒
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);

	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
