#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first pointer
 * @b: second pointer
 * Return: (0)
 *
 */

void swap_int(int *a, int *b)
{
	int e;
	int *c = &e;

	*c = *a;
	*a = *b;
	*b = *c;
}
