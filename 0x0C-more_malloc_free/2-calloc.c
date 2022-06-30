#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates a memory location using malloc
 * @nmemb: size of the memory location
 * Return: the pointer to the location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
