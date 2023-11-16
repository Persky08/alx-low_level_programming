#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - a function that determines if a number is prime
 * @n: number to be determine
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	return (prime(n, n - 1));

/**
 * prime - function to check if a number is prime
 * @n: the number to check
 * @i: iterator
 *
 * Return: 1 if prime else 0
 */

int prime(int n, int i)

	if (i == 1)
		return (1);
		if (n % i == 0)
		{
		return (0);
		}
		return (prime(n, n - 1));
}
