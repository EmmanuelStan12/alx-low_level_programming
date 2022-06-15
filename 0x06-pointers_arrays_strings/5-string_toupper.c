#include "main.h"

/**
 * string_toupper - converts all lowercase letter to upper case
 * @c: character to be changed
 * Return: the address of the string
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
			*(c + i) = c[i] - 32;
		i++;
	}
	return (c);
}
