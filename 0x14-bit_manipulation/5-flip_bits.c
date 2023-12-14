#include "main.h"

/**
 * flip_bit - a function to return the number of bit to from one to another
 * @n: the first bit
 * @m: the second bit
 *
 * Return: n
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		i += result & 1;
		result >>= 1;
	}
	return (i);
}
