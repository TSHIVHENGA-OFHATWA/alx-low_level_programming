#include "main.h"

/**
* main - prints the number of arguments
* @argc: The number of command line arguments.
* @argv: An array containing the program command line arguments.
* Return: Always 0 for success.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
