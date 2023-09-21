#include "main.h"

/**
 * _strcmp -function to compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}

		s1++;
		s2++;
	}

	/*Check if one string has more characters left than the other*/
		else if (*s1 != '\0')
		{
			return (1); /*s1 is greater*/
		}
		else if (*s2 != '\0')
		{
			return (-1); /*s2 is greater*/
		}
		else
		{
			return (0); /*Both strings are equal*/
		}
}
