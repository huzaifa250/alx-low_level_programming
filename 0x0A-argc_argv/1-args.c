#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments which is passed to
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
