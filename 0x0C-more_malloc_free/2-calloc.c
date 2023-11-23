#include "main.h"

/**
 * _memset - a function to fill a memory with constant byte
 * @m: memory to be filled
 * @c: char to copy
 * @n: number of times to copy c
 *
 * Return: 0
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}
	return (m);
}

/**
 * _calloc - a program that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of nmeb
 *
 * Return: 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
