#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination of the bytes to be copied
 * @src: the source of the bytes to be copied
 * @n: number of bytes to be evaluated
 * Return: the address of the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
