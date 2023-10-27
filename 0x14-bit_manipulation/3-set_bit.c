#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: The number to modify
 * @index: The index of the bit to set (0-based)
 * Return: Value of bit at index or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
		return (-1);

	return (!!(*n |= 1L << index));
}

