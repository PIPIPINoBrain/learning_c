#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0, a = 0, b = 1, c = 2;
	i = a++ && ++b && c++;//&&是且需要全部为1，a++是先使用后加，此时a=0，后边不考虑。
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 0, b = 1, c = 2;
	i = a++ || ++b || c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 1, b = 1, c = 2;
	i = a++ && ++b && c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);
	a = 1, b = 1, c = 2;
	i = a++ || ++b || c++;
	printf("a=%d,b=%d,c =%d\n", a, b, c);//||为或，当有1个为1就行，考虑到a=1使用，后边就不考虑了
	c = a > b ? 6 : 7;
	printf("%d\n", c);
	return 0;
}
