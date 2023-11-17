#include <stdio.h>

/**
 * main - a function that prints all arguments received
 *
 * @argc: counts number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
				return (0);
				}
