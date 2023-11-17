#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination memory area
 * @src: character to be copied
 * @n: number of times
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
