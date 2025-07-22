#include "main.h"

/**
 * _is_prime - Helper function that checks for divisors
 *
 * @n: number to check
 * @i: current divisor
 *
 * Return: 1 if it is prime, 0 if it is not
 */
int _is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime
 *
 * @n: number to check
 *
 * Return: 1 if it is prime, 0 if it is not
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
