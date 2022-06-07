#include "main.h"

/**
 * print_times_table - prints the time table of a given integer @n
 * @n: the bound to generate the time table
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				char result;

				result = i * j;
				if (result == 0 && j == 0)
				{
					_putchar(result + '0');
				}
				else if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result >= 100)
				{
					_putchar(' ');
					_putchar((result / 100) % 10 + '0');
					_putchar((result % 100) / 10 + '0');
					_putchar(result % 10 + '0');
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
