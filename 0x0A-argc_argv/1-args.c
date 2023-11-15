#include <stdio.h>

/**
 * main - program to print the number of arguments
 *
 * @argc: count the number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
		return (0);
}

