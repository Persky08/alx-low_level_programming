#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix
 * @s: The string to be searched
 * @accept: the length of the prefix
 *
 * Return: Number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (0);
}
