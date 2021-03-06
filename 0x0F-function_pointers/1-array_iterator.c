#include "function_pointers.h"

/**
 * array_iterator - executes a function on every element of an array
 * @array: the array to be evaluated
 * @size: size of the array
 * @action: the function pointer to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (size <= 0 || array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
