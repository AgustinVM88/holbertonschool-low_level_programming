#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determina si un numero es poitivo, negaivo o cero.
*
* Return: Siempre 0
*/
int main(void)
{
	int n;

	srand(time(0)); /* No tocar esta linea */
	n = rand() - RAND_MAX / 2; /* n sera un numero aleatorio */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
