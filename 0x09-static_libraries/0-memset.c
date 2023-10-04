#include "main.h"

/**
 * *_memset - Function to fills memory with a constant byte
 * @s: pointer to the memory area that needs to be filled
 * @b: char value to copy in memory
 * @n: number of times to the char b will be copied
 * Return: pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		s[it] = b;
	}
	return (s);
}
