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
	int i, k, size;

	if (min > max)
		return (NULL);
	i = min;
	size = max + 1 - min;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
	{
		*(p + k) = i;
		i++;
	}
	return (p);
}
