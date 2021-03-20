#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int p = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		p *= i;
	}
	printf("%d\n", p);
	return 0;
}
