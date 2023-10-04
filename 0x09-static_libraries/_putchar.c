#include "main.h"
#include <unistd.h>

/**
* _putchar - write character c to stdout
* @c: The character to print
*
*Return: Always 0 (success), -1 (fail)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

