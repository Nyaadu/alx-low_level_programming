#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: input
 * Return: nothing
 *
 */

void print_rev(char *s)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}

	for (p--; p >= 0; p--)
	_putchar(s[p]);
	_putchar('\n');
}
