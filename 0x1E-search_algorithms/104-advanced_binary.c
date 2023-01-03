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
 * _search - searches the list using binary search
 * @array: the array
 * @left: the left bound
 * @right: the right bound
 * @value: the value
 * Return: the index of occurence
 */
int _search(int *array, size_t left, size_t right, int value)
{
	int mid;

	if (left > right)
		return (-1);
	mid = left + ((right - left) / 2);
	print_array(array + left, right + 1 - left);
	if (array[mid] == value)
	{
		if (mid - 1 >= 0 && array[mid - 1] == value)
			return (_search(array, left, mid, value));
		return (mid);
	}
	else if (value > array[mid])
		return (_search(array, mid + 1, right, value));
	else
		return (_search(array, left, mid - 1, value));
	return (-1);
}

/**
 * advanced_binary - searches an array using binary search
 * @array: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the first index of occurence
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	int index;

	if (array == NULL)
		return (-1);
	index = _search(array, left, right, value);
	if (index == -1)
		return (-1);
	return (index);
}
