#include <stdio.h>

void print_attr(void)__attribute__((constructor));
/**
 * print_attr - print before main function
 * Return: Always 0 for successful
 */
void print_attr(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
