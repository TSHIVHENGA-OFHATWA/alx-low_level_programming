#include "main.h"

/**
 * rev_string -  function that prints a string, in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	char string1 = s[0];

	int length, a;

	length = 0;
	a = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (a < length)
	{
		length--;
		string1 = s[a];
		s[a] = s[length];
		s[length] = string1;
		a++;
	}
}
