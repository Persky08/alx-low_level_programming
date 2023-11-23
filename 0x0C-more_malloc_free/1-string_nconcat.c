#include "main.h"

/**
 * string_nconcat - a program to concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return:0 .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, fir = 0, sec = 0;

	while (s1 && s1[fir])
		fir++;
	while (s2 && s2[sec])
		sec++;
	if (n < sec)
		s = malloc(sizeof(char) * (fir + n + 1));
	else
		s = malloc(sizeof(char) * (fir + sec + 1));
	if (!s)
		return (NULL);
	while (i < fir)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < sec && i < (fir + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= sec && i < (fir + sec))
	{
	s[i++] = s2[j++];
	}
s[i] = '\0';
return (s);
}
