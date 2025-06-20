#include "main.h"

/**
 * print_alphabet_x10 - Imprime el alfabeto en minusculas x10,
 * seguido de nueva linea.
 */
void print_alphabet_x10(void)
{
	char letra = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
