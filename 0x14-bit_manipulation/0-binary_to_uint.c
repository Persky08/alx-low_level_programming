#include "main.h"

/**
 * binary_to_uint - a function that converts binary to unsigned int
 * @b: pointer to the binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number = 0;

	if (!b || *b == '\0')
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			converted_number <<= 1;
			converted_number += (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (converted_number);
}
