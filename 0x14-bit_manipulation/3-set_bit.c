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
 * _binary_to_uint - converts a string of bits to unsigned int
 * @b: the binary to be evaluated
 * Return: the unsigned int
 */
unsigned int _binary_to_uint(const char *b)
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

/**
 * _size - computes the size
 * @num: the number
 * @index: the index
 * Return: the size
 */
unsigned int _size(unsigned long int num, unsigned int index)
{
	unsigned int size;

	size = 0;
	if (num == 0)
		size = index + 1;
	while (num != 0)
	{
		size++;
		num = num >> 1;
	}
	return (size);
}

/**
 * set_bit - sets the bit at an index
 * @n: the number
 * @index: the index
 * Return: the status of the operation
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int i, size, j;
	int idx;
	char *binary;

	size = 0;
	num = *n;
	size = _size(num, index);
	binary = malloc(size * sizeof(*binary));
	if (binary == (void *)NULL)
		return (-1);
	for (j = 0; j < size; j++)
		binary[j] = '0';
	i = 0;
	num = *n;
	while (num != 0)
	{
		binary[size - i - 1] = (num & 1) + '0';
		num = num >> 1;
		i++;
	}
	idx = size - index - 1;
	*(binary + idx) = '1';
	num = _binary_to_uint(binary);
	free(binary);
	*n = num;
	return (1);
}
