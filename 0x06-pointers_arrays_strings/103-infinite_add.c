#include "main.h"
#include <stdio.h>

/**
 * _add_i - adds two numbers
 * @n1: first number
 * @n2: second number
 * i: size of n1
 * j: size of n2
 * Return: the final result
 */
char *_add(char *n1, char *n2, int i, int j, char *r, int size_r)
{
	int i_ptr;
	int j_ptr;
	int remainder;
	
	i_ptr = i - 1;
	j_ptr = j - 1;
	remainder = 0;
	while (i_ptr > 0)
	{
		int result;

		result = (n1[i_ptr] - '0') + (n2[j_ptr] - '0') + remainder;
		if(result > 10)
		{
			*(r + i_ptr) = result % 10;
			remainder = result / 10;
		}
		j_ptr--;
		i_ptr--;
	}
	return (ptr - i_ptr);
}

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the destination of the result of the addition
 * @size_r: the buffer size for the destination
 * Return: the pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	i = 0;
	j = 0;
	while (n1[i] != '\0')
		i++;
	while (n2[i] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	if (i > j)
	{
		int k;
		char *result = _add(n1, n2, i, j);

		k = 0;
		while (k < size_r && result[k] != '\0')
		{
			*(r + k) = result[k];
			k++;
		}
		if (*(result + k) != '\0')
			return (0);
		else
			return (r);
	}
	else if (j > i)
	{
		int k;
		char *result = _add(n1, n2, j, i);

		k = 0;
		while (k < size_r && result[k] != '\0')
		{
			*(r + k) = result[k];
			k++;
		}
		if (*(result + k) != '\0')
			return (0);
		else
			return (r);
	}
	else
	{	
		int k;
		char *result = _add(n1, n2, i, j);

		k = 0;
		while (k < size_r && result[k] != '\0')
		{
			*(r + k) = result[k];
			k++;
		}
		if (*(result + k) != '\0')
			return (0);
		else
			return (r);
	}
}
