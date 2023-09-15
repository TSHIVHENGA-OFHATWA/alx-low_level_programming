#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int line, numbers;

	for (line = 0; line < 10; line++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + 48);
			}
			_putchar((numbers % 10) + 48);
		}
		_putchar('\n');
	}
}
