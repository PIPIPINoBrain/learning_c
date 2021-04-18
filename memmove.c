#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

void* my_memmove(void* dest, void* scr, int count)
{
	assert(dest != NULL);
	assert(scr != NULL);
	char* ret = dest;
	if (dest < scr)
	{
		while (count--)
		{
			*(char*)dest = *(char*)scr;
			((char*)dest)++;
			((char*)scr)++;
		}
	}
	else
		while (count--)
		{
			*((char*)dest+count) = *((char*)scr+count);
		}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8 };
	my_memmove(arr1 + 2, arr1, 16);
	int i = 0;
	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}
