#include "main.h"

/**
 * print_diagonal -> printing line
 * @n: integers param
 * Return: success
 */

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
}
