#include "main.h"

/**
 * factorial - function that returns the factorial fo a given number
 *
 * @n: int number
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
