#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
