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
	printf("Before while loop");
	while (*(c + i) != '\0')
	{
		printf("Entered while loop");
		if (*(c + 0) >= 97 && *(c + 0) <= 122)
			*(c + 0) = *(c + 0) - 32;
		for (int k = 0; k < delimiters[k] != '\0'; k++)
		{
			if (*(c + i) == delimiters[k])
			{
				int j = i + 1;
				if (*(c + j) == '\0')
					break;
				else
				{
					while (!(*(c + j) >= 97 && *(c + j) <= 122) || !(*(c + j) >= 65 && *(c + j) <= 90))
						j++;
					if (*(c + j) >= 97 && *(c + j) <= 122)
					{
						*(c + j) = *(c + j) - 32;
					}
				}
			}	
		}
		i++;
	}
	return (c);
}
