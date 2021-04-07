#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(char* a, char*b, int len)
{
	int i = 0;
	char j = 0;
	for (i = 0; i < len; i++)
	{
		j = a[i];
		a[i] = b[i];
		b[i] = j;
	}
}

int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void bubble_sort(void* p, int num, int len, int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)p + j * len, (char*)p + j * len + len) > 0)
			{
				swap((char*)p + j * len, (char*)p + j * len + len, len);
			}

		}
	}
}
int main()
{
	int s[11] = { 0,2,4,6,8,10,1,3,5,7,9 };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}
