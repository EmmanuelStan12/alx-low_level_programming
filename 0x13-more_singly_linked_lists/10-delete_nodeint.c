#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the list
 * @head: pointer to the first element
 * @index: the node's index to be deleted
 * Return: the index deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *node;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next != NULL)
			*head = (*head)->next;
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
	node = current->next;
	if (node->next != NULL)
		current->next = current->next->next;
	else
		current->next = NULL;
	free(node);
	return (1);
}
