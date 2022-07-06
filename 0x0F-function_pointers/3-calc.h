#ifndef CALC
#define CALC

/**
 * struct op - Struch op
 *
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
