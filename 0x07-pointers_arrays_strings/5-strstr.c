#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: a pointer to string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int it;
	int it2;

	for (it = 0; haystack[it] != '\0'; it++)
	{ /*Start checking for a match from this position in the haystack*/
		for (it2 = 0; needle[it2] != '\0'; it2++)
		{
			if (haystack[it + it2] != needle[it2])
				break;
		}
		if (!needle[it2])
			return (&haystack[it]);
	}
	return (NULL);
}
