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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
