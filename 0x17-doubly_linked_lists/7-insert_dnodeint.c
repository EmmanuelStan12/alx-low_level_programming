#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @head: the pointer to the first element in the list
 * @idx: the index of the place to be inserted
 * @n: the number to be inserted
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *next;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);
	current = *head;
	if (idx == 0)
	{
		temp->n = n;
		temp->next = current;
		temp->prev = NULL;
		current->prev = temp;
		*head = temp;
		return (temp);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	temp->n = n;
	next = current->next;
	if (next != NULL)
		next->prev = temp;
	current->next = temp;
	temp->prev = current;
	temp->next = next;
	return (temp);
}
