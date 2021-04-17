#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	if (arr2 == '\0')
		return arr1;
	char* p1 = NULL;
	char* p2 = NULL;
	char* ret = (char*)arr1;
	while (*ret != '\0')
	{
		p1 = ret;
		p2 = (char*)arr2;
		while ((*p1 != '\0')&&(*p2 != '\0')&&(*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p1 == '\0')
			return NULL;
		else if (*p2 == '\0')
			return ret;
		ret++;
	}
}

int main()
{
	char arr1[] = "sdasd";
	char arr2[] = "as";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("none");
	else
		printf("%s\n",ret);
	ret = strstr(arr1, arr2);
	if (ret == NULL)
		printf("none");
	else
		printf("%s\n", ret);
	return 0;
}
