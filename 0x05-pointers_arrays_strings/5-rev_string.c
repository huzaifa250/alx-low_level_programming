#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string word.
 * Return: no return value.
 */

void rev_string(char *s)
{
	int l, i;
	char tmp;
	/*find string len without null char*/
	for (l = 0; s[l] != '\0'; ++l)
	;

	/*swap string by looping half the string*/
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i]; /* array starts from 0*/
		s[l - 1 - i] = tmp;
	}
}
