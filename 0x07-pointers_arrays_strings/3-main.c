#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "ABCDEF12345";
    char *f = "ABCD";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
