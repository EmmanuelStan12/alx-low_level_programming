#include "main.h"

/**
 * _isalpha - returns 1 if the char c is an alphabet
 * @c: the character to be tested
 * Return: 0 if the character is not an alphabet and 1 if it is
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
