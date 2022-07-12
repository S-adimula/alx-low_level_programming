#include "main.h"

/**
 * _puts - prints a string and new line
 * @str: string to print
 * return: success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
