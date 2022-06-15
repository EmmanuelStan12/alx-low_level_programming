#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: reference string to be compared
 * @s2: source string
 * Return: a value signifying the result of the operation.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_length;
	int s2_length;

	i = 0;
	s1_length = 0;
	s2_length = 0;

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1_length > s2_length)
		return (15);
	else
		return (-15);
}
