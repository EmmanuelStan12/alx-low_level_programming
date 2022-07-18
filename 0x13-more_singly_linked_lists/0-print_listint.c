#include "lists.h"

/**
 * print_listint - prints the elements of the list
 * @h: the list to be printed
 * Return: the number of items in the list
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
