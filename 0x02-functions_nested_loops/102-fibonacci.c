#include "main.h"

/**
 * main- Entry function.
 * Return: 0 for success.
 */

int main(void)
{
	int count = 50, num_1 = 0, num_2 = 1, next_num, loop;

	for (loop = 0; loop < count; loop++)
	{
		if (loop <= 1)
			next_num = loop;
		else
		{
			next_num = num_1 + num_2;
			num_1 = num_2;
			num_2 = next_num;
		}
		printf("%d, ", next_num);
	}
	return (0);
}

