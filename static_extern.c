#include <stdio.h>
#include <stdlib.h>
//static 修饰局部变量延长生命周期
// extern 申明外部符号，可引用外部变量和外部函数
// static修饰函数，使外部连接属性变为内部连接属性
void add()
{
	static int a = 0;
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 6)
	{
		add();
		i++;
	}
	return 0;
}
