#include "main.h"

/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: string to be search
 * @accept: the bytes to be searched for
 *
 * Return: 0;
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
