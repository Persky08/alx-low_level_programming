#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @n: string
 * Return: 0.
 */
char *string_toupper(char *n)
{
	int a;


	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}
