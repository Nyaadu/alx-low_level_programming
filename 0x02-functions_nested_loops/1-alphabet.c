#include <stdio.h>
#include <main.h>

/**
 * print_alphabet - Make alphabet
 * Return: void
 *
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
