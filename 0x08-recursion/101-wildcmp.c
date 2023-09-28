#include "main.h"

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0.
 * @s1: the normal string
 * @s2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s2 == '*')
		{
			s2++;
		}
		while (*s1)
		{
			int result = wildcmp(s1, s2);

			if (result == 1)
				return (1);
			s1++;
		}
		return (0);
	}
	else if (*s1 == *s2 || *s2 == '?')
	{
		s1++;
		s2++;
	}
	else
	{
		return (0);
	}
	return (!*s1);
}
