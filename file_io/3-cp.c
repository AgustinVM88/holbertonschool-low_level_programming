#include "main.h"

/**
 * main - entry point. copies contents of one file into another
 *
 * @argc: arg count
 * @argv: arg vector(argv[1] is source, argv[2] is destination)
 *
 * Return: 0 on success, otherwise exits with error codes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	check_args(argc);
	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);
	copy_file(fd_from, fd_to, argv[1], argv[2]);
	close_file(fd_from, 100);
	close_file(fd_to, 100);

	return (0);
}
