#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: string to be printed
 */
void print_rev(char *str)
{
	int i;

	i = 0;
	while (str[i + 1] != '\0')
		i++;
	while (i != -1)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
