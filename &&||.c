#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, a = 0, b = 1, c = 2;
	i = a++ && ++b && c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 0, b = 1, c = 2;
	i = a++ || ++b || c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 1, b = 1, c = 2;
	i = a++ && ++b && c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 1, b = 1, c = 2;
	i = a++ || ++b || c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	c = a > b ? 6 : 7;
	printf("%d\n", c);
	return 0;
}
