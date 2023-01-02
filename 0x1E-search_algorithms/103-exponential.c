#include "search_algos.h"

/**
 * print_array - prints the array
 * @array: the array
 * @size: the size of the array
 * Return: void
 */
void print_array(int *array, size_t size)
{
	long unsigned int i;

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
 * _binary - searches an array using binary search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the first index of occurence
 */
int _binary(int *array, size_t size, int value)
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
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (result);
}

/**
 * exponential_search - searches an array with jump search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the index of the value
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, lower_bound = 0;
	int result;

	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	lower_bound = bound / 2;
	if (bound >= size)
		bound = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lower_bound, bound);
	result = _binary(array + lower_bound, bound + 1 - lower_bound, value);
	if (result == -1)
		return (-1);
	return (result + lower_bound);
}
