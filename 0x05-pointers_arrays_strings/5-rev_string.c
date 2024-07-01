#include "main.h"

/**
 * rev_string - prints string
 * @s: string input
 * Return: nothing
 *
 */

void rev_string(char *s)
{
	int l, i;
	char t;

	l = 0;

	while (s[l] != '\0')
	{
		l++
	}

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
