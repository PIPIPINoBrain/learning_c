//#pragma pack(1)  默认对其数修改（默认是8）  注意struct内存
struct s1 {
	int s;
	char l;
	char p;
};
//#pragma pack()
int main()
{
	struct s1 s1;
	printf("%d\n", sizeof(s1));
	printf("%d\n", offsetof(struct s1, l));//求相对偏移量，宏
	return 0;
}
