#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	return x + y;
}

int mul(int x, int y)
{
	return x * y;
}

int main()
{
	int a = 2, b = 3;
	int c = add(a, b);
	printf("%d\n", c);
	printf("%p\n", add);
	printf("%p\n", &add);
	int (*p)(int, int) = add;
	int (*d[2])(int, int) = { add,mul };//函数指针数组
	printf("%p\n", p);
	printf("%d\n", (*p)(a, b));
}

//(*(void (*)())0)()   
//void (*)()  函数指针类型     (void (*)())0  将0强制转换为函数指针类型，0成函数指针地址
// 调用0地址的该函数


// void(* signal ( int, void(*)(int) ) )(int);
// typedef void(*p)(int);名字定义为p
//p signal(int, signal)
