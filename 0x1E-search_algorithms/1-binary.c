#include "search_algos.h"

/**
 * print_array - prints the array
 * @array: the array
 * @size: the size of the array
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches an array using binary search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the first index of occurence
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;
	int result = -1;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	while (right >= left)
	{
		mid = left + ((right - left) / 2);
		print_array(array + left, right + 1 - left);
		if (array[mid] == value)
		{
			result = mid;
			break;
		}
		else if (value > array[mid])
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}
	return (result);
}
