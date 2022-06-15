#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string to be encoded
 * Return: the address of the string encoded
 */
char *rot13(char *c)
{
	int i;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char equival[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (c[i] != '\0')
	{
		int j;

		j = 0;
		while (letters[j] != '\0')
		{
			if (c[i] == letters[j])
			{
				c[i] = equival[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
