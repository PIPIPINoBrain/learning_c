#define _CRT_SECURE_NO_WARNINGS
#define SQUARE(X) X*X
#define PRINT(X) printf("the value of "#X" is %d\n",X)//#会把传进来的参数变成字符串
#define CAT(X,Y) X##Y
#include<stdio.h>
#include<stdlib.h>


int main()
{
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%s\n", __FUNCTION__);
	//printf("%d\n", __STDC__);严格按照C标准为1，未按照为未定义
	int ret = SQUARE(5);
	int hh = SQUARE(5 + 1);
	int hello23 = 23;
	printf("%d\n", ret);
	printf("%d\n", hh);//宏是完全替换不是传参
	printf("%d\n", CAT(hello, 23));
	PRINT(CAT(hello,23));
	PRINT(hh);
	PRINT(6);
	return 0;
}
