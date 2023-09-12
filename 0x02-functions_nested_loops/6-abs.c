#include "main.h"
/**
 * _abs - computer the absolute value of an integer
 * @num: input number as an integer
 * Return: absolute value
 */
int _abs(int num)
{
	if (num <= 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
	_putchar('\n');
}
