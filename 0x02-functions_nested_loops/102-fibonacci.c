#include <stdio.h>

/**
 * main - prints fabonacci nums
 * Return: Nothing
 *
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
		printif("%ld", j);
		else if (i == j)
		printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
