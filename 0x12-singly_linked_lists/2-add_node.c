#include "lists.h"

/**
 * add_node: adds a node to the start of the list
 * @head: head of the list
 * @str: string to be copied
 * Return: the pointer to the first element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *temp;
	int size;

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
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
