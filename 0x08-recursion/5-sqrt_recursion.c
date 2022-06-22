#include "main.h"

/**
 * _sqrt - returns the square root of a number
 * @x: number to be evaluated
 * @y: supposed root
 * Return the natural square root or -1
 */
int _sqrt(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be evaluated
 * Return: the natural square root of the number n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
