#include "main.h"

/**
 * get_bit - gets a bit at an index
 * @n: the number
 * @index: the index
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int i;

	if (index >= sizeof(n) * LENGTH)
		return (-1);
	i = 0;
	num = n;
	while (i < index)
	{
		num = num >> 1;
		i++;
	}
	return (num & 1);
}
