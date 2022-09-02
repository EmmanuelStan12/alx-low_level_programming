#include "lists.h"

/**
 * print_dlistint - prints the content of a linked list
 * @h: linked list to be printed
 * Return: the size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = (dlistint_t *) h;
	int size;

	size = 0;
	while (head != NULL)
	{
		int n = head->n;

		printf("%d\n", n);
		size++;
		head = head->next;
	}
	return (size);
}
