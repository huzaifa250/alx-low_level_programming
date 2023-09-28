#include "main.h"

int check_p(char *s, int count, int leng);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_p(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length for
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_p - checks the characters recursively for palindrome
 * @s: string to check
 * @count: counter (iterator)
 * @leng: string length
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_p(char *s, int count, int leng)
{
	if (*(s + count) != *(s + leng - 1))
		return (0);
	if (count >= leng)
		return (1);
	return (check_p(s, count + 1, leng - 1));
}
