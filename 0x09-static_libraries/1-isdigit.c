#include "main.h"

/**
 * _isdigit - checks whether @c is a digit
 * @c: the int to be evaluated
 * Return: 1 if @c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
