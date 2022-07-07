#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>

/**
 * struct tp - struct tp
 * @f: format
 * @fun: function associated
 */
typedef struct tp
{
	char f;
	void (*fun)(va_list sp);
} tp_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *seperator, const unsigned int n, ...);

void print_strings(const char *seperator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
