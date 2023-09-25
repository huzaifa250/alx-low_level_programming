#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: Apointer to string to search
 * @c: char want to  find in string
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	/*Start from the beginning of the string*/
	while (*s != '\0')
	{
		/*Check if the current character matches 'c'*/
		if (*s == c)
		{
			/*Return a pointer to the matching character*/
			return (s);
		}
		/* Move to the next character in the string*/
		s++;
	}
	/*If 'c' is not found, return NULL*/
	return (NULL);
}
