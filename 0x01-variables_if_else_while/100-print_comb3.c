#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	return (0);
}
