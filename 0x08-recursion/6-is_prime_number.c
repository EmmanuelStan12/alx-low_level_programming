#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: number to be evaluated
 * @factor: current factor
 * Return: 1 or 0
 */
int is_prime(int n, int factor)
{
	if (n <= 1)
		return (0);
	if (n % factor == 0)
		return (0);
	else if (factor >= n / 2)
		return (1);
	return (is_prime(n, factor + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be evaluated
 * Return: 1, if the number is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
