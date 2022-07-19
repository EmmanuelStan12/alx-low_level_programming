#include "lists.h"

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: the list to be evaluated
 * @index: the index of the item to be returned
 * Return: the item at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
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
