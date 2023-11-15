#include "main.h"

/**
 * reverse_array - reverse content of array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0.
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
