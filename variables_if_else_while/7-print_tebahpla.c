#include <stdio.h>

/**
 * main - Imprime el alfabeto en minusculas en orden inverso,
 * seguido de una nueva linea.
 *
 * Return: Siempre 0
 */
int main(void)
{
	char letra = 'z';

	while (letra >= 'a')
	{
		putchar(letra);
		letra--;
	}
	putchar('\n');

	return (0);
}
