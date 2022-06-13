#include <stdio.h>

/**
 * print_array - prints the values of a given array
 * @n: size of the array
 * @a: array to be evaluated
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
		i++;
	}
	printf("\n");
}
