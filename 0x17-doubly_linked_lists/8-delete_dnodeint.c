#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in the list
 * @head: pointer to the first element
 * @index: the node's index to be deleted
 * Return: the index deleted
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *temp, *next, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	if (temp == NULL)
		return (-1);
	next = temp->next;
	prev = temp->prev;
	if (next != NULL)
		next->prev = prev;
	prev->next = next;
	free(temp);
	return (1);
}
