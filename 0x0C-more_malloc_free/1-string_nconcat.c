#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to space in memory contains concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	/* Count the letters in the first and second string*/
	unsigned int i = 0, j = 0, len_s1 = 0, len_s2 = 0;

	while (s1 && s1[len_s1])
		len_s1++;
	while (s2 && s2[len_s2])
		len_s2++;
	/*Decide how much memory to allocate for s2*/
	if (n < len_s2)
		result = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	/* Check if memory allocation worked*/
	if (!result)
		return (NULL);
	/*Copy letters from the s1 to s2*/
	while (i < len_s1)
		result[i] = s1[i];
	i++;

	/*Add letters from s2, up to the limit specified by n*/
	while (n < len_s2 && i < (len_s1 + n))
		result[i++] = s2[j++];
	/*If letters to add >=  len_s2, add all its letters*/
	while (n >= len_s2 && i < (len_s1 + len_s2))
		result[i++] = s2[j++];

	/*Finish new word with a null character to make it a complete string*/
	result[i] = '\0';

	/*Return the concat strings*/
	return (result);
}
