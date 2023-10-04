#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	/*If either s1 or s2 is NULL, return NULL*/
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	/* Calculate the lengths of s1 and s2*/
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	/*Allocate memory for the concatenated(s3)*/
	char *s3 = malloc(len1 + len2 + 1);

	/* Check if memory allocation was successful*/
	if (s3 == NULL)
		return (NULL);
	/* Copy s1 into concatenated(s3)*/
	strcpy(s3, s1);
	/*Append s2 to s3*/
	strcat(s3, s2);

	return (s3);
}
