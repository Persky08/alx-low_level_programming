#include "main.h"

/**
 * count_word - a function to count word in a string
 * @s: string
 *
 * Return: int
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}


/**
 * strtow - a program to split a string into words
 * @str: string to be split into words
 *
 * Return: 0.
 */
char **strtow(char *str)
{
	char **d, *e;
	int i, k = 0, j = 0, words, f = 0, start, end;

	while (*(str + j))
		j++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	d = (char **)malloc(sizeof(char *) * (words + 1));
	if (d == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (f)
			{
				end = i;
				e = (char *)malloc(sizeof(char) * (f + 1));
				if (e == NULL)
					return (NULL);
				while (start < end)
					*e++ = str[start++];
				*e = '\0';
				d[j] = e - f;
				k++;
				f = 0;
			}
		}
		else if (f++ == 0)
			start = i;
	}
	d[k] = NULL;
	return (d);
}


