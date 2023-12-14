#include "main.h"

/**
 * print_binary - a function that prints binary numbers
 * @n: number to be converted
 *
 * Return: binary representation of the number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Recursively print the binary representation of the quotient */
		print_binary(n >> 1);
	}
	/* Print the last bit */
	_putchar((n & 1) + '0');
}
