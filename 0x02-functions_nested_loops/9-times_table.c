#include "main.h"

/**
 * times_table - prints the time table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
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
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
