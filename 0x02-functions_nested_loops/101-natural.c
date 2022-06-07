#include "main.h"
#include <stdio.h>

/**
 * compute_sum - sums up the multiples of 3 and 5 of input n
 * @n: input to be computed
 * Return: the sum of all the multiples of 3 and 5
 */
int compute_sum(int n)
{
	int sum;
	int i;

	i = 0;
	sum = 0;
	while (i < n)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		i++;
	}
	return (sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", compute_sum(1024));
	return (0);
}
