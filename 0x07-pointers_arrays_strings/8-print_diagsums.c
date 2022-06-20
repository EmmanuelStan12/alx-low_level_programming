#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_sum;
	int last_sum;

	i = 0;
	first_sum = 0;
	last_sum = 0;
	while (i < (size * size))
	{
		int j;
		int k;

		j = i + (i / size);
		k = (size - 1) + i - (i / size);
		first_sum += *(a + j);
		last_sum += *(a + k);
		i = i + size;
	}
	printf("%d, %d\n", first_sum, last_sum);
}
