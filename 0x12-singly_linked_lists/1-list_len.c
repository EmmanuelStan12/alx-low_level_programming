#include "lists.h"

/**
 * list_len - computes the size of a linked list
 * @h: linked list
 * Return: the size of the linked list
 */
size_t list_len(const list_t *h)
{
	list_t *head = (list_t *) h;
	int size;

	size = 0;
	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return size;
}
