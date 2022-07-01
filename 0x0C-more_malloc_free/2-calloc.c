#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates a memory location using malloc
 * @nmemb: number of elements
 * @size: size of the elements in bytes
 * Return: the pointer to the location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
