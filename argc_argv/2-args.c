#include <stdio.h>
#include "main.h"

/**
 * main - Print the arguments
 *
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: 0 if everything goes well
 *
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
