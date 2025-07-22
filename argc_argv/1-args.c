#include <stdio.h>
#include "main.h"

/**
 * main - Print the number of arguments (excluding the program name)
 *
 * @argc: number of arguments (includes the program name)
 * @argv: vector of arguments (not used here)
 *
 * Return: 0 if everything goes well
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
