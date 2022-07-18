#include "lists.h"

/**
 * listint_len - prints the elements of the list
 * @h: the list to be printed
 * Return: the number of items in the list
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
