#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct num
{
	int num;
	char number[12];
	char sex[5];
}num;

struct name
{
	char name[15];
	num num21;
	char* dir;
};

int main()
{
	char arr = "123456789";
	num num21 = { 21,"18829509795","男"};
	struct name bobo = { "kerry",num21,arr };
	printf("%s\n",bobo.name);
	printf("%s\n", bobo.num21.number);
	printf("%d\n", num21.num);
	printf("%p\n", bobo.dir);
	struct name* p = &bobo;
	printf("%s\n", p->name);
	printf("%s\n", p->num21.number);


	return 0;
}
