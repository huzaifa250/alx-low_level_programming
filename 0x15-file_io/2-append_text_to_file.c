#include "main.h"

/**
 * append_text_to_file - Appends text to  a file.
 * @filename: name of the file to create.
 * @text_content: The text to write.
 *
 * Return: 1 on success 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, length);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
