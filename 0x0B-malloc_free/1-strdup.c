#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *cp;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	cp = malloc(size * sizeof(*str) + 1);

	if (cp == 0)
		return (NULL);

	for (; i < size; i++)
		cp[i] = str[i];

	return (cp);
}
