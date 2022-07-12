#include "main.h"

/**
 * _strlen - checks the length of a string
 * @str: string to check
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
	while (*(s + len))
		++len;
	}
	return (len);
}
