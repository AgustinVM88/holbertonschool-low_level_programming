#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_error - Prints an error message and exits
 *
 * @code: Exit code
 * @msg: Error message
 * @arg: Argument to show in the message
 */
void print_error(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	exit(code);
}

/**
 * close_file - Closes a file descriptor
 *
 * @fd: File descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies content from one file to another
 *
 * @file_from: Source file
 * @file_to: Destination file
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error(99, "Error: Can't write to", file_to);
	}

	while (1)
	{
		r = read(fd_from, buf, BUF_SIZE);
		if (r == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error(98, "Error: Can't read from file", file_from);
		}
		if (r == 0)
			break;

		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			close_file(fd_from);
			close_file(fd_to);
			print_error(99, "Error: Can't write to", file_to);
		}
	}
}


/**
 * main - entry point. copies contents of one file into another
 *
 * @argc: arg count
 * @argv: arg vector(argv[1] is source, argv[2] is destination)
 *
 * Return: 0 on success,error codes on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
