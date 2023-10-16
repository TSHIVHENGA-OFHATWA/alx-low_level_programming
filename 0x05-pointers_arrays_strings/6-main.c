#include <stdio.h>

void puts2(char *str);

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	char *str;

	str = "oHlebrotn!\0Holberton";
	puts2(str);
	return (0);
}
