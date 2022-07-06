#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int arg, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
