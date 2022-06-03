#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int character;

	character = 'a';
	do
	{
		putchar(character);
		character++;
	}
	while (character != 'z' + 1);
	putchar('\n');
	return (0);
}
