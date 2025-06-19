#include <stdio.h>

/**
 * main - Imprime el alfabeto en minusculas, menos las letras q y e.
 *
 * Return: Siempre 0
 */
int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		if (letra != 'e' && letra != 'q')
			putchar(letra);
		letra++;
	}

	putchar('\n');

	return (0);
}
