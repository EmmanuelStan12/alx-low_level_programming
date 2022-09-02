#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: the list to be evaluated
 * @index: the index of the item to be returned
 * Return: the item at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	h = head;
	for (i = 0; i < index; i++)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
	}
	return (h);
}
