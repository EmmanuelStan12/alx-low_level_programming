#include "main.h"
#include <stdio.h>

/**
 * _pow - computes the power of two ints
 * @a: base of the integer
 * @b: power of the integer
 * Return: the power of a ^ b
 */
int _pow(int a, int b)
{
	int result;

	result = 1;
	while (b != 0)
	{
		result = result * a;
		--b;
	}
	return (result);
}

/**
 * get_length - gets the length of the whole number
 * @j: current value
 * @s: string array
 * Return: the value computed
 */
int get_length(int j, char *s)
{
	int l;

	l = j;
	while (s[l] >= '0' && s[l] <= '9')
		l++;
	return (l);
}

/**
 * _atoi - a function that converts a string to number
 * @s: string to be converted
 * Return: the result that was gotten from the string
 */
int _atoi(char *s)
{
	int i = 0, num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+' || s[i] == '-')
		{
			int j = get_length(i + 1, s), k = 0, length;

			length = j - 1 - i;
			if (length > 0)
			{
				while (k < length)
				{
					num = num + ((s[i + 1 + k] - '0') * _pow(10, (length - k - 1)));
					k++;
				}
				if (s[i] == '-')
					num = -num;
				break;
			}
		}
		else if (s[i] >= 48 || s[i] <= 57)
		{
			int j = get_length(i, s), length = 0, k = 0;

			length = j - i;
			if (length > 0)
			{
				while (k < length)
				{
					num = num + ((s[i + k] - '0') * _pow(10, (length - k - 1)));
					k++;
				}
				break;
			}
		}
		i++;
	}
	return (num);
}
