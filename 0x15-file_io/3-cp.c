#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file from.
 * @file_to: file to.
 * @argv: arguments vector.
 * Return: void.
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: Always 0(success).
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, err_close;
	ssize_t nm_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_from, f_to, argv);

	nm_chars = 1024;
	while (nm_chars == 1024)
	{
		nm_chars = read(f_from, buffer, 1024);
		if (nm_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(f_to, buffer, nm_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(f_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}

	err_close = close(f_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (0);
}

