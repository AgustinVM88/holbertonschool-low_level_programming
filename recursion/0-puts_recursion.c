#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline, using recursion
 *
 * @s: pointer to the string to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);		/* Imprime el caracter actual*/
	_puts_recursion(s + 1); /* Llama a la funcion con el siguiente caracter */
}
