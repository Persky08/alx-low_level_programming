#include "main.h"
#include <string.h>

/**
 * argstostr - a program that concatenates all the arguments in a program
 * @ac: integer
 * @av: pointer array
 *
 * Return: 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, r = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	n += ac;

	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[r] = av[i][j];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
