#include <stdio.h>

/**
 * compute_fibonacci - computes first 50 fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
void compute_fibonacci(void)
{
	int i;
	unsigned long long int prev_2 = 1;
	unsigned long long int prev_1 = 2;

	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		unsigned long long int result = prev_1 + prev_2;

		if (i >= 95)
			printf("%llu", result);
		else
			printf("%llu, ", result);
		prev_2 = prev_1;
		prev_1 = result;
	}
	putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	compute_fibonacci();
	return (0);
}
