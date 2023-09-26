#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a pointer to the 2d array of int
 * @size : array size (square)
 */

void print_diagsums(int *a, int size)
{
	int count;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (count = 0; count < size; count++)
	{
		sum1 += a[(size * count) + count];
		sum2 += a[(size * (count + 1)) - (count + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
