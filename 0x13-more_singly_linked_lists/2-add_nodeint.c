#include "lists.h"

/**
 * add_nodeint - adds a new node to the list
 * @head: the head of the list
 * @n: the new integer to be added
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
