#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lt_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt_digit = n % 10;
	if (lt_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lt_digit);
	else if (lt_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lt_digit);
	else if (lt_digit < 6 && lt_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt_digit);
	return (0);
}
