#include "main.h"

/**
 * add_white_spaces - adds white spaces to the standard output
 * @n: number of white spaces
 * Return: Always void
 */
void add_white_spaces(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}

/**
 * print_times_table - prints the time table of a given integer @n
 * @n: the bound to generate the time table
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				int result = i * j;

				if (result == 0 && j == 0)
					_putchar(result + '0');
				else if (result < 10)
				{
					add_white_spaces(3);
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					add_white_spaces(2);
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result >= 100)
				{
					add_white_spaces(1);
					_putchar(result / 100 + '0');
					_putchar((result % 100) / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
	else
		return;
}
