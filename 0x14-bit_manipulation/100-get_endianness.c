#include "main.h"
#include <stdint.h>

/**
 * get_endianness - a function to check endianness
 *
 * Return: 0 if big and 1 if little
 */
int get_endianness(void)
{
	uint32_t little;
	char *big;

	little = 1;
	big = (char *) &little;
	return (*big);
}
