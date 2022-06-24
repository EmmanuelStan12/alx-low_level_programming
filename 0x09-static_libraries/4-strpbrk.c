#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be evaluated
 * @accept: the string to be searched for
 * Return: the address of the pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *address;

	address = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		int j;
		int modified;

		modified = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				address = &s[i];
				modified = 1;
				break;
			}
		}
		if (modified)
			break;
		i++;
	}
	return (address);
}
