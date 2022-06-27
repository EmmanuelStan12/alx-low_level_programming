#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concats all args to strings
 * @ac: no of args
 * @av: array of args
 * Return: the pointer of the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k;
	int size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	k = 0;
	for (i = 0; i < ac; i++)
	{
		char *str = av[i];
		for (; *str != '\0'; str++)
			size++;
		size++;
	}
	size++;
	printf("size: %d args: %d\n", size, ac);
	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		char *str = av[j];
		for (; *str != '\0'; str++)
		{
			*(p + k) = *str;
			k++;
		}
		*(p + k) = '\n';
		k++;
	}
	*(p + k) = '\0';
	return (p);
}
