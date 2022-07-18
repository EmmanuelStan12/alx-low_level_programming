#include "lists.h"

/**
 * insert_nodeint - inserts a node at a given index
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
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	next = current->next;
	temp->next = next;
	current->next = temp;
	return (temp);
}
