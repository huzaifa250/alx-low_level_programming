#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] != '\0'; j++)
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[j];
				break;
			}
		}
	}
	return (s);
}
