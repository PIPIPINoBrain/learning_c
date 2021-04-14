#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* my_strcat(char *str1,char *str2)
{
	assert(str1 != NULL && str2 != NULL);
	char* ret = str1;
	while (*++str1 != '\0')
		;
	while (*str1++ = *str2++)
		;
	return ret;
}

char* my_strncat(char* str1, char* str2, int n)
{
	int i = 0;
	assert(str1 != NULL && str2 != NULL);
	char* ret = str1;
	while (*++str1 != '\0')
		;
	for (i = 0; i < n; i++)
	{
		*(str1 + i) = *(str2 + i);
	}
	*(str1 + n) = '\0';
	return ret;
}

int main()
{
	char str1[30] = "asdfg";
	char str2[] = "qwer";
	strcat(str1, str2);
	printf("%s\n", str1);
	my_strcat(str1, str2);
	printf("%s\n", str1);
	strncat(str1, str2, 3);
	printf("%s\n", str1);
	my_strncat(str1, str2, 3);
	printf("%s\n", str1);
	return 0;
}
