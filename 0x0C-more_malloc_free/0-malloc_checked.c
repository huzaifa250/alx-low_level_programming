#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	void *ptr

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
