#void* 指针可以接收任意类型指针
#void* 指针不能解应用，也不能加地址
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//void qsort(void* base,
//	size_t num,
//	size_t width,
//	int(*cmp)(const void *e1,const void *e2)
//)

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;

}
//第一个元素小于第二个返回小于0的数，等于返回0，大于返回大于0的数

int main()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//struct stu {
//	char name[20];
//	int age;
//};
//
//int cmp_stu(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2) ->age;
//	/*return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);*/
//};
//int main()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu);
//
//}
