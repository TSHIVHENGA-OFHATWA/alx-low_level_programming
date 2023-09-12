#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase
 * followed by newline
 *
 */
void print_alphabet_x10(void)
{
	int letter;
	int line;

	for (line = 1; line <= 10; line++)
	{


		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
