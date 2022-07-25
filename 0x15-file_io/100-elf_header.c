#include "main.h"

/**
 * main - Entry point
 * @argc: the no of arguments
 * @argv: the arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	char *filename;

	filename = argv[argc - 1];
	printf("filename: %s\n", filename);
	return (0);
}
