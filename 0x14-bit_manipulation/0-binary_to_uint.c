#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number string to unsigned int
 * @b: char string(binary number as string)
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nm = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		nm = nm * 2 + (*b++ - '0');
	}
	return (nm);
}
