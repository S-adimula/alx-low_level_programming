#include "main.h"

/**
 * _islower - check lowercase characters
 * @c: integer 1 or 0
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
