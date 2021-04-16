#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<errno.h>

 //1 No error
// 2 Operation not permitted
// 3 No such process
//*********
//errno 是一个全局错误码变量，执行过程中，
//发生了错误会把错误码放到errno中
int main()
{
	//char* str = strerror(errno);
	//printf("%s\n", str);
	FILE* pf  = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("successful");
	}
	return 0;
}
