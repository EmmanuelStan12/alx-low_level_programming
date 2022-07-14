#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *first;

	first = head;
	while (first != NULL)
	{
		list_t *h;

		h = first->next;
		free(first->str);
		free(first);
		first = h;
	}
}
