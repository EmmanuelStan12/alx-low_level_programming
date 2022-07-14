#include "lists.h"

/**
 * add_node_end - adds a node to the start of the list
 * @head: head of the list
 * @str: string to be copied
 * Return: the pointer to the first element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *temp;
	int size;
	list_t *h;

	if (str == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
		return (NULL);
	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = s;
	temp->len = size;
	temp->next = NULL;
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
