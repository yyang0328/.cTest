# include <stdio.h>

int main(void)
{
	int a[3] = {1, 2, 3};

	int (*p)[3];
	p = &a;
	
	int * p2;
	p2 = a;

	printf("����ĵ�ַΪ��%p\n", a);
	printf("����ĵ�ַΪ��%p\n", &a[0]);
	printf("p����ĵ�ַΪ��%p\n", p);
	printf("p2�ĵ�ַΪ��%p\n", p2);

	return 0;

}
