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
 * flip_bits - sets the bit at an index
 * @n: the number
 * @m: the second number
 * Return: the status of the operation
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int m_size, n_size, size, j, flips;

	n_size = _size(n);
	m_size = _size(m);
	size = n_size > m_size ? n_size : m_size;
	flips = 0;
	for (j = 0; j < size; j++)
	{
		if ((m & 1) != (n & 1))
			flips++;
		m = m >> 1;
		n = n >> 1;
	}
	return (flips);
}
