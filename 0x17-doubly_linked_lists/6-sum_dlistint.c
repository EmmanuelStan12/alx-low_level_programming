#include "lists.h"

/**
 * sum_dlistint - sums a list of integers
 * @head: pointer to the first item of the list
 * Return: the sum of the items in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	if (head == NULL)
		return (sum);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
