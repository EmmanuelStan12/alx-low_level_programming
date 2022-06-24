#include "main.h"

/**
 * _strcpy - copies string from one place to another
 * @dest: destination of the source string
 * @src: source of the string
 * Return: the address of the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (j <= i)
	{
		*(dest + j) = src[j];
		j++;
	}
	return (dest);
}
