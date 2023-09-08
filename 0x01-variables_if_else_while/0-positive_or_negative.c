#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *Description: C program for checking value
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Random number: %d", n);
	}
	else if (n == 0)
	{
		printf("Random number: %d", n);
	}
	else if (n < 0)
	{
		printf("Random number: %d", n);
	}
	return (0);
}
