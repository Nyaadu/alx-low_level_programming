#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
 */
int main(void)
{
    int i;
    long j = 1, k = 2;
    long next;

    printf("%ld, %ld", j, k);  // Print the first two numbers

    for (i = 2; i < 50; ++i)
    {
        next = j + k;
        printf(", %ld", next);
        j = k;
        k = next;
    }

    printf("\n");
    return (0);
}
