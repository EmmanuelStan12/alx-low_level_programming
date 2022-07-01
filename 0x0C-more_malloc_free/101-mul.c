#include <stdio.h>
#include <stdlib.h>

/**
 * _pow - computes the power of number
 * @base: base of the number
 * @pow: power of the base
 * Return: the power
 */
int _pow(int base, int pow)
{
	int i, result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result = result * base;
		i++;
	}
	return (result);
}

/**
 * _size - converts a string to an int
 * @num: string to be evaluated
 * Return: the length of the string
 */
int _size(char *num)
{
	int i;

	i = 0;
	while (num[i] != '\0')
		i++;
	return (i);
}

/**
 * _isdigit - converts a string to an int
 * @num: string to be evaluated
 * Return: whether it's a digit or not
 */
int _isdigit(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < 48 || num[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * _convert - converts a string to an int
 * @num: string to be evaluated
 * @size: length of the string
 * Return: the result of the conversion
 */
int _convert(char *num, int size)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (*num != '\0')
	{
		result = result + ((*num - '0') * _pow(10, size - 1 - i));
		i++;
		num++;
	}
	return (result);
}

/**
 * main - Entry point
 * @argc: count of arguments passed
 * @argv: array of arguments
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	char *n1;
	char *n2;
	int size1, size2;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = argv[argc - 2];
	n2 = argv[argc - 1];
	size1 = _size(n1);
	size2 = _size(n2);
	if (!_isdigit(n1) || !_isdigit(n2))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = _convert(n1, size1);
	num2 = _convert(n2, size2);
	printf("%d\n", num1 * num2);
	return (0);
}
