#include "main.h" 
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * Return: Always 0 for success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzbuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
