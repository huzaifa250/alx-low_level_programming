#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first paramter
 * @n2: second paramter
 * @r : pointer to buffer
 * @size_r : buffer size
 * Return: pointer call function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, i = 0, j = 0, d = 0, v1 = 0, v2 = 0, tmp_tot = 0;

	while (*(n1 + i) != '\0')
	{
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		j++;
	}
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	{
		return (0);
	}
	while (j >= 0 || i >= 0 || ov == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		tmp_tot = v1 + v2 + ov;
		if (tmp_tot >= 10)
			ov = 1;
		else
			ov = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (tmp_tot % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	return (r);
}

