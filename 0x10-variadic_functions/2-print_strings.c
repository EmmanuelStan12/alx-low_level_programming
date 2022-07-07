#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a set of strings
 * @seperator: seperator for each string
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == (char *)NULL)
			str = "(nil)";
		printf("%s", str);
		if (seperator != (char *)NULL)
		{
			if (i != n - 1)
				printf("%s", seperator);
		}
	}
	putchar('\n');
	va_end(ap);
}
