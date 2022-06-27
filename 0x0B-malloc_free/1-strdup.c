#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - copies a string into another memory location
 * @str: string to be copied
 * Return: the pointer to the new memory location
 */
char *_strdup(char *str)
{
	int size;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;

	p = malloc(size * sizeof(char));
	i = 0;

	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		*(p + i) = str[i];
		i++;
	}
	return (p);
}
