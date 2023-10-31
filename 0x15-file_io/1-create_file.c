#include "main.h"
#include <fcntl.h>

/**
 * create_file - Creates a file with specified permissions
 * and writes content to it
 * @filename: The name of the file to create or truncate
 * @text_content: The text to write to the file (NULL for an empty file).
 * Return: 1 for success, -1 for failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_fd, text_content, strlen(text_content));
		if (bytes_written != (ssize_t)strlen(text_content))
		{
			close(file_fd);
			return (-1);
		}
	}
	close(file_fd);
	return (1);
}
