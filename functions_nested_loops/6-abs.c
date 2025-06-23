#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: number to check
 *
 * Return: -n if it's negative and n if it's n >= 0.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
