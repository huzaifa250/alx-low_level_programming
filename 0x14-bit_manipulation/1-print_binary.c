#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;

	while (bit)
	{
		if (n > 1)
			print_binary(n >> 1);

		_putchar((n & 1) + '0');
	}

}
