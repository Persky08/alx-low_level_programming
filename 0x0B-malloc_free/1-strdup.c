#include "main.h"

/**
 *_strdup - A program to duplicate/copy a string
 * @str: a pointer to the string
 *
 * Return: 0;
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		ptr[a] = str[a];
	return (ptr);
}
