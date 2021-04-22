#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//向内存申请10个整形空间
	int* p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
		//如果申请不成功，打印错误原因
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", * (p + i));
		}
	}
	//释放空间
	free(p);
	p = NULL;
	return 0;
}
