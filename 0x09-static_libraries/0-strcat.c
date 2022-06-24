#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: destination string
 * @src: source string
 * Return: the address of the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		*(dest + j + i) = src[j];
		j++;
	}
	*(dest + j + i) = '\0';
	return (dest);
}
