#include "main.h"

/**
 * set_bit - a function to set the bit at a given index
 * @n: the bit to get
 * @index: the index
 *
 * Return: n
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (*n | (1 << index));
}
