#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: the pointer to the first element
 * Return: the pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *next = NULL, *prev = NULL;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
