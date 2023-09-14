#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4
 */
void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		_putchar("%d", i);
		}
	}
	_putchar("\n");
}
