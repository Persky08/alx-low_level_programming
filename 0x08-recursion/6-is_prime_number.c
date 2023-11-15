#include "main.h"

/**
 * is_prime_number - a function that determines if a number is prime
 * @n: number to be determine
 *
 * return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i*i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
