#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int l;

	l = 1;
	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int k;

			for (k = i; k < 10; k++)
			{
				for (l = j; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	return (0);
}

