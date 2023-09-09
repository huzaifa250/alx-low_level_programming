#include <unistd.h>

/**
 *main - Entery point
 *Description: print qoute using write function
 *
 * Return: 1 (unsuccess)
*/

int main(void)
{
	char ch[] = "'and that piece of art is useful\' - Dora Korpar, 2015-10-19\n";

	write(1, ch, 59);
	return (1);
}
