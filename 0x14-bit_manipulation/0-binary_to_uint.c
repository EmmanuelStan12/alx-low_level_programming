#include "main.h"

/**
 * _pow - computes the power of an int
 * @base: base of the number
 * @power: power of which base will be evaluated
 * Return: the power
 */
unsigned int _pow(unsigned int base, unsigned int power)
{
	unsigned int result;

	result = 1;
	while (power != 0)
	{
		result = result * base;
		power--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a string of bits to unsigned int
 * @b: the binary to be evaluated
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size, result;
	char *_b;

	if (b == NULL)
		return (0);
	size = 0;
	_b = (char *)b;
	while (*_b != '\0')
	{
		if (*_b != '1' && *_b != '0')
			return (0);
		size++;
		_b++;
	}
	result = 0;
	size--;
	while (*b != '\0')
	{
		if (*b == '1')
			result += _pow(2, size);
		size--;
		b++;
	}
	return (result);
}
