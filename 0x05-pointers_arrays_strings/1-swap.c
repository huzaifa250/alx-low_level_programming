#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: paramter 1 to swap
 * @b: paramter 2  to swap
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
