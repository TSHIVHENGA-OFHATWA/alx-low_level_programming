#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by newline
 *
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');

}
