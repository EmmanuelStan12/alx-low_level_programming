#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: string to be encoded
 * Return: the address of the string
 */
char *leet(char *c)
{
	int i;
	char l[] = "aeotl";
	int eq[] = { 4, 3, 0, 7, 1 };

	i = 0;
	while (c[i] != '\0')
	{
		int j;

		for (j = 0; l[j] != '\0'; j++)
		{
			if (l[j] == c[i] || c[i] == l[j] - 32)
				*(c + i) = eq[j] + '0';
		}
		i++;
	}
	return (c);
}
