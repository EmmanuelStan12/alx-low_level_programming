#include <stdio.h>

int main(void)
{
	int i;
	int a[5];
	int *p;

	printf("the integer i with address %p\n", &i);
	printf("the array with address %p\n", a);
	return 0;
}
