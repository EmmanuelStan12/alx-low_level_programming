#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: filename
 * @text_content: text_content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, size, status;
	char *content;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	content = text_content;
	size = 0;
	while (*content != '\0')
	{
		size++;
		content++;
	}
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);
	status = write(file_d, text_content, size);
	if (status == -1)
		return (-1);
	close(file_d);
	return (1);
}
