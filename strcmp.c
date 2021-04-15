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

int my_strcmp(char* str1, char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\n')
			return 0;
		str1++;
		str2++;
	}
	if (str1 > str2)
		return 1;
	else
		return -1;
	return 0;
}

int main()
{
	char str1[] = "asdfg";
	char str2[] = "asd";
	int ret = strcmp(str1, str2);
	printf("%d\n", ret);
	ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	return 0;
}
