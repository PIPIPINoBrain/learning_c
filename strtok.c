#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

 
int main()
{
	char s[] = "asdfg.asd,sdasd";
	char k[] = ".,";
	char *ret = NULL;
	//ret = strtok(s, k);
	//printf("%s\n", ret);
	//ret = strtok(NULL, k);
	//printf("%s\n", ret);
	for (ret = strtok(s, k); ret != NULL; ret = strtok(NULL, k))
	{
		printf("%s\n", ret);
	}
	return 0;
}
