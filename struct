#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
	char name[20];
	int pages;
	double price;
};

int main()
{
	struct book one = { "c学习设计",255,26.5 };
	struct book two = { "c语言提升训练",125,12.88 };
	printf("%s\n", one.name);
	printf("%.2f\n", one.price);
	one.pages = 256;
	printf("%d\n", one.pages);
	struct book* t = &two;
	strcpy((*t).name, "c语言初级");
	printf("%s\n", two.name);
	printf("%d\n", (*t).pages);
	printf("%.2f\n", t->price);
	return 0;
}
