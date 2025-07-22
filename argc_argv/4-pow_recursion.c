#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 *
 * @x: base
 * @y: power
 *
 * Return: result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)		/* Error: Exponente negativo*/
		return (-1);
	if (y == 0)		/* Caso base: 0 ^ 0 = 1 */
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
