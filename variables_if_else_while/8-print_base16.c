#include <stdio.h>

/**
 * main - Imprime todos los caracteres hexadecimales en minusculas
 * en base 16.
 *
 * Return: Siempre 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (num = 10; num < 16; num++)
		putchar(num - 10 + 'a');

	putchar('\n');

	return (0);
}
