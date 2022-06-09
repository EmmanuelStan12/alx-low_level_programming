#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: the number of lines to be drawed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		if (i > 0)
			_putchar('\n');
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
	}
	_putchar('\n');
}
