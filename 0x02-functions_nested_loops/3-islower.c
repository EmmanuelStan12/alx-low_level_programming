#include "main.h"

/**
 * _islower - Entry point
 * @c: the character to be printed
 * Return: 0 if c is in uppercase and 1 if it is in lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
