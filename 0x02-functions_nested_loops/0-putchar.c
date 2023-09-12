#include <stdio.h>
#include <unistd.h>

/**
*main - Entry Point
*Description: C program print using _putchar
*
*Return: Always 0 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
