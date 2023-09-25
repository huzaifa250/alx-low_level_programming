#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: a pointer to string to search
 * @accept: pointer to string containing the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int it, it2;

	for (it = 0; *s != '\0'; it++)
	{
		for (it2 = 0; accept[it2] != '\0'; it2++)
		{
			if (*s == accept[it2])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
