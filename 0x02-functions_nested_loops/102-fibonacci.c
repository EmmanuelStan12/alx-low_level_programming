#include <stdio.h>

/**
 * compute_fibonacci - computes first 50 fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
void compute_fibonacci(void)
{
	int i;
	int prev_2 = 1;
	int prev_1 = 2;

	printf("1, 2, ");
	for (i = 0; i < 50; i++)
	{
		int result = prev_1 + prev_2;

		if(i >= 49)
			printf("%d", result);
		else
			printf("%d, ", result);
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
