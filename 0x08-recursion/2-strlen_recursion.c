#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string we want to calculate length
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (leng + _strlen_recursion(s + 1));
		return (leng);
	}
}
