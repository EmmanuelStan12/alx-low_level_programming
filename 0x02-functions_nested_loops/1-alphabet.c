#include "main.h"

/**
 * print_alphabet - Entry point
 * prints the alphabets in sequence from a -> z
 * Return: 0 (Success)
 */
void print_alphabet(void)
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
