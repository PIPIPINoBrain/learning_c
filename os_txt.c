#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pfw = fopen("README.txt", "w");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fputc('6',pfw);
//	fputc( '9',pfw);
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfw = fopen("README.txt", "r");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	char a = fgetc(pfw);
//	char b = fgetc(pfw);
//	printf("%c,%c", a, b);
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//
//}

//
//int main()
//{
//	FILE* pfw = fopen("README.txt", "a");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int a =fputs("666",pfw);
//	fputs("999",pfw);
//	printf("%d\n", a);//写入成功为非负整数，失败为EOF -1
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfw = fopen("README.txt", "r");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	char a[100] = { 0 };
//	char b[100] = { 0 };
//	char* c = NULL;
//	char* d = NULL;
//	c = fgets(a,3,pfw);
//	d = fgets(b,4,pfw);
//	printf("%s\n",a);
//	printf("%s\n",b);
//	printf("%s\n",c);
//	printf("%s\n",d);//成功返回输入的str，失败返回NULL
//	fclose(pfw);
//	pfw = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfw = fopen("README.txt", "w");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int a1 = 1;
//	char b1 = 'c';
//	int a = 0;
//	a = fprintf(pfw,"%s%d%c","asd",a1,b1);//成功返回参数个数，失败返回-1
//	printf("%d\n", a);
//	pfw = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfw = fopen("README.txt", "r");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	char i[10] = {0};
//	int b = 0;
//	char c = 0;
//	int a = 0;
//	a = fscanf(pfw,"%s%d%c",i,&b,&c);//读入字符串"\0"结束，读入字符，可以读入空格
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%s\n", i);
//	printf("%c\n", c);
//	a = fscanf(pfw, "%s%c%d", i, &c, &b);//返回读到个数，不成功返回-1
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%s\n", i);
//	printf("%c\n", c);
//	pfw = NULL;
//	return 0;
//}
// sscanf,sprintf
struct S {
	int age;
	char a;
};

//int main()
//{
//	struct S s = { 1,'c' };
//	FILE* pfw = fopen("README.txt", "wb");
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	fwrite(&s, sizeof(s), 1, pfw);
//	pfw = NULL;
//	return 0;
//}



//int main()
//{
//	struct S s = {0};
//	FILE* pfw = fopen("README.txt", "rb");
//	int a = 0;
//	if (pfw == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	a = fread(&s, sizeof(struct S), 1, pfw);//元素大小，元素个数,成功返回读入个数count，失败返回0
//	printf("%d\n", a);
//	printf("%d\n", s.age);
//	printf("%c\n", s.a);
//	pfw = NULL;
//	return 0;
//}

//SEEK_CUR文件指针当前位置，SEEK_END 文件末位位置， SEEK_SET 文件起始位置
int main()
{
	FILE* pf = fopen("README.txt", "r");
	if (pf == NULL)
		perror("open file ...");//strerror(errno)一样
		return 0;
	fseek(pf, 2, SEEK_CUR);
	int b = ftell(pf);
	char a = fgetc(pf);//指针偏移量ftell
	rewind(pf);  //指正回到起始位置
	printf("%c\n", a);
	printf("%d\n", b);
	if (feof(pf))
		printf("ssssss\n");//pf 指针是否到达文件末，到达了为真，未到达为假
	else if (ferror(pf))//读取失败为真，测试流上的错误，有错误为真
		printf("dddd\n");
	fclose(pf);
	pf = NULL;
}
