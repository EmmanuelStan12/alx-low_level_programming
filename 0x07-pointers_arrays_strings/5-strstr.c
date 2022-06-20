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
	for (; *haystack != '\0'; haystack++)
	{
		int j;

		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack);
	}
	return (NULL);
}
