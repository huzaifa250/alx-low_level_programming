#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string,flow by new line to stdout,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
