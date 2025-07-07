#include <stdio.h>

/**
 * main - prints 1 to 100, followed by a new line. But for multiples
 * of three prints Fizz and for multiples of five print Buzz.
 * For numbers multiples of both print FizzBuzz
 *
 * Return: 0
 *
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0 && x < 100)
			printf("Fizz ");
		else if (x % 5 == 0 && x < 100)
			printf("Buzz ");
		else if (x % 5 == 0 && x == 100)
			printf("Buzz");
		else
			printf("%d ", x);
		x++;
	}
	printf("\n");

	return (0);
}
