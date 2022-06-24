#include "stdio.h"

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (argv[count] != NULL)
		count++;
	printf("%d\n", argc - argc + count - 1);
	return (0);
}
