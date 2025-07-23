#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_before_main - function that prints before function is executed
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
