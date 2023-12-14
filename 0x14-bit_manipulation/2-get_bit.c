#include "main.h"

/**
 * get_bit - a function to get the bit at a given index
 * @n: the bit to get
 * @index: the index
 *
 * Return: n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
