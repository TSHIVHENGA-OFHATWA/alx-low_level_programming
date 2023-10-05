#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: parameter passed as integer ac.
 * @av: argv
 * Return: argument passed in new line.
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int i;
	int j = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		length += strlen(av[i]) + 1;

	result = malloc(length * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(result + j, av[i]);
		j += strlen(av[i]);
		result[j] = '\n';
		j++;

	}
	if (length == '\0')
		result[j] = '\0';
	return (result);
}

