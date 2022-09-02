#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the start of the list
 * @head: head of the list
 * @n: string to be copied
 * Return: the pointer to the first element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *h = *head;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (h->next != NULL)
		h = h->next;
	temp->prev = h;
	h->next = temp;
	return (temp);
}
