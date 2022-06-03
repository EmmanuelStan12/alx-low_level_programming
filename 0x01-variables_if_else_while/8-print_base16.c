#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 0;
	while (c != 'f' + 1)
	{
		if (c == 10)
			c = 'a';
		if (c > 9)
			putchar(c);
		else
			putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
