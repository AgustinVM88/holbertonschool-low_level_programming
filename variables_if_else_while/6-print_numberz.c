#include <stdio.h>

/**
 * main - Imprime todos los numeros de un solo digito den base 10.
 *
 * Return: Siempre 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar(num + '0'); /* Convierte el numero entero a su caracter ASCII */

	putchar('\n');

	return (0);
}
