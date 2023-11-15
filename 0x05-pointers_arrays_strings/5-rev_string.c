#include "main.h"

/**
 * rev_string - Reverse string
 * @s: the string
 * Return: reverse
 */
void rev_string(char *s)
{
	char rev = s[10];
	int new = 0;
	int a;

	while (s[new] != '\0')
		new++;
	for (a = 0; a < new; a++)
	{
		new--;
		rev = s[a];
		s[a] = s[new];
		s[new] = rev;
	}
}
