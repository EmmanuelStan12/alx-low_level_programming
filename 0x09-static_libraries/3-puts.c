#include "main.h"

/**
 * _puts - prints the argument passed
 * @str: argument to be evaluated
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
