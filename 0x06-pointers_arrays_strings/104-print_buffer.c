#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i = i + 10)
	{
		int j, k;

		j = i;
		k = i;
		printf("%08x ", i);
		while (j < i + 10)
		{
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
			if (j % 2 != 0)
				printf(" ");
			j++;
		}
		while (k < i + 10)
		{
			if (k >= size)
				break;
			else if (b[k] >= 31 && b[k] <= 126)
				printf("%c", b[k]);
			else
				printf(".");
			k++;
		}
		putchar('\n');
	}
	putchar('\n');
}
