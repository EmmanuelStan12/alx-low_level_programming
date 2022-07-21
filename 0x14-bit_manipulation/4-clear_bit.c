#include "main.h"

/**
 * clear_bit - sets the bit at an index
 * @n: the number
 * @index: the index
 * Return: the status of the operation
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * LENGTH)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
