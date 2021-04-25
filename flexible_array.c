#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct S {
//	int num;
//	int s[0];
//};

//int main()
//{
//	struct S* ss = (struct S*)malloc(44);
//	if (ss == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//			ss->s[i] = i;
//	}
//	int j = 0;
//	for (j = 0; j < 10; j++)
//		printf("%d ", ss->s[j]);
//	struct S* sss = realloc(ss, 84);
//	if (sss != NULL)
//	{
//		ss = sss;
//		int i = 0;
//		for (i = 0; i < 20; i++)
//			ss->s[i] = i;
//		int j = 0;
//		for (j = 0; j < 20; j++)
//			printf("%d ", ss->s[j]);
//	}
//	free(ss);
//	ss = NULL;
//
//	return 0;
//}

struct S {
	int num;
	int* s;
};

int main()
{
	struct S* ss = (struct S*)malloc(sizeof(struct S));
	if (ss == NULL)
		printf("%s\n", strerror(errno));
	ss->s = (int*)malloc(40);
	if (ss->s == NULL)
		printf("%s\n", strerror(errno));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//*((ss->s)+i) = i;
		ss->s[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		/*printf("%d ", *(ss->s+i));*/
		printf("%d ", ss->s[i]);
	}
	free(ss->s);
	ss->s = NULL;
	free(ss);
	ss = NULL;
	return 0;
}
