#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value inclusive
 * @max: maximum value inclusive
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, k, j;

	if (min > max)
		return (NULL);
	i = min;
	j = 0;
	while (i <= max)
		i++;
	p = malloc(i * sizeof(int));
	for (k = min; k <= max; k++)
	{
		*(p + j) = k;
		j++;
	}
	return (p);
}
