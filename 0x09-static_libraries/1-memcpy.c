#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: a pointer to the destination memory area where
 * the data will be copied
 * @src: a pointer to source memory area from which data copied
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}
	return (dest);
}
