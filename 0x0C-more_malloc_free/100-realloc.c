#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 * Return: the new address of the memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *b;

	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
	{
		if (ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		unsigned int i = 0;

		b = (char *)ptr;
		for (i = 0; i < new_size && i < old_size; i++)
			*(p + i) = b[i];
		free(ptr);
	}
	return (p);
}
