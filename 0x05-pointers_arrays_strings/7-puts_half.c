#include "main.h"

/**
 * puts_half - prints half a string
 * @str: input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int half, a;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (a =  (half + 1); a < len; a++)
	{
		_putchar(str[a);
	}

	_putchar('\n');
}
