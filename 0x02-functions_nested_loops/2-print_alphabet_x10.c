#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * prints all the alphabets in small letters ten times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		c = 'a';
		while (c != 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
