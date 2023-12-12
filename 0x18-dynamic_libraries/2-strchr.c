#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: Apointer to string to search
 * @c: char want to  find in string
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int it;

		while (1)
		{
			it = *s++;
			if (it == c)
			{
				return (s - 1);
			}
			if (it == 0)
			{
				return (NULL);
			}
		}
}
