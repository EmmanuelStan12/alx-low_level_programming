#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_int - prints the int
 * @sp: list to be evaluated
 */
void print_int(va_list sp)
{
	int i = va_arg(sp, int);

	printf("%d", i);
}

/**
 * print_char - prints the character
 * @sp: list
 */
void print_char(va_list sp)
{
	int ch = va_arg(sp, int);

	printf("%c", ch);
}

/**
 * print_str - prints the string
 * @sp: list
 */
void print_str(va_list sp)
{
	char *s = va_arg(sp, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
 * print_float - prints the float
 * @sp: list
 */
void print_float(va_list sp)
{
	printf("%f", va_arg(sp, double));
}

/**
 * print_all - prints all parameters given
 * @format: format of output
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	tp_t tps[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{'f', print_float}
	};

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		int j = 0;

		while (j < 4)
		{
			if (format[i] == tps[j].f)
			{
				tps[j].fun(ap);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
