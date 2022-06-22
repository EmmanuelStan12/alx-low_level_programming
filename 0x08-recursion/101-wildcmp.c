#include "main.h"

/**
 * cmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * @i: s1 index
 * @j: s2 index
 * Return: 1 or 0
 */
int cmp(char *s1, char *s2, int i, int j)
{
	if (*s1 == *s2)
		return cmp(s1 + 1, s2 + 1);
	else if (*s2 == '*')
		return cmp(s1, s2 + 1);
	else
	{
		if (*(s2 - 1) == '*' && *s2 + 1 != '\0')
			return cmp(s1 + 1, s2
	}
}

/**
 * wildcmp - checks if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1, if they are identical and 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	
}
