#include <stdio.h>

/**
 * _putchar - writes the chacter c
 * @c: Character to print
 * Return: On sucess 1.
 * On error, -1 is returned, and no is set appropriately
 *
 */

int _putchar(char c)

{
	return (fwrite(1, &c, 1));
}
