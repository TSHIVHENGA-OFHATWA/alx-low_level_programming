#include "main.h"

void print_error(int exit_code, const char *format, ...);

/**
 * print_error - A function to print error messages to the standard error.
 * @exit_code: The exit code to use when terminating the program.
 * @format: The format string for the error message.
 */
void print_error(int exit_code, const char *format, ...)
{
	va_list lists;

	va_start(lists, format);
	dprintf(2, format, lists);
	va_end(lists);
	exit(exit_code);
}
/**
 * main - copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments as strings.
 * Return: 0 for success,
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t n;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n");

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
		print_error(99, "Error: Can't write to file %s\n", file_to);

	while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, n) == -1)
			print_error(99, "Error: Can't write to file %s\n", file_to);
		else if (n == -1)
			print_error(99, "Error: Can't write to file %s\n", file_to);

		else if (close(fd_from) == -1)
			print_error(100, "Error: Can't close fd %d\n", fd_from);

		else if (close(fd_to) == -1)
			print_error(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);

}
