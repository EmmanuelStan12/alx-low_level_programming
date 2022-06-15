#include "main.h"

/**
 * _strncpy - copys the source string into the destination address
 * @dest: destination address
 * @src: source string address
 * @n: number of source string to be copied
 * Return: the address of the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
