#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *Description: C program if else
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n,lst_dg;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dg = n % 10;

	if (lst_dg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dg);

	}	
	else if (lst_dg < 6 && lst_dg != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dg);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dg);
	}
	return (0);


}

	
