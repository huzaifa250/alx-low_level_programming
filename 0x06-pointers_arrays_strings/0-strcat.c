#include "main.h"
#include <string.h>

/**
 * _strcat - function concatenates srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
	{
		src[i + j] = dest[i];
	}
	src[i + j] = '\0';
}
