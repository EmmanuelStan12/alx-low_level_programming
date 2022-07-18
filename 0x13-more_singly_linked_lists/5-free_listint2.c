#include "lists.h"

/**
 * free_listint2 - frees a list of integers
 * @head: the list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		h = *head;
		*head = h->next;
		free(h);
	}
}
