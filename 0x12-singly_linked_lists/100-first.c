#include <stdio.h>
#include "lists.h"

void construct_f(void) __attribute__ ((constructor));

/**
 * construct_f - prints a sentence before the main
 * function is executed
 */

void construct_f(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
