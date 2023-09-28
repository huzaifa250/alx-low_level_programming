#include "main.h"
/**
 * wildcmp - compares two strings and returns 1
 * if the strings are equal,
 * otherwise return 0.
 * @s1: the normal string
 * @s2: the second string containing "*"
 *
 * Return: 1 if they are equal, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	else
		return (0);
}
