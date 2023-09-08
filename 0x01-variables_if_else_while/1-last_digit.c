#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *Description: C program if else
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dg = n % 10;

	if (dg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, dg);
	}
	else if (dg < 6 && dg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dg);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, dg);
	}
	return (0);
}
