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
int *_convert(char *num, int size)
{
	int i;
	int *n;

	i = 0;
	n = malloc(size * sizeof(int));
	while (*num != '\0')
	{
		*(n + i) = *num - '0';
		i++;
		num++;
	}
	return (n);
}

/**
 * _mul - computes the multiplication of two numbers
 * @num1 - pointer of the first number
 * @num2 - pointer to the second number
 * Return: the pointer to the result
 */
int *_mul(char *n1, char *n2)
{
	int *num1;
	int *num2;
	int remainder;
	int size1, size2;
	int i, j;
	
	size1 = _size(n1);
	size2 = _size(n2);
	num1 = _convert(n1, size1);
	num2 = _convert(n2, size2);
	if (size1 > size2)
	{
		for (i = 0; i < size1; i++)
			printf("%d", num1[i]);
		putchar('\n');
		for (j = 0; j < size2; j++)
			printf("%d", num2[j]);
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
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = argv[argc - 2];
	n2 = argv[argc - 1];
	if (!_isdigit(n1) || !_isdigit(n2))
	{
		printf("Error\n");
		exit(98);
	}
	
	putchar('\n');
	return (0);
}
