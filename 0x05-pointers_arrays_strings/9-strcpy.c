#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -
 *
 * @dest: pointer 1
 * @src: pointer 2
 * Return: character(dest)
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
