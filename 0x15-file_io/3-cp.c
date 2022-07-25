#include "main.h"

/**
 * file_exists - check if a file exists and can be read
 * @file: file to be evaluated
 * Return: 1 if true or 0 if false
 */
int file_exists(char *file)
{
	if (!access(file, F_OK) && !access(file, R_OK))
		return (1);
	return (0);
}

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int o_file, i_file, sz;
	char buffer[1024];
	mode_t mode;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[argc - 2];
	i_file = open(file_from, O_RDONLY);
	if (!file_exists(file_from) || i_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file_to = argv[argc - 1];
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	o_file = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (o_file == -1 || access(file_to, W_OK))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((sz = read(i_file, buffer, sizeof(buffer))) > 0)
	{
		if (write(o_file, buffer, sz) != sz)
		{
			sz = -1;
			break;
		}
	}
	if (close(i_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", i_file);
		exit(100);
	}
	if (close(o_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o_file);
		exit(100);
	}
	return (0);
}
