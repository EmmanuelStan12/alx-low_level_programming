#include <stddef.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _size - finds the number of words of a given string
 * @str: string to be evaluated
 * Return: the length of the string
 */
int _size(char *str)
{

	int i = 0, size = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			int j, k = 0;

			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				k++;
			if (i != j)
			{
				i = i + k;
				size++;
			}
		}
	}
	return (size + 1);
}

/**
 * _compute - does the function of strtow
 * @str: string to be computed
 * @p: address of the result
 * @size: number of words in s
 */
void _compute(char *str, char **p)
{
	int l = 0;
	int c = 0;

	while (str[l] != '\0')
	{
		if (str[l] == ' ')
			l++;
		else
		{
			int j, k = 0;

			for (j = l; str[j] != ' ' && str[j] != '\0'; j++)
				k++;
			if (l != j)
			{
				char *cpy = malloc((k + 1) * sizeof(char));
				int n;

				for (n = 0; n < k; n++)
					cpy[n] = str[l + n];
				cpy[n] = '\0';
				*(p + c) = cpy;
				l = l + k;
				c++;
			}
		}
	}
	*(p + c) = NULL;
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: the pointer to the array of strings
 */
char **strtow(char *str)
{
	char **p;
	int size;

	if (str == NULL || *str == '\0')
		return (NULL);
	size = _size(str);
	p = (char **) malloc(size * sizeof(char *));
	_compute(str, p);
	return (p);
}
