#include "main.h"

/**
 * print_last_digit - prints the last digit of the value given
 * @n: the value to be tested
 * Return: the last digit of the value
 */
int print_last_digit(int n)
{
	signed int mod;
	int result;

	mod = n % 10;
	if ((mod > 0) || (mod < 0))
	{
		result = ((mod > 0) - (mod < 0)) * mod;
	}
	else
		result = mod;
	_putchar(result + '0');
	return (result);
}
