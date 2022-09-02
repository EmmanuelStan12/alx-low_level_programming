#include "lists.h"

/**
 * dlistint_len - computes the size of a linked list
 * @h: linked list
 * Return: the size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = (dlistint_t *) h;
	int size;

	size = 0;
	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}
