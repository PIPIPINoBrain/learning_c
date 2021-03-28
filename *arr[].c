#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,4,6,8,10 };
	int c[5] = { 1,3,5,7,9 };
	int* parr[] = { a,b,c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(parr[i]+j));
		}
		printf("\n");
	}


	return 0;
}
