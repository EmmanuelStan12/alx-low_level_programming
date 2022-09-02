#include "lists.h"

/**
 * add_dnodeint - adds a node to the start of the list
 * @head: head of the list
 * @n: string to be copied
 * Return: the pointer to the first element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	*head = temp;
	return (*head);
}
