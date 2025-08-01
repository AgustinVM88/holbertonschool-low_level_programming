#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: file name to create
 * @text_content: text to write (NULL-terminated)
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
