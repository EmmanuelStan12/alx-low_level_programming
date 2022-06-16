#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes the given string
 * @c: string to be capitalized
 * Return: address of the string capitalized
 */
char *cap_string(char *c)
{
	int i;
	char delimiters[] = " \t\n,;,.!,?,\"(){}";

	i = 0;
	printf("Before while loop\n");
	while (*(c + i) != '\0')
	{
		int k;

		if (*(c + 0) >= 97 && *(c + 0) <= 122)
			*(c + 0) = *(c + 0) - 32;

		for (k = 0; delimiters[k] != '\0'; k++)
		{
			int j;

			j = i + 1;
			if (*(c + i) == delimiters[k] && c[j] >= 97 && c[j] <= 122)
				*(c + j) = c[j] - 32;
		}
		i++;
	}
	return (c);
}
