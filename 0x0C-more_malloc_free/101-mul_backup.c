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
 * value_size - computes the size of a single multiplication
 * @base: multiplier
 * @num: number to be multiplied
 * @size: length of the number to be multiplied
 * Return: the size of the multiplication
 */
int value_size(int base, int* num, int size)
{
	int i, current_size, remainder;

	current_size = 0;
	remainder = 0;
	for (i = 0; i < size; i++)
	{
		int value = (base * num[size - 1 - j]) + remainder;
		remainder = value / 10;
		current_size++;
	}	
	if (remainder != 0)
		current_size++;
	return (value_size);
}

/**
 * _result_size - computes the size of the multiplication of two numbers
 * @num1: pointer of the first number
 * @num2: pointer to the second number
 * @size1: size of the first number
 * @size2: size of the second number
 * Return: the pointer to the result
 */
int _result_size(int *num1, int *num2, int size1, int size2)
{
	int remainder;
	int max_size, left_shift;
	int i, j;
	
	left_shift = 0;
	if (size1 >= size2)
	{
		for (i = 0; i < size1; i++)
		{
			int current_size = 0;

			for (j = 0; j < size2; j++)
			{
				int value = (num1[size1 - i - 1] * num2[size2 - 1 - j]) + remainder;
				remainder = value / 10;
				current_size++;
			}
			if (remainder != 0)
				current_size++;
			max_size = current_size + left_shift;
			left_shift++;
		}
	}
	printf("max_size: %d, left_shift: %d\n", max_size, left_shift);
	return (max_size);
}

/**
 * _mul - computes the multiplication of two numbers
 * @num1 - pointer of the first number
 * @num2 - pointer to the second number
 * @size: size of the result
 * @size1: size of the first num
 * @size2: size of the second num
 * @n1: the first number
 * @n2: the second number
 * Return: the pointer to the result
 */
int *_mul(int size, int size1, int size2, int *n1, int *n2)
{
	int *result;
	int remainder;
	int i, j, k;

	result = malloc(size * sizeof(int));
	if (size1 <= size2)
	{
		int *grid[size1];
		for (i = 0; i < size1; i++)
		{
			int size_i = value_size(n1[i], n2, size2);
			printf("size_i: %d\n", size_i);
			grid[i] = malloc(size_i * sizeof(int));
			for (j = 0; j < size2; j++)
			{
				int value = (num1[size1 - i - 1] * num2[size2 - 1 - j]) + remainder;
				remainder = value / 10;
				grid[i][size_i - 1 - j] = value % 10;
			}
			if (remainder != 0)
				grid[i][size_i - 1 - j] = remainder;
		}
		for (k = 0; k < size1; k++)
		{
			int res, l;

			res = 0;
			for (l = 0; l < k + 1; l++)
			{
				int m = left_shift - l;
				res = res + grid[i][size1 - l];
			}
		}
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
	int i;
	char *n1;
	char *n2;
	int size1, size2;
	int *num1, num2;

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

	i = _mul(n1, n2);
	for (i = 0; i < 
	return (0);
}
