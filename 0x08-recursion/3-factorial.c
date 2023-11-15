#include "main.h"

/**
 * factorial - finding factorial of a number
 * @n: the number to be found
 *
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
	return (0);
}
