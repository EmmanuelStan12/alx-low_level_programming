#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 1 (Error)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	int size = sizeof(quote);

	for (i = 0; i < size; i++)
		putchar(quote[i]);
	return (1);
}
