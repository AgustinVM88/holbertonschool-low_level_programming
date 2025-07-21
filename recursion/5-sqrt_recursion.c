#include "main.h"

/**
 * _sqrt_helper - Recursive auxiliary function to find square root
 *
 * @n: original number
 * @i: number being tested (from 1 onwards)
 *
 * Return: the square root or -1 if it does not exist
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: int number
 *
 * Return: square root or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}
