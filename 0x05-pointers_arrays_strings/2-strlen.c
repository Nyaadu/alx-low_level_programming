#include "main.h"

/**
 * int _strlen - returns length of string
 * @s: string character
 * Return: (0)
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
