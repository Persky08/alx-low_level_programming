#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a program that allocates memory using malloc
 * @b: amount of memory to be allocated
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
