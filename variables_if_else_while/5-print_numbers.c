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
		printf("%d", num);

	printf("\n");

	return (0);
}
