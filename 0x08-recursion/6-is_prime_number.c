#include "main.h"

int real_prime(int n, int count);

/**
 * is_prime_number - if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @count: iterator or counter
 *
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int count)
{
	if (count == 1)
	{
		return (1);
	}
	if (n % count == 0 && count > 0)
	{
		return (0);
	}
	else
	{
	return (real_prime(n, count - 1));
	}
}
