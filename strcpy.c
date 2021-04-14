#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


char* my_strcpy(char* dest, const char* sour)
{
	assert(dest != NULL);
	assert(sour != NULL);
	char* ret = dest;
	while (*dest++ = *sour++)
	{
		;
	}

	return ret;
}

int main()
{
	char str1[] = "asdfgsd";
	char str2[] = "jkl";
	char str3[] = "asdasgfvasg";
	strcpy(str1, str3);
	printf("%s\n", str1);
	my_strcpy(str1, str2);//返回str1地址
	printf("%s\n", str1);
	return 0;
}
