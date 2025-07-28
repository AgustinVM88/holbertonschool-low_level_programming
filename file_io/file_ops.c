#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * check_args - Checks if the number of arguments is correct.
 *
 * @argc: Argument count
 *
 * Exits with code 97 if the number of arguments is not 3.
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - Opens a file for reading.
 *
 * @filename: Name of the file to open
 *
 * Return: File descriptor
 * Exits with code 98 if the file cannot be opened.
 */
int open_file_from(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - Opens a file for writing.
 *
 * @filename: Name of the file to open
 *
 * Return: File descriptor
 * Exits with code 99 if the file cannot be opened or created.
 */
int open_file_to(char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - Reads from one file and writes to another.
 *
 * @fd_from: File descriptor to read from
 * @fd_to: File descriptor to write to
 * @file_from: Name of the source file (for error messages)
 * @file_to: Name of the destination file (for error messages)
 *
 * Exits with code 98 if reading fails,
 * or with 99 if writing fails.
 */
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buffer[1024];
	ssize_t r, w;

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * close_file - Closes a file descriptor.
 *
 * @fd: File descriptor to close
 * @exit_code: Exit code to use if closing fails
 *
 * Exits with the provided exit code if closing fails.
 */
void close_file(int fd, int exit_code)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(exit_code);
	}
}


