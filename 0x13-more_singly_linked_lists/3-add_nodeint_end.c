#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the list
 * @head: the head of the list
 * @n: the new integer to be added
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *h;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = temp;
	return (temp);
}
