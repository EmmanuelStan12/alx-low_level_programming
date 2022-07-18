#include "lists.h"

/**
 * free_listint - frees a list of integers
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
