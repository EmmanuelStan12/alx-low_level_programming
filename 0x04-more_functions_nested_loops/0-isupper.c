#include "main.h"

/**
 * _isupper - prints whether @c is in uppercase or not
 * @c: value to be evaluated
 * Return: 1 if it is uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
