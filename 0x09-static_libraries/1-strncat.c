#include "main.h"

/**
 * _strncat - concats two strings with reference to int @n
 * @dest: destination string
 * @src: source string
 * @n: number of source string to be concatenated
 * Return: the address of the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		*(dest + j + i) = src[j];
		j++;
	}
	*(dest + j + i) = '\0';
	return (dest);
}
