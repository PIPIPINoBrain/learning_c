  #include<stdio.h>
#include<stdlib.h>

int check_sys()
{
	int i = 1;
	return *(char*)&i;
}

int main()
{
	int i = check_sys();
	if (i == 1)
		printf("小端\n");
	else
		printf("大端\n");
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("%d,%d,%d\n", a, b, c);//整形提升 char127 **-127    uchar 0-255
	
	int k = 1;
	char p[1000];
	for (k = 0; k < 1000; k++)
	{
		p[i] = -1 - i;
	}
	printf("%d", strlen(p));

	return 0;
}                                                                                                                                                                                                           
