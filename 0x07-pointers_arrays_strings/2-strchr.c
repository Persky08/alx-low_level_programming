#include "main.h"

/**
 * *_strchr - a function to locate a string
 * @s: string
 * @c: character to be located
 *
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
	i++;
	}
	return ('\0');
}
