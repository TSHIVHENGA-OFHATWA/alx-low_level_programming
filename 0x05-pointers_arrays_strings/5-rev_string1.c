#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -  function that prints a string, in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	int a, length, b;

	char string1 = s[0];

	length = strlen(s);

	for (a = 0,b = length -1; a < b ; a++, b--)
	{
		string1 = s[a];
		s[a] = s[b];
		s[b] = string1;
	}
	putchar(s[a]);
	putchar('\n');
}
