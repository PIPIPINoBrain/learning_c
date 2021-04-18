void* my_memcpy(void* dest, const void* scr, int num)
{
	assert(dest && scr);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		*(char*)dest = *(char*)scr;
		((char*)dest)++;
		((char*)scr)++;
	}
}


int main()
{
	int s[5] = { 0 };
	int k[] = { 2,4,5,8,9 };
	//memcpy(s, k, sizeof(k));
	my_memcpy(s, k, sizeof(k));
	int i = 0;
	int n = sizeof(s) / sizeof(s[0]);
	for (i = 0; i < n; i++)
	{
		printf("%d ", s[i]);
	}
	return 0;
}
