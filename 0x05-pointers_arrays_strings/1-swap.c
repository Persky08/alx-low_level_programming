#include "main.h"

/**
 * swap_int- a program to switch to integers
 * @a: first integer
 * @b:  second inter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
