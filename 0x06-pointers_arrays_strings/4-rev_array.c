#include "main.h"

/**
 * reverse_array - reverses the given array
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int mid;

	i = 0;
	mid = n / 2;
	while (i < mid)
	{
		int temp = *(a + i);
		*(a + i) = *(a + (n - 1 - i));
		*(a + (n - 1 - i)) = temp;
		i++;
	}
}
