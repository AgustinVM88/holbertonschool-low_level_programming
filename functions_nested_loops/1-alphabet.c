#include "main.h"

/**
 * print_alphabet - Imprime el alfabeto en minusculas seguido de nueva linea
 */
void print_alphabet(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	_putchar('\n');
}
