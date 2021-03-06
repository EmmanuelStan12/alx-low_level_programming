#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the first bytes of s2 to copy
 * Return: the pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, num;

	i = 0;
	j = 0;
	num = 0;
	k = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		num = n;
		while (s2[j] != '\0')
			j++;
	}
	p = malloc((i + num + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
		while (*s1 != '\0')
		{
			*(p + k) = *s1;
			s1++;
			k++;
		}
	if (s2 != NULL)
		while (k < (i + num) && *s2 != '\0')
		{
			*(p + k) = *s2;
			k++;
			s2++;
		}
	*(p + k) = '\0';
	return (p);
}
