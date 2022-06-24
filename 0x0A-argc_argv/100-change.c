#include <stdio.h>

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] == '-')
	{
		printf("0\n");
		return (1);
	}
	return (0);
}
