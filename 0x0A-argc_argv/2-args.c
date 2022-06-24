#include "stdio.h"

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
