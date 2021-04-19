#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int s_find()
{
	union s {
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}
int main()
{
	int ret = s_find();
	if (ret == 1)
	{
		printf("xiao");
	}
	else
	{
		printf("da");
	}
	return 0;
}
