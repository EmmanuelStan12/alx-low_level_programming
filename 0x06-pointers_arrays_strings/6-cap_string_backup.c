#include "main.h"

/**
 * cap_string - capitalizes the given string
 * @c: string to be capitalized
 * Return: address of the string capitalized
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == ' ' || c[i] == ',' || c[i] == '\n' || c[i] == ';' || c[i] == '\t' || c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			int j = i + 1;
			if (c[j] == '\0')
				break;
			else
			{
				while (!(c[j] >= 97 && c[j] <= 122) || !(c[j] >= 65 && c[j] <= 90))
					j++;
				if (c[j] >= 97 && c[j] <= 122)
				{
					*(c + j) = c[j] - 32;
				}
			}	
		}
		i++;
	}
	return (c);
}
