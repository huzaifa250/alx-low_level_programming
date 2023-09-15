#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @len: number of times the character _ should be printed
 * Return: Always 0.
 */
void print_line(int len)
{
	if (len <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 1; i <= len; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
