#include <stdio.h>

/**
 *main - a function that prints my name
 *
 * @argc: counts of command line arguments
 * @argv: vector(array) that contains the command line arguments
 *
 * Return: name
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
			return (0);
}

