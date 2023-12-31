#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The compelte number .
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int lst_dig = n % 10;

	if (lst_dig < 0)
	{
		lst_dig *= -1;
	}

	_putchar(lst_dig + '0');

	return (lst_dig);
}
