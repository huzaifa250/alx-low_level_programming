#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @nm: number of times the character \ should be printed
 */
void print_diagonal(int nm)
{
	if (nm <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < nm; i++)
		{
			for (j = 0; j < nm; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
