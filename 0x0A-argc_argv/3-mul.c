#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * main-print sum of two nums
 * @args: number of commandline arguments
 * @argv: pointer to array of command line args
 * Return: 0(success) , other fail
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
