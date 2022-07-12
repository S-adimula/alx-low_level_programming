#include "main.h"

/**
 * swap_int - swaps value of a and b
 * @a: pointer 1
 * @b: pointer 2
 * return: success
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
