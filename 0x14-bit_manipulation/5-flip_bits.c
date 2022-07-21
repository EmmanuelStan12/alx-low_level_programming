#include "main.h"

/**
 * _size - computes the size
 * @num: the number
 * Return: the size
 */
unsigned int _size(unsigned long int num)
{
	unsigned int size;

	size = 0;
	if (num == 0)
		size = 1;
	while (num != 0)
	{
		size++;
		num = num >> 1;
	}
	return (size);
}

/**
 * _convert - convert to char
 * @n: the number
 * @c: the string
 * @size: the size
 * Return: void
 */
void _convert(unsigned int n, char *c, unsigned int size)
{
	unsigned int i = 0;

	while (n != 0)
	{
		c[size - i - 1] = (n & 1) + '0';
		n = n >> 1;
		i++;
	}
}

/**
 * flip_bits - sets the bit at an index
 * @n: the number
 * @m: the second number
 * Return: the status of the operation
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int m_size, n_size, size, j, flips;
	char *m_binary, *n_binary;

	n_size = _size(n);
	m_size = _size(m);
	size = n_size > m_size ? n_size : m_size;
	n_binary = malloc(size * sizeof(*n_binary));
	if (n_binary == (void *)NULL)
		return (-1);
	m_binary = malloc(size * sizeof(*m_binary));
	if (m_binary == NULL)
	{
		free(n_binary);
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		n_binary[j] = '0';
		m_binary[j] = '0';
	}
	_convert(n, n_binary, size);
	_convert(m, m_binary, size);
	flips = 0;
	for (j = 0; j < size; j++)
	{
		if (n_binary[j] != m_binary[j])
			flips++;
	}
	return (flips);
}
