#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: max int
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int len, count;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (count = 0; count < len; count++)
		ptr[count] = min++;
	return (ptr);
}
