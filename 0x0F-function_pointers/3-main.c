#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 or any other value if error occurs
 */
int main(int argc, char **argv)
{
	char *operator;
	int (*fn)(int, int);
	int num1, num2, result, cmp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	fn = get_op_func(operator);
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	cmp = (strcmp(operator, "/") == 0) || (strcmp(operator, "%") == 0);
	if (cmp == 1 && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = fn(num1, num2);
	printf("%d\n", result);
	return (0);
}
