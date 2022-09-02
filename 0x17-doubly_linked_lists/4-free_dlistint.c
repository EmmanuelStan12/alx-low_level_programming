#include "lists.h"

/**
 * free_dlistint - frees the linked list
 * @head: the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *first;

	first = head;
	while (first != NULL)
	{
		dlistint_t *h;

		h = first->next;
		free(first);
		first = h;
	}
}
