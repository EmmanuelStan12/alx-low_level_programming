#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator - the seperator between each number
 * @n: number of integer
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (seperator != (char *)NULL)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1)
				printf("%s", seperator);
		}
	}
	va_end(ap);
	putchar('\n');
}
