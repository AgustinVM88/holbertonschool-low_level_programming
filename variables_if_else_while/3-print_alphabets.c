#include <stdio.h>

/**
 * main - Imprime el alfabeto en minusculas y luegi en mayusculas,
 * seguido de una nueva linea.
 *
 * Return: Siempre 0
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		putchar(letra);
	for (letra = 'A'; letra <= 'Z'; letra++)
		putchar(letra);

	putchar('\n');

	return (0);
}
