#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value inclusive
 * @max: maximum value inclusive
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, k, j, size;

	if (min > max)
		return (NULL);
	i = min;
	j = 0;
	size = 0;
	while (i <= max)
	{
		i++;
		size++;
	}
	p = malloc(size * sizeof(signed int));
	for (k = min; k <= max; k++)
	{
		*(p + j) = k;
		j++;
	}
	return (p);
}
