#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text from a file and prints it to stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters or bytes
 *           function should read and print.
 *
 * Return: number of bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
