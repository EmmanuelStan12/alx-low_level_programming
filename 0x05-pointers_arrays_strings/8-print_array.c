#include <stdio.h>

/**
 * print_array - prints the values of a given array
 * @n: size of the array
 * @a: array to be evaluated
 */
void print_array(int *a, int n)
{
	if (n >= 0)
	{
		int i;

		i = 0;
		while (i < n)
		{
			if (i != n - 1)
				printf("%d, ", *(a + i));
			else
				printf("%d\n", *(a + i));
			i++;
		}
	}
}
