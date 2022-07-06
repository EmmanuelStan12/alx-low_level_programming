#include "function_pointers.h"

/**
 * int_index - finds the index of an element in an array
 * @array: array of elements
 * @size: size of array
 * @cmp: function pointer to compare an int with another
 *
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
