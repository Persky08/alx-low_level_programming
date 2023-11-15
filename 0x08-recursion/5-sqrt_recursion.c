#include "main.h"

/**
 * sqrt_a - square root of a number
 * @a: input number
 * @b: outpur
 *
 * Return: 0 or -1
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
			}

/**
 * _sqrt_recursion - a function for finding the square root of a number
 * @n: the number in question
 *
 * Return: square root of the n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
