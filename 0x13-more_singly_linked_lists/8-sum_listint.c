#include "lists.h"

/**
 * sum_listint - sums a list of integers
 * @head: pointer to the first item of the list
 * Return: the sum of the items in the list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

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
