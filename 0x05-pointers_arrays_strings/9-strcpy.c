#include "main.h"

/**
 * *_strcpy - copy the string pointed to by src
 * @src: copy to
 * @dest: destination
 * Return: 0;
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	return (0);
}
