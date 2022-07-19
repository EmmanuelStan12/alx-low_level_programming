#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: the pointer to the first element in the list
 * @idx: the index of the place to be inserted
 * @n: the number to be inserted
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp, *next;
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
	temp->next = next;
	current->next = temp;
	return (temp);
}
