#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i < size + 1; i++)
	{
		int j;
		int k;

		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
