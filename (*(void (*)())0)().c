#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 2, b = 3;
	int c = add(a, b);
	printf("%d\n", c);
	printf("%p\n", add);
	printf("%p\n", &add);
	int (*p)(int, int) = add;
	printf("%p\n", p);
	printf("%d\n", (*p)(a, b));
}

//(*(void (*)())0)()   
//void (*)()  函数指针类型     (void (*)())0  将0强制转换为函数指针类型，0成函数指针地址
// 调用0地址的该函数
