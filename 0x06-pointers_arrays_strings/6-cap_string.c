#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int j, k;

	char sp[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};

	for (j = 0; s[j] != '\0'; j++)
	{
		if (j == 0 && s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;

		for (k = 0; k < 13; k++)
		{
			if (s[j] == sp[k])
			{
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				{
					s[j + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
