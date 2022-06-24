#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int value, change;

	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
		return (1);
	}
	if (value % 25 >= 0)
	{
		change = change + (value / 25);
		value = value % 25;
	}
	if (value % 10 >= 0)
	{
		change = change + (value / 10);
		value = value % 10;
	}
	if (value % 5 >= 0)
	{
		change = change + (value / 5);
		value = value % 5;
	}
	if (value % 2 >= 0)
	{
		change = change + (value / 2);
		value = value % 2;
	}
	if (value % 1 >= 0)
	{
		change = change + value;
	}
	printf("%d\n", change);
	return (0);
}
