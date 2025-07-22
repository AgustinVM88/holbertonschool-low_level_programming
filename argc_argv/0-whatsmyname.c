#include <stdio.h>
#include "main.h"

/**
 * main - Print tha name of the program
 *
 * @argc: numbers of arguments
 * @argv: arguments vector
 *
 * Return: 0 si todo sale bien
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
