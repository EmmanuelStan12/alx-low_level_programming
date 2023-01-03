#include "search_algos.h"

/**
 * next_node - retrieves the next node per jump
 * @current: the current node
 * @step: the step size
 * Return: the next node
 */
listint_t *next_node(listint_t *current, int step)
{
	listint_t *next = current;
	int i;

	for (i = 0; i < step; i++)
	{
		if (next->next != NULL)
			next = next->next;
		else
			break;
	}
	return (next);
}

/**
 * jump_list - searches an array with jump search
 * @list: the array
 * @size: the size of the array
 * @value: the value to search
 * Return: the index of the value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current = list, *prev;
	size_t m;

	if (list == NULL)
		return (NULL);
	m = sqrt(size);
	while (current->index < size - 1 && current->n < value)
	{
		prev = current;
		current = next_node(current, m);
		printf("Value checked index [%ld] = [%d]\n", current->index, current->n);
		if (prev->index >= size)
			return (NULL);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev->index, current->index);
	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
