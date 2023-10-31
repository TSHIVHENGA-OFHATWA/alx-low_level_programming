#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The NULL-terminated string to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	size_t bytes_written, length;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	length = strlen(text_content);
	bytes_written = fwrite(text_content, 1, length, file);
	fclose(file);

	if (bytes_written != length)
		return (-1);

	return (1);
}
