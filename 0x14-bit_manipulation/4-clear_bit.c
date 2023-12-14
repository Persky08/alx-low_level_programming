#include "main.h"

/**
 * clear_bit - a function to clear the bit at a given index
 * @n: the bit to get
 * @index: the index
 *
 * Return: n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
