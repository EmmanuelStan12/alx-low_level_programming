#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string as reference
 * @c: character to be located
 * Return: the address of the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	p = NULL;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			p = &s[i];
			break;
		}
		s++;
	}
	return (p);
}
