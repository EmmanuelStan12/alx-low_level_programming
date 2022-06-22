#include "main.h"

/**
 * size - computes the size of a string
 * @s: string to be evaluated
 * Return: the size of the string
 */
int size(char *s)
{
	if (*s == '\0')
		return (0);
	return (size(s + 1) + 1);
}

/**
 * eval - evaluates a given string
 * @s: string to be evaluated
 * @i: current foward index
 * @j: current backward index
 * Return: 1 or 0
 */
int eval(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (*(s + i) == *(s + j))
		return eval(s, i + 1, j - 1);
	return (0);
}

/**
 * is_palidrome - evaluates if a string is a palindrome
 * @s: string to be evaluated
 * Return: 1, if the string is a palindrome and 0, if otherwise
 */
int is_palindrome(char *s)
{
	int i;
	int j;

	i = 0;
	j = size(s) - 1;
	return (eval(s, i, j));
}
