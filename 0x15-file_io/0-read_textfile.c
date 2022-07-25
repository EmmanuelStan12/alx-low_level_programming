#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: the name of the file
 * @letters: the number to be copied
 * Return: the size of the buffer written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buf;
	ssize_t rcount, wcount;

	file_d = open(filename, O_RDWR);

	if (file_d == -1)
		return (0);
	buf = malloc(letters * sizeof(*buf));
	if (buf == NULL)
		return (0);
	rcount = read(file_d, buf, letters);
	if (rcount == -1)
	{
		free(buf);
		return (0);
	}
	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || wcount != rcount)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(file_d);
	return (wcount);
}
