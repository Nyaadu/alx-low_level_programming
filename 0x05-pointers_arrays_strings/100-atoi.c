#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: input
 * Return: integer
 *
 */

int _atoi(char *s)
{
	unsigned int c = 0, z = 0, pn = 1, oi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			pn *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			oi = 1;
			z = (z * 10) + (s[c] - '0');
			c++;
		}
		if (oi == 1)
		{
			break;
		}
		c++;
	}
	z *= pn;
	return (z);
}
