#include <stdio.h>

/**
 * compute_fibonacci - computes first 50 fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
void compute_fibonacci_sum(void)
{
	int i;
	int prev_2 = 1;
	int prev_1 = 2;
	int sum;

	sum = 0;
	while (i < 4000000)
	{	
		i = prev_1 + prev_2;
		prev_2 = prev_1;
		prev_1 = i;
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	compute_fibonacci_sum();
	return (0);
}
