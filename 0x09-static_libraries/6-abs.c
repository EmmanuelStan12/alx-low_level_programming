#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the value to be computed
 * Return: Always the absolute value computed
 */
int _abs(int n)
{
	signed int result;

	if ((n > 0) || (n < 0))
	{
		result = ((n > 0) - (n < 0)) * n;
		return (result);
	}
	else
		return (n);
}
