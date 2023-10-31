#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_fd, bytes_written, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		length = strlen(text_content);

	file_fd = open(filename, O_WRONLY | O_APPEND);

	if (file_fd == -1)
		return (-1);

	bytes_written = write(file_fd, text_content, length);
	close(file_fd);

	if (bytes_written == -1 || bytes_written == -1)
		return (-1);

	return (1);
}
