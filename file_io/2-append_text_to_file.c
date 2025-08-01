#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of files..
 *
 * @filename: file name
 * @text_content: text to add (NULL-terminated)
 *
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
