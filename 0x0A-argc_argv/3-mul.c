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
	int mul;

	i = 1;
	mul = 1;
	if (argc - 1 == 0)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		mul = mul * atoi(*argv[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
