#include "main.h"
#include <stdio.h>

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int it, it2;

	for (it = 0; s[it] != '\0'; it++)
	{
		for (it2 = 0; accept[it2] != s[it]; it2++)
		{
			if (accept[it2] == '\0')
				return (it);
		}
		
	}
	return (it);
}
