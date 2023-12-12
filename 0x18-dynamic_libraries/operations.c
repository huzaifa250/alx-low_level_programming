#include <stdio.h>

/**
* add - adds two integers
* @a: first integer
* @b: second integer
* Return: the sum of two integres
*/

int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts two integers
* @a: first integer
* @b: second integer
* Return: subtract of two integers
*/

int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two integers
* @a: first integer
* @b: second integer
* Return: the multiplication of inters
*/

int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divideds two integers
* @a: first integer
* @b: second integer
* Return: the divided integer
*/

int div(int a, int b)
{
	if (b == 0)
		printf("You can't divide by zero !");

		return (a / b);
}

/**
 * @mod - finds the modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: the modulo of a given two integers
*/

int mod(int a, int b)
{
	return (a % b);
}
