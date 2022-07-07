#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - from n to 98
 * @n: integer
 * Return: this function prints from n to 98
 */
void print_to_98(int)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
