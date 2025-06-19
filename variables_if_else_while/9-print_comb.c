#include <stdio.h>

/**
 * main - Imprime todos los numeros de un solo digito.
 *
 * Return: Siempre 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
