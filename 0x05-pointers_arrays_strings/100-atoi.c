#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input
 * Return: integer
 *
 */

int _atoi(char *s)
{
	unsigned int c = 0, z = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + c) != '\0')
	{
		if (z > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pn *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (z > 0)
				m *= 10;
			z++;
		}
		c++;
	}

	for  (i = c - z; i < c; i++)
	{
		oi = oi + (((*(s + 1) - 48) * m));
		m /= 10;
	}

	return (oi * pn);
}
