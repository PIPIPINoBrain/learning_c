#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

#pragma pack(1)
struct s1 {
	int s;
	char l;
	char p;
};
#pragma pack()
int main()
{
	struct s1 s1;
	printf("%d\n", sizeof(s1));
	return 0;
}
