#include "main.h"

/**
 * _strcat - function concatenates srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int s, s2;

	s = 0;
	/* find the size of dest*/
	while (dest[s] != '\0')
		s++;

	/*loop through src array value without null*/
	for (s2 = 0; src[s2] != '\0'; s2++)
		/*append src[s2] to dest[s]*/
		dest[s++] = src[s2];

	return (dest);
}
