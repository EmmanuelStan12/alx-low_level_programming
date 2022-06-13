#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first variable's address
 * @b: second variable's address
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
