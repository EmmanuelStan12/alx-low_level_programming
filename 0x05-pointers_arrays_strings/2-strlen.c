#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of the string
 * @s: string to be evaluated
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
