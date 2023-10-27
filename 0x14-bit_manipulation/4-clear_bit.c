#include "main.h"

/**
 * clear_bit - clear bit at a given index
 * @n: number to index
 * @index: index position to clear
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int li;
	unsigned int tmp;

	if (index > 64)
		return (-1);
	tmp = index;
	for (li = 1; tmp > 0; li *= 2, tmp--)
		;

	if ((*n >> index) & 1)
		*n -= li;

	return (1);
}
