#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int st, ed, tmp;

	st = 0;
	ed = n - 1;
	for (; st < n / 2; st++)
	{
		tmp = a[st];
		a[st] = a[ed];
		a[ed--] = tmp;
	}
}
