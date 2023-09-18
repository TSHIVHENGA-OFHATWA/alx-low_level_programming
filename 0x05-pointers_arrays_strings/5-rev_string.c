#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -  function that prints a string, in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	int a, length;
	char string1;

	length = strlen(s);

	for (a = 0; a < length / 2; a++)
	{
		string1 = s[a];
		s[a] = s[length - a - 1];
		s[length - a - 1] = string1;
	}
	putchar(s[a]);
	putchar('\n');
}
