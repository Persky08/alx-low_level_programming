#include "main.h"

/**
 * _isupper - a function to check if a letter is uppercase
 * @c: the character to check
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
