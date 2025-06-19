#include <stdio.h>

/**
 * main - Imprime el alfabeto en minusculas seguido de una nueva linea.
 *
 * Return: Siempre 0
 */
int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		putchar(letra);
		letra++;
	}
	putchar('\n');

	return (0);
}
