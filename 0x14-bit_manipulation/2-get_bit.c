#include "main.h"

/**
 * get_bit - get the bit at a specific index
 * @n: number to evaluate
 * @index: th num of bit to get
 * Return: Value of bit at index, or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return (n >> index & 1);
}
