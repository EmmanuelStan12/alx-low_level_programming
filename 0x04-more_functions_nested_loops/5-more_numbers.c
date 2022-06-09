#include "main.h"

/**
 * more_numbers - prints the numbers 0 - 14, 10 times
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 15; j++)
			_putchar(j + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
