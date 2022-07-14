#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *h;

		h = head;
		while (h->next != NULL)
			h = h->next;
		free(h);
	}
}
