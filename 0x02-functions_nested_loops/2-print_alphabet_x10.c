#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char r;
	int a = 0;

	while (a < 10)
	{
		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
		a++
	}
}
