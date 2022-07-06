#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - gets the operation to be run
 * @s: the operator
 * Return: a function pointer to the function to be run
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op != NULL && strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
