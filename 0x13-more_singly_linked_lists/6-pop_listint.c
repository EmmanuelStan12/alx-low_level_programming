#include "lists.h"

/**
 * pop_listint - pops the first int in the list
 * @head: the head of the list
 * Return: the int that was popped
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	n = 0;
	h = *head;
	if (h == NULL)
		return (n);
	n = h->n;
	*head = h->next;
	free(h);
	return (n);
}
