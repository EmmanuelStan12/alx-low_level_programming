#include "main.h"

/**
 * puts_half - prints the last n characters of a string
 * @str: string to be evaluated
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i + 1] != '\0')
		i++;
	n = (i / 2) + 1;
	while (n != i + 1)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
