#include <stdio.h>
#include "main.h"

/**
 * main - Make the alphabet
 * print_alphabet : prints alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
