#include "main.h"


int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: num to calculate the square root for
 *
 * Return: the resulting square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - recurses to find the square
 * root of a number
 * @n: number to calculate the sqaure root for
 * @count: iterator or counter
 *
 * Return: the square root
 */
int find_sqrt(int n, int count)
{
	if (count * count > n)
	{
		return (-1);
	}
	if (count * count == n)
	{
		return (count);
	}
	else
	{
		return (find_sqrt(n, count + 1));
	}
}
