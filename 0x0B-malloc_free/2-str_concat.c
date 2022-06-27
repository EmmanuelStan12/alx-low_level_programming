#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the address of the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size = 0, s2_size = 0;
	char *p;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		p = malloc(sizeof(char));
		*p = '\0';
		return (p);
	}
	if (s1 != NULL)
	{
		while (s1[s1_size] != '\0')
			s1_size++;
	}
	if (s2 != NULL)
	{
		while (s2[s2_size] != '\0')
			s2_size++;
	}
	p = (char *)malloc((s1_size + s2_size + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
		for (; *s1 != '\0'; s1++)
		{
			*(p + i) = *s1;
			i++;
		}
	if (s2 != NULL)
		for (; *s2 != '\0'; s2++)
		{
			*(p + i) = *s2;
			i++;
		}
	*(p + i) = '\0';
	return (p);
}
