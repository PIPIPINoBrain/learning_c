#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int arr[3][3] = { {1,2},{1} };
	int i = 0;
	int j = 0;
	printf("%d\n", arr[0][0]);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("arr[%d][%d]=%d-->%p\n", i, j, arr[i][j], &arr[i][j]);
		}
	}
	return 0;
}
