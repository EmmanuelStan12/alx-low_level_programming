#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	while (i < argc)
	{
		if (*argv[i] > '9' || *argv[i] < '0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
