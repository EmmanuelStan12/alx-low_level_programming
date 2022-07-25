#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 * Return: the status of the operation
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, size, status;
	char *content;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		size = 0;
		content = text_content;
		while (*content != '\0')
		{
			size++;
			content++;
		}
		status = write(file_d, text_content, size);
		if (status == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
