#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 * Return: Always 0 on success
 *
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
