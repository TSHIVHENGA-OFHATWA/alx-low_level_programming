#include <stdio.h>

/**
 * main -satrting function
 * Return: Always 0 for success
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
				if (a != 99 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	return (0);
}
