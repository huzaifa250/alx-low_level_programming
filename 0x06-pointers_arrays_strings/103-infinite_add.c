#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: first paramter
 * @n2: second paramter
 * @r : result
 * @size_r : result size or lenght
 * Return: sum of two numbers
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int v1 = 0, v2 = 0, o, b, d1, d2, add = 0;

	while (*(n1 + v1) != '\0')
		v1++;
	while (*(n2 + v2) != '\0')
		v2++;
	if (v1 >= v2)
		b = v1;
	else
		b = v2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	v1--, v2--, size_r--;
	d1 = *(n1 + v1) - 48, d2 = *(n2 + v2) - 48;
	while (b >= 0)
	{
		o = d1 + d2 + add;
		if (o >= 10)
			add = o / 10;
		else
			add = 0;
		if (o > 0)
		*(r + b) = (o % 10) + 48;
		else
			*(r + b) = '0';
		if (v1 > 0)
			v1--, d1 = *(n1 + v1) - 48;
		else
			d1 = 0;
		if (v2 > 0)
			v2--, d2 = *(n2 + v2) - 48;
		else
			d2 = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
