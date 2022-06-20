#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory location to be filled
 * @b: constant byte to be filled
 * Return: the address of the location of the result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
