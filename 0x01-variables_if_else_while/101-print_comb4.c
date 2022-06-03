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
	while (i < 8)
	{
		int j;

		for (j = i + 1; j < 9; j++)
		{
			int k;

			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7 && j == 8 && k == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	return (0);
}
