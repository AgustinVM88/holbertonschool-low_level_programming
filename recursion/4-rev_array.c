#include "main.h"

/**
 * reverse_array - function that reverses the contents of an array of integers
 *
 * @a: pointer to a string
 * @n: number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int x = 0, temp;

	while (x < n / 2)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
		x++;
	}
}
