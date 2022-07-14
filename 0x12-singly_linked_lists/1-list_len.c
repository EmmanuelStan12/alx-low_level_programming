#include "lists.h"

size_t print_list(const list_t *h)
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
