#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: the address to the array to be evaluated
 */
void print_chessboard(char (*a)[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		int j;

		j = 0;
		while (j < 8)
		{
			_putchar(*(a[i] + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
