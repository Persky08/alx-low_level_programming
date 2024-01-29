#include "main.h"

/**
 * _atoi- converting string to integer
 * @s: string to be converted
 * Return: 0.
 */
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, a = 0, f = 0, b = 0;

	while (s[a] != '\0')
		a++;
	while (i < a && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			b = s[i] - '0';
			if (d % 2)
				b = -b;
			n = n * 10 + b;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
