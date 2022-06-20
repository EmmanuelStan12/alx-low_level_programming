#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring
 * @haystack: the string to be searched
 * @needle: the string to search for
 * Return: the pointer to the beginning of the located substring, or NULL ifthe substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *address;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j;

		address = NULL;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			else if (address == NULL)
			{
				address = &haystack[i + j];
			}
		}
		if (needle[j] == '\0' && address != NULL)
			break;
		i++;
	}
	return (address);
}
