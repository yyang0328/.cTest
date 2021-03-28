# include <stdio.h>

int main(void)
{
	int a[3] = {1, 2, 3};

	int (*p)[3];
	p = &a;
	
	int * p2;
	p2 = a;

	printf("数组的地址为：%p\n", a);
	printf("数组的地址为：%p\n", &a[0]);
	printf("p数组的地址为：%p\n", p);
	printf("p2的地址为：%p\n", p2);

	return 0;

}
