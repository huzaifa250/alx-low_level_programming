#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize the array c
 *
 * Return: pointer to the array initialized (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ic = malloc(size);

	if (size == 0 || ic == 0)
		return (0);

	while (size--)
		ic[size] = c;

	return (ic);
}
