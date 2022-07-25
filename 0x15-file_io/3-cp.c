#include "main.h"
#define SE STDERR_FILENO

/**
 * main - Entry point
 * @argc: no of arguments
 * @argv: arguments
 * Return: 1
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;
	int o_file, i_file, sz, wstatus;
	char buffer[1024];
	mode_t mode;

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	file_from = argv[argc - 2];
	i_file = open(file_from, O_RDONLY);
	if (i_file == -1)
		dprintf(SE, "Error: Can't read from file %s\n", file_from), exit(98);
	file_to = argv[argc - 1];
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	o_file = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (o_file == -1)
		dprintf(SE, "Error: Can't write to %s\n", file_to), exit(99);
	do {
		sz = read(i_file, buffer, sizeof(buffer));
		if (sz == -1)
			dprintf(SE, "Error: Can't read from file %s\n", file_from), exit(98);
		wstatus = write(o_file, buffer, sz);
		if (wstatus == -1)
			dprintf(SE, "Error: Can't write to %s\n", file_to), exit(99);
	} while (sz > 0);
	if (close(i_file) == -1)
		dprintf(SE, "Error: Can't close fd %d", i_file), exit(100);
	if (close(o_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", o_file), exit(100);
	return (0);
}
