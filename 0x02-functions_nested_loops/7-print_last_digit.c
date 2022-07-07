#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: integer
 * Return: last digit
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 10)
	{
		c = c * -1;
	}
	_putchar('0' + c);
	return (c);
}
