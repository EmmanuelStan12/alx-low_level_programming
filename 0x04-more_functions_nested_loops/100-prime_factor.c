#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int max;
	unsigned long int n;
	unsigned long int i;

	n = 612852475143;
	max = 1;
	for (i = 2; i <= n / 2; ++i)
	{
		printf("in loop");
		if (n % i == 0)
		{
			if (i > max)
				max = i;
		}
	}
	printf("%lu\n", max);
	return (0);
}
