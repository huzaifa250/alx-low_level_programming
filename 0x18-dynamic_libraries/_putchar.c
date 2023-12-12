#include "main.h"

/**
*main - Entry Point
*Description: C program write the char c using _putchar
*Return: Always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
