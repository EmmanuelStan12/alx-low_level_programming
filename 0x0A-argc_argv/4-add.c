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
	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	while (i < argc)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
