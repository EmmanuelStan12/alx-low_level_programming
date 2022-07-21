#include "main.h"

/**
 * _print - prints the binary rep of a num
 * @num: number
 * Return: void
 */
void _print(unsigned long int num)
{
	if (num == 0)
		return;
	_print(num >> 1);
	_putchar((num & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be evaluated
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	_print(n);
}
