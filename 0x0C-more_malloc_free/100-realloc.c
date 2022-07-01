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
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		p = malloc(new_size);
		return (p);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);
}
