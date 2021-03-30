#include<stdio.h>
#include<stdlib.h>

void print(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *((*p + i)+j));
			printf("%d ", *(p[i] + j));
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[3][5] = { {1,2,3,4,5},{2,4,5,6,3},{3,4,5,6,7} };
	int* d = a;
	int (*p)[10] = &a;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*p + i));

	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
		printf("%d ", d[i]);
		printf("%d ", *(a + i));
		printf("%d ", *(d + i));
	}
	printf("\n");
	print(b,3,5);

	return 0;
}
