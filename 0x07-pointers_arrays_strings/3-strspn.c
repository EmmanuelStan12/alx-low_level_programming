#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: the string which @s should contain
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] != ' ' && s[i] != '\0')
	{
		int j;
		int length;

		length = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{

		}
	}
}
