#include "search_algos.h"

/**
 * linear_search - searches an array linearly
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the first index of occurence
 */
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return (-1);
}
