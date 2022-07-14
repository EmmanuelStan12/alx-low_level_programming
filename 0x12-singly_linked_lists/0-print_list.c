#include "lists.h"

/**
 * print_list - prints the content of a linked list
 * @h: linked list to be printed
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	list_t *head = (list_t *) h;
	int size;

	size = 0;
	while (head != NULL)
	{
		char *str = head->str;

		if (str == NULL)
		{
			str = "[0] (nil)\n";
			printf("%s", str);
			size++;
			head = head->next;
			continue;
		}
		printf("[%d] %s\n", head->len, str);
		head = head->next;
		size++;
	}
	return (size);
}
