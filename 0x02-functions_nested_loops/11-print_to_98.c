#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers
 * @n: number to print from
 * Return: Always 0.
 *
 */

void print_to_98(int n)

{
	if (n < 99)
	{
		for (; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n > 99; n--)
			if (n == 98)
                        {
                                printf("%d", n);
                                printf("\n");
                                break;
			}
			else
			{
				printf("%d, ", n);
			}
	}
}
