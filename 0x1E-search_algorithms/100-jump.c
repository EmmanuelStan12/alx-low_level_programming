#include "search_algos.h"

/**
 * jump_search - searches an array with jump search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m, a = 0, b = 0;

	if (array == NULL)
		return (-1);
	m = sqrt(size);
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += m;
		if (a >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a < size && a <= b)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
