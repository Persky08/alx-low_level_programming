#include "main.h"

/**
 * _memset - a code to fill memory with a constant byte
 * @s: area to be filled
 * @b: constant byte to copy
 * @n: number of times
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
